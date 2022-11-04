#include <iostream>
#include <complex>

using namespace std;

inline void swap(int& i, int&j){ //el call for reference ya incorporado a diferencia de C
    int temp = i;
    i = j;
    j= temp;
}

inline void swap(double& i, double&j ){ //pueden haber dos funciones iguales porque overloading
    double temp = i;
    i = j;
    j = temp;
}

template<class T>
inline void swapgeneric(T& d, T& s){ //puedo definir un generic a partir de template
    T temp = d;
    d = s;
    s = temp;
}

//UNRELATED: ejemplo de suma de un array con generic. se suma desde s (0 por default) todos los 
//elementos del arreglo data
template<class summable>
summable sum(const summable data[], int size, summable s=0){
    for( int i=0; i< size; ++i)
        s += data[i];
    return s;
}
int main()
{
    int m=5, n=10;
    double x=5.3, y=10.4;
    complex<double> r(2.4, 3.5), s(3.4, 6.7);
    
    cout << "inputs:" << m << "," << n << endl; //swaping ints
    swap(n,m);
    cout << "inputs:" << m << "," << n << endl;
    
    cout << "double inputs:" << x << "," << y << endl; //swaping doubles
    swap(x,y);
    cout << "double inputs:" << x << "," << y << endl;

    cout << "complex inputs:" << r << "," << s << endl; //swaping doubles
    swapgeneric(r,s);
    cout << "complex inputs:" << r << "," << s << endl;

}