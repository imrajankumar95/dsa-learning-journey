// Problem: E. Search Element in Array
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays / Linear Search
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given an array of integers and a value X, determine whether X is present.
//   Print "YES" if present, otherwise "NO".
//   Input:  Line 1 = N and X (1<=N<=1e5, -1e9<=X<=1e9). Line 2 = N integers Ai.
//   Output: "YES" if X is present, else "NO".
//   Example: Input  -> 5 7 / 1 7 5 3 2   Output -> YES
//            Input  -> 4 2 / 1 4 3 7     Output -> NO
//
// Approach: Linear scan for target X. break early once found.

#include <iostream>
using namespace std;

int main() {

	int n, target;
	cin >> n >> target;

	int a[n];

	for(int i = 0; i < n; i++)
	{
	    cin >> a[i];
	}


	bool isFound = false;
	for(int i = 0; i < n; i++)
	{
	    if (a[i] == target)
	    {
	        isFound = true;
	        break; //optional
	    }
	}

	if (isFound)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
}
