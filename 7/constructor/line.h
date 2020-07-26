#ifndef LINE_H
#define LINE_H

class Line {
    public:
        void setLength( double len );
        double getLength ( void );
        Line();
        Line( double len );
        Line( const Line &obj );
        ~Line();
    private:
        double *ptr;
};

#endif
