#include <iostream>
#include <algorithm>
#include <string>
#include <memory>
#include <utility>
#include "strvec.h"

std::allocator<std::string> Strvec::alloc;

void Strvec::push_back(const std::string &s) {
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*> Strvec::alloc_n_copy(const std::string *beg, const std::string *end) {
    auto data = alloc.allocate(end - beg);
    return {data, uninitialized_copy(beg, end, data)};
}

void Strvec::free() {
    if ( elements ) {
        for ( auto p = first_free; p != elements; ) {
            alloc.destroy(--p);
        }
        alloc.deallocate(elements, cap - elements);
    }
}

Strvec::Strvec(const Strvec &s) {
    auto newdata = alloc_n_copy(s.begin(), s.end());
    elements = newdata.first;
    first_free = cap = newdata.second;
}

Strvec::~Strvec() {
    free();
}

Strvec &Strvec::operator=(const Strvec &s) {
    auto data = alloc_n_copy(s.begin(), s.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

void Strvec::reallocate() {
    auto newcapacity = size() ? 2 * size() : 1;
    auto newdata = alloc.allocate(newcapacity);
    auto dest = newdata;
    auto elem = elements;
    for ( size_t i = 0; i != size(); ++i) {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = newdata;
    first_free = dest;
    cap = elements - newcapacity;
}
