#include <string>
#include <set>
#include "folder.h"
#include "message.h"

void Message::save(Folder &f) {
    folders.insert(&f);
    f.add_message(this);
}

void Message::remove(Folder &f) {
    folders.erase(&f);
    f.remove_message(this);
}

void Message::add_to_folders(const Message &m) {
    for ( auto f : m.folders) {
        f->add_message(this);
    }
}

void Message::remove_from_folders() {
    for ( auto f : folders ) {
        f->remove_message(this);
    }
}

Message::Message(const Message &m) : contents(m.contents), folders(m.folders){
    for ( auto f : m.folders ) {
        add_to_folders(m);
    }
}

Message& Message::operator=(const Message &m) {
    remove_from_folders();
    contents = m.contents;
    folders = m.folders;
    add_to_folders(m);
    return *this;
}

Message::~Message() {
    remove_from_folders();
}

std::string Message::getContents() const {
    return contents;
}

std::set<Folder*> Message::getFolders() const {
    return folders; 
}
