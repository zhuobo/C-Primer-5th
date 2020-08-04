#ifndef __STRVEC_H__
#define __STRVEC_H__

#include <memory>
#include <string>
#include <utility>
class Strvec {
public:
    Strvec() : elements(nullptr), first_free(nullptr), cap(nullptr){}
    Strvec(const Strvec&);
    Strvec &operator=(const Strvec&);
    ~Strvec();
    void push_back(const std::string&);
    size_t size() const {
        return first_free - elements;
    };
    size_t capacity() const {
        return cap - elements;
    }
    std::string *begin() const {
        return elements;
    }
    std::string *end() const {
        return first_free;
    }
private:
    static std::allocator<std::string> alloc;
    void chk_n_alloc(){
        if ( size() == capacity() ) {
            reallocate();
        }
    }
    void reallocate();
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
    void free();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};

#endif
