// Problem: G. Check If Array is Sorted
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement: Determine whether the array is sorted in ascending order.
//            Print YES if Ai <= Ai+1 for all i, else NO.
//
// Approach: Array sorted ascending if a[i] >= a[i-1] for all i. break on first violation.

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
}

int main() {

    int t = 1;
    //cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}
