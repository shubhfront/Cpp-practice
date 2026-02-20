#include <iostream>
using namespace std;

int main(){
    int myArr[5] = {12, 10, 9, 13, 5};
    int length = sizeof(myArr)/sizeof(myArr[0]);
    for (int i=0; i<length; i++)
    {
        for (int j=0; j<length-1; j++)
        {
            int first = myArr[j+1];
            int second = myArr[j];
            if (first < second)
            {
                myArr[j] = first;
                myArr[j+1] = second;
            }
        }
    }
    
    cout << "The sorted array is: " << endl;
    for (int i=0; i<length; i++)
    {
        cout << myArr[i] << " ";
    }
}
