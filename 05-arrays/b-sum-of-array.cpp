// Problem: B. Sum of Array
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   You are given an array of integers. Find the sum of all elements.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N integers Ai (-1e9<=Ai<=1e9).
//   Output: A single integer — the sum of the array elements.
//   Example: Input  -> 5 / 1 2 3 4 5
//            Output -> 15
//
// Approach: Accumulate sum. Use long long — sum can exceed int range
//           (n up to 1e5, |Ai| up to 1e9 => up to 1e14).

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	long long a[n];
	long long sum = 0;

	for(int i = 0; i <= n - 1; i++)
	{
	    cin >> a[i];
	}

	for(int i = 0; i <= n - 1; i++)
	{
	    sum += a[i];
	}
	cout << sum ;
}
