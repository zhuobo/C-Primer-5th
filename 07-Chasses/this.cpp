#include <IOSTREAM>

class Line {
    public:
        Line();
        Line( double );
        Line( const Line& );
        double getLength();
        void setLength( double );
        bool compare( const Line &line );
    private:
        double length;
};

Line::Line(){}
Line::Line( double len ) : length(len) {}
Line::Line( const Line &otherLine ) : length(otherLine.length){}
double Line::getLength() {
    return length;
}
void Line::setLength( double len ) {
    length = len;
}
bool Line::compare( const Line &otherLine ) {
    return this -> length > otherLine.length;
}

int main() {
    Line line1(2.1), line2(2.3);
    Line *p = &line1;
    std::cout << p->compare(line2) << std::endl;
    std::cout << line1.compare(line2) << std::endl;
    return 0;
}
