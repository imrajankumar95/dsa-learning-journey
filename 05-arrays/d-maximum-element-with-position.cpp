// Problem: D. Maximum Element with Position
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Track max value + 1-based position. Strict > keeps the FIRST occurrence on ties.
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
