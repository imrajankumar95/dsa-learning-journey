// Problem: J. Arrange the Numbers
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays / Two Pointers
// Difficulty: Easy-Medium
// Time: O(n)  Space: O(n)
//
// Build array of 1..n: odd numbers fill from the left (i++), even from the right (j--).
// Two-pointer fill — odds go front in increasing order, evens go back in decreasing order.

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
