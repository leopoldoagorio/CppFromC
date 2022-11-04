#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; //hace que usemos std por defecto
const int sides = 6; //replaces many sharp defines
inline int r_sides(){return (rand()%sides+1);}; //compiler directive, replaces macros

int main(void)
{
    const int n_dice = 2;
    int d1,d2;
    srand(clock()); //seed for random number generator
    cout << "\n Enter number of trials"; // eq std::cout, el :: es "scope res operator"
    // el operador << es "overload" porque va a un ostream (si fuera entre bits seria bitshift)
    int trials;
    cin >> trials; //compares to scanf. es "typesafe": ya sabe que esperar
    int* outcomes = new int[n_dice*sides+1]; //new~malloc. delete~free
    for(int j=0; j<trials; ++j)
        outcomes[(d1=r_sides())+(d2=r_sides())]++;
    cout << "probability\n";
    for (int j=2; j<n_dice*sides+1;++j)
        cout <<"j=" <<j << " p ="
        << outcomes[j]// static_cast<double>(outcomes[j])/trials //cast like (double)
        << endl; //iomanipulator equivalent to \n
    //delete []outcomes;
    cin >> trials;
}