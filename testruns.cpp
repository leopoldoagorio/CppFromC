#include <stdexcept>
#include <iostream>

const int large_capacity = 5;
const int short_capacity = 1;

int minimalNumberOfPackages(int items, int availableLargePackages, int availableSmallPackages)
{
    int num_large,num_short;
    if(items/large_capacity<=availableLargePackages)
        num_large = items/large_capacity;
    else
        num_large = availableLargePackages;
    if((items-num_large*large_capacity)/short_capacity <= availableSmallPackages){
        num_short = (items-num_large*large_capacity)/short_capacity;
        return num_large + num_short;
    }
    else
        return -1;
        
    //throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::cout << minimalNumberOfPackages(16, 2, 10);
}
#endif