#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int stairs;
    cout << "Enter the number of stairs: ";
    cin >> stairs;
    
    srand(time(0)); 
    int reachedStair = 1;
    int steps = 0;
    
    for (int i=1; i<=stairs; i++)
    {
        if (reachedStair == stairs)
        {
            break;
        }
        int randomValue = rand() % 2 + 1; 
        cout << randomValue << endl;
        
        reachedStair += randomValue;
        steps++;
    }
    
    cout << "The number of steps are: " << steps << endl;
    return 0;
}
