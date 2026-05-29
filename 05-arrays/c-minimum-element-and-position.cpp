// Problem: C. Minimum Element and Its Position
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement: Find the minimum element in the array and its 1-based position.
//            If the min appears multiple times, print the smallest position.
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
