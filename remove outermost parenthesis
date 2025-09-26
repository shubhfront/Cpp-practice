#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    for (int i=0; i<word.length(); i++)
    {
        if (word[i+1] == ')' && i == word.length()-1)
        {
            break;
        }
        word[i] = word[i+1];

    }
    
    cout << "the final string is: " << endl; 
    
    for (int i=0; i<word.length()-2; i++)
    {
        cout << word[i];
    }
    return 0;
}
