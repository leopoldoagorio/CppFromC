#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class point{
    public:
        point(double u):x(u), y(0.0){}
    public:
        double x,y;
};

point::operator double(){ //point to double conversion
    return x*x + y*y;
}

int main(int argc, char const *argv[])
{
    point s;
    double d=3.5, b;

    s= d; //implicit conversion (from double to point, through constructor)
    s = static_cast<point>(d); //explicit
    b = s;
}
