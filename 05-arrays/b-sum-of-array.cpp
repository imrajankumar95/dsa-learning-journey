// Problem: B. Sum of Array
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Sum all elements. Use long long — sum can exceed int range (n up to 1e5, |Ai| up to 1e9).

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
