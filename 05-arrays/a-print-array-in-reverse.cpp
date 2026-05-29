// Problem: A. Print Array In Reverse
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Read array, print elements from last index to first.

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i <= n - 1; i++)
	{
	    cin >> a[i];
	}

	for(int i = n - 1 ; i >= 0; i--)
	{
	    cout << a[i] << " ";
	}
}
