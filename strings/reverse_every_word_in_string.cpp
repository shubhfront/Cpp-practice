#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

string revWord(string word){
    int len = word.length();
    string rev = "";
    for (int i=len-1; i>=0; i--)
    {
        rev += word[i];
    }
    return rev;
}

int main(){
    string line;
    cout << "Enter a line: ";
    getline(cin, line);
    
    stringstream ss(line);
    string word;
    vector<string> words;
    vector<string> reversed;
    
    while (ss >> word)
    {
        words.push_back(word);
    }
    
    for (string w : words)
    {
        reversed.push_back(revWord(w));
    }
    
    cout << "The final string is:" << endl;
    for (int i=0; i<reversed.size(); i++)
    {
        cout << reversed[i] << " ";
    }
    
}

