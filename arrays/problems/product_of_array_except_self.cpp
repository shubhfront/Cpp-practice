#include <iostream>
using namespace std;

int main()
{
    int myArr[5] = {1, 3, 5, 2, 6};
    int prodExp;
    cout << "Enter a number to leave from the array: ";
    cin >> prodExp;
    
    int length = sizeof(myArr)/sizeof(myArr[0]);
    int prod = 1;

    for (int i=0; i<length; i++)
    {
        if (myArr[i] == prodExp)
        {
            continue;
        }
        else
        {
            prod = prod*myArr[i];
        }
    }
    
    cout << "The product of Array except " << prodExp << " is " << prod;
}
