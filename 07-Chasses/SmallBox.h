#include "Box.h"

class SmallBox:Box {
    public:
        void setSmallHeight( double hei );
        void setSmallBreadth( double brea );
        void setSmallLength( double len );
};

void SmallBox::setSmallLength( double len ) {
    length = len;
}
