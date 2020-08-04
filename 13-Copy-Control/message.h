#ifndef MESSAGE_H
#define MESSAGE_H
#include <set>
#include <string>
#include "folder.h"

class Folder;

class Message {
    friend class Folder;
public:
    explicit Message(const std::string &str = ""):contents(str){}
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    // 从给定的 Folder 中添加删除本message
    void save(Folder&);
    void remove(Folder&);

    std::string getContents() const;
    std::set<Folder*> getFolders() const;
private:
    std::string contents;
    std::set<Folder*> folders;
    // 这两个是拷贝构造函数,拷贝复制运算符,析构函数用到的工具函数
    // 将本 message 添加到指向参数的 folder 中
    void add_to_folders(const Message&);
    // 从 folders 中的每个 Folder 中删除本message
    void remove_from_folders();
};

#endif
