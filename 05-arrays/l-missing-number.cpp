// Problem: L. Missing Number (Unique Element)
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n^2)  Space: O(n)
//
// Statement:
//   Array of size n = 2m+1. Exactly m numbers appear twice, one appears once.
//   Find and return the unique number.
//   Input:  Line 1 = t. Per case: line 1 = n (odd, 1<=n<=1000),
//           line 2 = n integers (1<=Ai<=1e6).
//   Output: The unique element.
//   Example: Input  -> 1 / 7 / 2 3 1 6 3 6 2
//            Output -> 1
//
// Approach: For each element, count its occurrences; the one with count 1
//           is the answer. (Brute force; XOR trick would be O(n) O(1).)

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

    int missNum;
    for (int i = 0; i < n; i ++)
    {
        missNum = a[i];
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[j] == missNum)
            {
                count++;
            }
        }

        if(count == 1)
        {
            missNum = a[i];
            break;
        }
    }
    cout << missNum << endl;
}

int main() {

    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}
