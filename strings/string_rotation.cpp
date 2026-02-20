#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    string chkWord;
    cout << "Enter another word: ";
    cin >> chkWord;
    
    if (word.length() != chkWord.length())
    {
        cout << "The strings can never be rotation";
    }
    else
    {
        int flag = 0;
        int len = word.length();
        for (int i=0; i< len; i++)
        {
            if (word[i] == chkWord[len-i-1])
            {
                flag = 1;
            }
            else
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "The strings are not rotations of each other";
        }
        else
        {
            cout << "The strings are rotations of each other";
        }
    }
}
