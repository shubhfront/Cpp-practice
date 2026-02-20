#include <iostream>
using namespace std;

int main()
{
    int myArr[5] = {1, 3, 5, 2, 6};
    int sumExp;
    cout << "Enter a number to leave from the array: ";
    cin >> sumExp;
    
    int length = sizeof(myArr)/sizeof(myArr[0]);
    int sum = 0;

    for (int i=0; i<length; i++)
    {
        if (myArr[i] == sumExp)
        {
            continue;
        }
        else
        {
            sum = sum + myArr[i];
        }
    }
    
    cout << "The sum of Array except " << sumExp << " is " << sum;
}
