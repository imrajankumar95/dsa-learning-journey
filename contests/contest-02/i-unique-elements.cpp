// Problem: I. Unique Elements
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Arrays / Counting
// Difficulty: Easy
// Time: O(n^2)  Space: O(n)
//
// Statement:
//   Print all elements that occur exactly once in the array, in input order.
//   Input:  Line 1 = n (1<=n<=5000). Line 2 = n integers (-1e9<=Ai<=1e9).
//   Output: Elements with frequency 1, in order; empty line if none.
//   Example: Input  -> 6 / 1 2 2 3 4 3   Output -> 1 4
//            Input  -> 3 / 1 1 1          Output -> (empty)
//
// Approach: For each element, count its occurrences; print if count==1.
//           (Hash map would reduce to O(n).)

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

	for(int i = 0; i < n; i++)
	{
	    int target = a[i];
	    int count = 0;

	    for(int j = 0; j < n; j++)
	    {
	        if(a[j] == target)
	        {
	            count++;
	        }
	    }

	    if(count == 1)
	    {
	        cout << target << " ";
	    }
	}
}
