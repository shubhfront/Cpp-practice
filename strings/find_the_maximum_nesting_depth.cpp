#include <iostream>
#include <vector>
using namespace std;

int main(){
    string word;
    cout << "Enter a word :";
    cin >> word;
    
    vector<int> len;
    
    int para = 0;
    for (char i : word)
    {
        ;
        if (i == '(')
        {
            para ++;
        }
        else if (i == ')')
        {
           len.push_back(para); 
        }
        else if (i == '+' || i == '-' || i == '*' || i == '/')
        {
            para = 0;
        }
    }
    int great = len[0];
    for (int i : len)
    {
        if (i > great)
        {
            great = i;
        }
    }
    
    cout << "The maximum nesting depth is: " << great << endl;
}
