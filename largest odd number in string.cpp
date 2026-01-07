// to find the largest odd number in the string 
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string of numbers: ";
    cin >> s;
    
    int oddNum = 0;
    int multiple = 10;
    int len = s.length();
    
    for (int n = 0; n < len; n++)
    {
        int i = s[n] - '0';
        if (i != 0)
        {
            oddNum = (oddNum * multiple) + i;
        }
        
    }
    if (oddNum % 2 !=0)
    {
        cout << "The final number is: " << oddNum;
    }
    else 
    {
        int rem;
        int midNum;
        while (oddNum)
        {
            rem = oddNum % 10;
            midNum = oddNum - rem;
            oddNum = oddNum / 10;
            if (oddNum % 2 != 0)
            {
                cout << "the final required number is:" << oddNum;
                break;
            }
            else if (oddNum == 0)
            {
                cout << "The string do not contain any odd number";
            }
        }
    }
}
