#include <iostream>
using namespace std;

int main()
{
    int myArr[5] = {1, 2, 4, 1, 3};
    int length = sizeof(myArr)/sizeof(myArr[0]);
    
    int flag = 0;
    for (int i=0; i<length; i++)
    {
        for (int j=0; j<length; j++)
        {
            if (i!=j && myArr[i]==myArr[j])
            {
                flag++;
            }
        }
    }
    if (flag == 0)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
}
