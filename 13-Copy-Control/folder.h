#ifndef FOLDER_H
#define FOLDER_H

#include <set>
#include "message.h"
class Message;

class Folder {
public:
    void add_message(Message*);
    void remove_message(Message*);
private:
    std::set<Message*> messages;
};
#endif
