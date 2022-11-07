#include <vector>
#include <stdexcept>
#include <iostream>

class MovingTotal
{
public:
    void append(const std::vector<int>& list) 
    {
        data.insert(data.end(),list.begin(),list.end());
    }

    bool contains(int total) 
    {
        if(this->data.size()<3){
            return false;
        }else{
            std::vector<int> sums;
            for(int i = 0; i<this->data.size()-3,i++)
                sums.push_back(accumulate(this->data.begin()+i, this->data.begin()+i+3, 0););
            //find total
        }
            
        
    }
private:
    std::vector<int> data;
};

#ifndef RunTests
int main()
{
    MovingTotal movingTotal;

    std::vector<int> first,test;
    test= {8,8};
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    test.insert(test.end(),first.begin(),first.end());
    movingTotal.append(first);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;

    std::vector<int> second;
    second.push_back(5);
    movingTotal.append(second);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;
}
#endif