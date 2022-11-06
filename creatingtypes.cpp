/* In this class we learned to redefine operators for a variable type
++ operator is redefined for oparting with the days type
operator << that is already redefined in std to print, is further
redefined for the days datatype.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef enum days{SUN, MON, TUE, WED, THU, FRI, SAT} days;

inline days operator++ (days d){
    return static_cast<days>((static_cast<int>(d)+1)%7);
}

ostream& operator<< (ostream& out, const days& d){
    switch (d)
    {
    case SUN: out << "SUN"; break;
    case MON: out << "MON"; break;
    case TUE: out << "TUE"; break;
    case WED: out << "WED"; break;
    case THU: out << "THU"; break;
    case FRI: out << "FRI"; break;
    case SAT: out << "SAT"; break;
    }
    return out;
}

int main(){
    days d = MON, e;
    e = ++d; //calling operator++(days)
    cout << d << '\t' << e << endl; //using operator<<, should print MON TUE
}