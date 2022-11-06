#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class list_element{
    public:
    list_element(int n=0, list_element* ptr = 0): //null pointer
    d(n), next(ptr){}
    int d;
    list_element* next;
};
class list{
    public:
        list():head(0), cursor(0){}
        void prepend(int n);
        int get_element(){return cursor->d;}
        void advance(){ cursor = cursor->next;}
        void print();
    private:
        list_element* head;
        list_element* cursor;
};
void list::prepend(int n){
    if (head==0)
        cursor = head = new list_element(n, head);
    else
        head = new list_element(n,head);
}

void list::print(){
    list_element* h = head;
    while(h != 0){
        cout << h->d << ", ";
        h = h -> next;
    }
    cout << "###" << endl;
}

int main(){
    list a,b;
    a.prepend(9); a.prepend(8);
    cout << "list a" << endl;
    a.print();
    for (int i=0; i<30; ++i)
        b.prepend(i*i);
    cout << "list b" << endl;
    b.print(); 
}