// Problem: K. Swap Alternate
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an array A of size n, swap every pair of alternate elements.
//   Input:  Line 1 = t test cases. Per case: line 1 = n (0<=n<=1e5),
//           line 2 = n integers (1<=Ai<=1e9).
//   Output: The modified array after all swaps.
//   Example: Input  -> 1 / 6 / 9 3 6 12 4 32
//            Output -> 3 9 12 6 32 4
//
// Approach: Walk i from 1 in steps of 2, swap a[i] with a[i-1].

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

    for (int i = 1; i < n; i += 2)
    {
        swap(a[i], a[i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
