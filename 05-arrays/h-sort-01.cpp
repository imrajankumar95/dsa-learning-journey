// Problem: H. Sort 01
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays / Counting Sort
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an integer array of size N containing only 0s and 1s, print the
//   sorted array. Multiple test cases.
//   Input:  t (1<=t<=1e2). For each: N (0<=N<=1e5) then N integers (0 or 1).
//   Output: The expected sorted array for each test case.
//   Example: Input  -> 1 / 7 / 0 1 1 0 1 0 1
//            Output -> 0 0 0 1 1 1 1
//
// Approach: Count 0s and 1s, then print c0 zeros followed by c1 ones.
//           Counting avoids an O(n log n) comparison sort.

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
