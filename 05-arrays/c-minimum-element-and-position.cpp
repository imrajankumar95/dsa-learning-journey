// Problem: C. Minimum Element and Its Position
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Find the minimum element in the array and its position. If multiple positions
//   contain the minimum value, print the smallest position.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N integers Ai (-1e9<=Ai<=1e9).
//   Output: Two integers — the minimum value and its 1-based position.
//   Example: Input  -> 6 / 7 3 4 5 3 10
//            Output -> 3 2
//
// Approach: Track min value + position. Strict < keeps the FIRST (smallest) position on ties.

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

	long long min = a[0];
	int pos = 1;
	for(int i = 1; i < n; i++)
	{
	    if (a[i] < min)
	    {
	        min = a[i];
	        pos = i + 1;
	    }
	}

	cout << min;
	cout << " " << pos;
}
