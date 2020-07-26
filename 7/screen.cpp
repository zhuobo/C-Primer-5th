#include "screen.h"

char Screen::get(pos ht, pos wd) const {
    pos row = ht * width;
    return contents[row + wd];
}

Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}


