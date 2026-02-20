#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 
    
    for (int j = low; j <= high - 1; j++) 
    {
        if (arr[j] <= pivot) 
        {
            i++; 
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) 
{
    if (low < high) 
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(const vector<int>& arr) 
{
    for (int x : arr) 
    {
        cout << x << " ";
    }
    cout << endl;
}

int main() 
{
    vector<int> data = {10, 7, 8, 9, 1, 5};
    int n = data.size();

    cout << "Given array is: ";
    printArray(data);
    quickSort(data, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(data);

    return 0;
}
