#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class point{
    friend ostream& operator<<(ostream &,...); //perminte acceso
    public:
        point operator+(point p)
        {return point(x+p.x,y+p.y);}
    private:
        double x,y;
};

ostream& operator<<(ostream& out, const point& p)
{ out << "(" << x <<"," <<y <<")"; return out}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
