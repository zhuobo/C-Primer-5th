#include <set>
#include "folder.h"
#include "message.h"

void Folder::add_message(Message *m) {
    messages.insert(m);
}

void Folder::remove_message(Message *m) {
    messages.erase(m);
}

