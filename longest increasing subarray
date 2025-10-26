#include <bits/stdc++.h>
using namespace std;

tuple<int,int,int> longestIncreasingSubarray(const vector<int>& a) {
    int n = (int)a.size();
    if (n == 0) return {-1, -1, 0};

    int bestL = 0, bestR = 0;      
    int curL = 0;                  

    for (int i = 1; i < n; ++i) 
    {
        if (a[i] > a[i-1]) 
        {
            int curLen = i - curL + 1;
            int bestLen = bestR - bestL + 1;
            if (curLen > bestLen) 
            {
                bestL = curL;
                bestR = i;
            }
        } 
        else 
        {
            curL = i;
        }
    }

    return {bestL, bestR, bestR - bestL + 1};
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter n (size of array): ";
    if (!(cin >> n) || n < 0) 
    {
        cerr << "Invalid size\n";
        return 1;
    }

    vector<int> a(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) cin >> a[i];

    auto [L, R, len] = longestIncreasingSubarray(a);

    if (len == 0) 
    {
        cout << "Array is empty. No subarray.\n";
    } 
    else 
    {
        cout << "Longest strictly increasing subarray length = " << len << "\n";
        cout << "Start index (0-based) = " << L << ", End index (0-based) = " << R << "\n";
        cout << "Start index (1-based) = " << (L+1) << ", End index (1-based) = " << (R+1) << "\n";
        cout << "Subarray: [";
        for (int i = L; i <= R; ++i) 
        {
            cout << a[i];
            if (i < R) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
