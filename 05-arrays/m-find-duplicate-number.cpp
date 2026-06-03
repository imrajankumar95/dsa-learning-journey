// Problem: M. Find Duplicate Number
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n^2)  Space: O(n)
//
// Statement:
//   Array of size N holding numbers 0..(N-2), each present at least once,
//   with exactly one value appearing twice. Find the duplicate.
//   Input:  Line 1 = t. Per case: line 1 = N (0<=N<=1000),
//           line 2 = N integers.
//   Output: The duplicate number.
//   Example: Input  -> 1 / 9 / 0 7 2 5 4 7 1 3 6
//            Output -> 7
//
// Approach: For each element, count occurrences; the one with count 2 is
//           the duplicate. (Sum-difference would be O(n) O(1).)

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

    int dup;
    for (int i = 0; i < n; i ++)
    {
        dup = a[i];
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[j] == dup)
            {
                count++;
            }
        }
        if(count == 2)
        {
            dup = a[i];
            break;
        }
    }
    cout << dup << endl;
}

int main() {

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}
