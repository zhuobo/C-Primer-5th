class Box {
    public:
        double getVolume(void);
        void setLength( double length );
        void setBreadth( double breadth );
        void setHeight( double height );
        double getLength( void );
        double getBreadth( void );
        double getHeight( void );

    private:
        double breadth;
        double height;
    protected:
        double length;
};

double Box::getVolume() {
    return length * breadth * height;
}

void Box::setLength( double len ) {
    length = len;
}

void Box::setBreadth( double brea ) {
    breadth = brea;
}

void Box::setHeight( double hei ) {
    height = hei;
}

double Box::getLength() {
    return length;
}

double Box::getBreadth() {
    return breadth;
}

double Box::getHeight() {
    return height;
}

