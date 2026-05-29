// Problem: A. Print Array In Reverse
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   You are given an array of integers. Print the elements in reverse order.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N integers Ai (-1e9<=Ai<=1e9).
//   Output: The elements in reverse order.
//   Example: Input  -> 5 / 1 2 3 4 5
//            Output -> 5 4 3 2 1
//
// Approach: Read array, print elements from last index to first.

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
