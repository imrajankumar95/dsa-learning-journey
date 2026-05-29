// Problem: H. Sort 01
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays / Counting Sort
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Array holds only 0s and 1s. Count each, then print c0 zeros followed by c1 ones.
// Counting approach avoids a comparison sort.

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int c0 = 0, c1 = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }

    for(int i = 1; i <= c0; i++) //print all 0's
    {
        cout << "0 ";
    }

    for(int i = 1; i <= c1; i++) //print all 1's
    {
        cout << "1 " ;
    }
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}
