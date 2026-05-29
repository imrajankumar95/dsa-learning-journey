// Problem: F. Count Occurrences
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an array of integers and an integer X, find how many times X appears.
//   Input:  Line 1 = N and X (1<=N<=1e5, -1e9<=X<=1e9). Line 2 = N integers Ai.
//   Output: A single integer — the number of times X appears.
//   Example: Input  -> 6 3 / 1 5 2 3 7 3
//            Output -> 2
//
// Approach: Linear scan, increment a counter on each match.

#include <iostream>
using namespace std;

void solve()
{
    int n, target;
    cin >> n >> target;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int occurrence = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            occurrence++;
        }
    }
    cout << occurrence << endl;
}

int main() {

    int t = 1;
    //cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}
