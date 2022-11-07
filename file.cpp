#include<iostream>
#include<iterator>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream word_file("word.txt");
    istream_iterator<string> start(word_file), end;
    vector<string> words(start,end);

    cout << "\n\n words as read\n";
    for(auto str: words)
        cout << str << "\t";
    sort(words.begin(), words.end());
    cout << "\n \n words as sorted \n";
    for(auto str: words)
        cout << str << "\t";
    cout<<endl;
    return 0;
}
