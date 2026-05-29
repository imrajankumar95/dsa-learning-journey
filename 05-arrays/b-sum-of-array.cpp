// Problem: B. Sum of Array
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement: Given an array of N integers (1<=N<=1e5, -1e9<=Ai<=1e9),
//            print the sum of all elements.
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
