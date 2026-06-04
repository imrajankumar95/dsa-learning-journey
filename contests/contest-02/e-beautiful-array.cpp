// Problem: E. Beautiful Array
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   An array is beautiful if all its elements are equal. Determine whether
//   the given array is beautiful.
//   Input:  Line 1 = n (1<=n<=1e5). Line 2 = n integers (-1e9<=Ai<=1e9).
//   Output: "YES" if all equal, else "NO".
//   Example: Input  -> 4 / 1 2 2 4   Output -> NO
//            Input  -> 5 / 7 7 7 7 7  Output -> YES
//
// Approach: Compare each element to its predecessor; mismatch -> NO.

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++)
	{
	    cin >> a[i];
	}

	bool flag = true;
	for(int i = 1; i < n; i++)
	{
	    if (a[i] != a[i-1])
	    {
	        flag = false;
	        cout << "NO" << endl;
	        break;
	    }
	}

	if (flag)
	{
	    cout << "YES" << endl;
	}
}
