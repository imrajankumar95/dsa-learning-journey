// Problem: J. Arrange the Numbers
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays / Two Pointers
// Difficulty: Easy-Medium
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an integer n, construct an array of length n with integers 1..n
//   (each exactly once): odds 1,3,5,... increasing from the left; evens
//   2,4,6,... placed decreasing from the right.
//   Input:  t (1<=t<=100). Each of next t lines: n (1<=n<=1e4).
//   Output: The required array of n integers.
//   Example: Input  -> 1 / 5
//            Output -> 1 3 5 4 2
//
// Approach: Two-pointer fill — odds go front (i++), evens go back (j--).

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];

    int num = 1;

    int i = 0;
    int j = n - 1;

    for(int i = 0, j = n - 1; i <= j;)
    {
        if( num % 2 == 1)
        {
            a[i] = num;
            i++;
            num++;
        }
        else
        {
            a[j] = num;
            j--;
            num++;
        }
    }

    for(int m = 0; m < n; m++)
    {
       cout << a[m] << " ";
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
