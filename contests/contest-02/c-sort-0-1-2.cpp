// Problem: C. Sort 0 1 2
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Arrays / Counting Sort
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Array containing only {0, 1, 2}. Print it in descending order.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N integers (Ai in {0,1,2}).
//   Output: Array in descending order.
//   Example: Input  -> 6 / 0 2 1 2 0 1
//            Output -> 2 2 1 1 0 0
//
// Approach: Count occurrences of 0/1/2, then print 2s, then 1s, then 0s
//           (counting sort — no comparison sort needed).

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

	int c0 = 0, c1 = 0, c2 = 0;

	for(int i = 0; i < n; i++)
	{
	    if (a[i] == 0)
	    {
	        c0++;
	    }
	    else if (a[i] == 1)
	    {
	        c1++;
	    }
	    else
	    {
	        c2++;
	    }
	}

	for(int i = 0; i < c2; i++)
	{
	    cout << "2 ";
	}
	for(int i = 0; i < c1; i++)
	{
	    cout << "1 ";
	}
	for(int i = 0; i < c0; i++)
	{
	    cout << "0 ";
	}
}
