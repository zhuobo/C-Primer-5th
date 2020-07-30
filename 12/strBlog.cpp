#include "strBlog.h"
#include <stdexcept>
#include <string>
#include <vector>


StrBlog::StrBlog() : data(std::make_shared<std::vector<std::string>>()){}

StrBlog::StrBlog(std::initializer_list<std::string> ilst) : data(std::make_shared<std::vector<std::string>>(ilst)){}

StrBlog::size_type StrBlog::size() const {
    return data->size();
}

bool StrBlog::empty() const {
    return data->empty();
}

void StrBlog::push_back(const std::string &s) {
    data->push_back(s);
}

void StrBlog::check(size_type i, const std::string &msg)const{
    if ( i >= data->size() ) {
        throw std::out_of_range(msg);
    }
}

void StrBlog::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

std::string& StrBlog::front() {
    check(0, "front on empty StrBlog");
    return data->front();
}

std::string& StrBlog::back() {
    check(0, "back on empty StrBlog");
    return data->back();
}

std::string& StrBlog::front()const {
    check(0, "front on empty StrBlog");
    return data->front();
}

std::string& StrBlog::back() const {
    check(0, "back on empty StrBlog");
    return data->back();
}

