// Problem: F. Count Occurrences
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement: Given an array and an integer X, find how many times X appears.
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
