// Problem: I. Reverse
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   You are given an array of integers. Reverse it (in-place) and print it.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N integers Ai (-1e9<=Ai<=1e9).
//   Output: The array after reversing.
//   Example: Input  -> 5 / 1 3 7 9 10
//            Output -> 10 9 7 3 1
//
// Approach: Print array in reverse order by iterating from last index to first.

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

    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
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
