#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int greatodd = 0;
    
    for (char alpha : word)
    {
        if (isdigit(alpha))
        {
            int ch = alpha;
            if (ch%2 != 0 && ch > greatodd)
            {
                greatodd = alpha;
            }
        }
    }
    if (greatodd == 0)
    {
        cout << "There is no odd number in string";
    }
    else{
        cout << "The greatest odd number is: " << greatodd-48;
    }
}
