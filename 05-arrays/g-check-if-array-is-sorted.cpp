// Problem: G. Check If Array is Sorted
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an array of N integers, determine whether it is sorted ascending
//   (Ai <= Ai+1 for all 1<=i<N). Print YES or NO (any letter case accepted).
//   Input:  Line 1 = N. Line 2 = N integers Ai.
//   Output: "YES" if sorted ascending, else "NO".
//   Example: Input  -> 5 / 1 2 3 4 5   Output -> YES
//            Input  -> 4 / 5 3 4 1     Output -> NO
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
