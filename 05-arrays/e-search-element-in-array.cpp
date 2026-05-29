// Problem: E. Search Element in Array
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays / Linear Search
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement: Given an array and a value X, print "YES" if X is present, else "NO".
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
