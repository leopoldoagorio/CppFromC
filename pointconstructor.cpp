#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class point{
    public:
        point(double x=0.0, double y=0.0):x(x),y(y){} //constructor
        double getx(){return x;} //accessor
        void setx(double v){x=v;} //mutator
    public: //public, private, protected are access keywords
        double x,y;
};
//constructor point(){x=y=0;}
//constructor point(){this -> x = 0.0; this -> y =0.0;} this ~~ self
//constructor point(double x=0.0, double y=0.0):x(x),y(y){} //constructor
// initialization list (last one) allows for more things
point operator+ (point& p1, point& p2){
    point sum(p1.x + p2.x, p1.y + p2.y);
    return sum;
}
ostream& operator<< (ostream& out, const point& p){
    out << "(" << p.x << ", " << p.y << " )";
    return out;
}

int main(){
    point a = {3.5,2.5}, b = {2.5,4.5}, c;
    cout << "a = " << a << " b = " << b << endl;
    cout << " sum = " << a + b << endl;
} 