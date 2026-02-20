#include <iostream>
using namespace std;

int main()
{
    int myArr[5] = {1, 2, 4, 5, 6};
    int length = sizeof(myArr)/sizeof(myArr[0]);
    
    for (int i=0; i<=length; i++)
    {
        if (myArr[i] != i+1)
        {
            cout << i+1 << " is missing" << endl;
            break;
        }
    }
}
