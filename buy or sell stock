#include <iostream>
using namespace std;

int main(){
    int profitRate[7] = {2, 5, 7, 3, 9, 6, 1};
    int length = sizeof(profitRate)/sizeof(profitRate[0]);
    int CP; int SP; int maxProf=0; int BuyDay; int SellDay;
    
    for (int i=0; i<length; i++)
    {
        CP = profitRate[i];
        for (int j=i; j<length; j++)
        {
            SP = profitRate[j];
            int profit = SP - CP;
            if (profit > maxProf)
            {
                maxProf = profit;
                BuyDay = i;
                SellDay = j;
            }
        }
    }
    cout << "Stock should be brought at day: " << BuyDay+1 << endl;
    cout << "Stock should be sold at day: " << SellDay+1 << endl;
}
