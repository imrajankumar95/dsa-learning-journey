// Problem: D. Maximum Element with Position
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an array of integers, find the maximum element and its position.
//   If multiple maximum elements exist, print the position of the first occurrence.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N integers Ai (-1e9<=Ai<=1e9).
//   Output: Two integers — the maximum element and its 1-based position.
//   Example: Input  -> 5 / 1 2 4 3 1
//            Output -> 4 3
//
// Approach: Track max value + position. Strict > keeps the FIRST occurrence on ties.
// Note: variable named `min` but holds the max — kept as submitted (logic is correct).

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
	    if (a[i] > min)
	    {
	        min = a[i];
	        pos = i + 1;
	    }
	}
	cout << min << " " << pos << endl;
}
