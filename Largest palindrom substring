#include <iostream>
#include <string>
#include <vector>
using namespace std;


int StrPali(string word){
    string chkPal;
    int len = word.length();
    
    for (int i=0; i<len; i++)
    {
        chkPal[i] = word[len-i-1];
    }
    if (chkPal == word)
    {
        if (word.length() != 1)
        {
            subStr.push_back(word);
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

void allSub(string word) {
    int len = word.length();
    
    for (int i=0; i<len; i++) 
    {
        for (int j=i; j<len; j++) 
        {
            StrPali(word.substr(i, j - i + 1));
        }
    }
}

int main(){
    vector<string> subStr;
    
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    int fullstr = StrPali(word);
    
    if (fullstr == 1)
    {
        cout << "The longest palindromic substring is string itself";
        return 0;
    }
    else 
    {
        allSub(word);
    }
    
    
    if (subStr.size() != 0)
    {
        int greatLen = 0;
        int index;
        for (int i=0; i<subStr.size(); i++) 
        {
            int len = subStr[i].length();
            if (len > greatLen)
            {
                greatLen = len;
                index = i;
            }
        }
        cout << "The substring is: " << subStr[index];
    }
    else
    {
        cout << "Every substring is non palindrom";
    }

    
}
