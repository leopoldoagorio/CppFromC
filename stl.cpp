//Thre legged stool. containers, iterators and algs
//containers: vector, list, map
//iterators: forward, backward
//algorithms: sort, permute

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(100); //allocate space
    for (int i=0; i<100; ++i)
        v[i] = i; //index thru like an array
    for (auto p =v.begin(); p!=v.end();++p) //hereauto~vector<int>::iterator
        cout<< *p << '\t';
    cout<<endl;
    return 0;
}
