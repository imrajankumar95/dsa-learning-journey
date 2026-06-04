// Problem: G. RCB wins again
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Arrays / Two Pointers
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an even-length array, print elements starting from the two middle
//   players, then expand outward alternating left and right.
//   Order: middle-left, middle-right, then next pair outward, etc.
//   Input:  Line 1 = even N (2<=N<=1e5). Line 2 = N integers (-1e9<=Ai<=1e9).
//   Output: The rearranged sequence, space separated.
//   Example: Input  -> 6 / 10 20 30 40 50 60
//            Output -> 30 40 20 50 10 60
//
// Approach: midl = n/2-1, midr = n/2. For k=0..n/2-1 print a[midl-k] then
//           a[midr+k] — moves outward symmetrically.

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

    int midl = n / 2 - 1;
    int midr = n / 2;

    for (int k = 0; k < n/2 ; k++)
    {
        cout << a[midl - k] << " " << a[midr + k] << " ";
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
