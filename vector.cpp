//simple vector program
#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    int how_many;
    std::cout << "How many ints in data?:" << std::endl;
    std::cin >> how_many;
    std::vector<int> data (how_many);
    std::cout << "The contents of data:";
    for (std::vector<int>::iterator it =data.begin(); it != data.end(); ++it)
        std::cin>> *it;
    std::cout << "Your input was:";
    for (auto it = data.begin(); it != data.end();++it)
        std::cout << *it << '\t';
    return 0;
}
