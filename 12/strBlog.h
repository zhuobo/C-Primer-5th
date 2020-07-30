#ifndef STRBLOB_H
#define STRBLOB_H

#include <string>
#include <vector>
#include <memory>

class StrBlog{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlog();
    StrBlog(std::initializer_list<std::string> ilst);
    size_type size() const;
    bool empty() const;
    void push_back(const std::string &s);
    void pop_back();
    std::string &front();
    std::string &back();
    std::string &front()const;
    std::string &back()const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

#endif
