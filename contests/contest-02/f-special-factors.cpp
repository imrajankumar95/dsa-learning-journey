// Problem: F. Special Factors
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Math / Divisors
// Difficulty: Easy
// Time: O(n)  Space: O(1)
//
// Statement:
//   Print all special factors of N in increasing order. A factor d is
//   special if its last digit is 2 or 7 (d % 10 in {2,7}).
//   Input:  A single integer N (1<=N<=1e6).
//   Output: Special factors in increasing order, space separated; -1 if none.
//   Example: Input  -> 12   Output -> 2 12
//            Input  -> 84   Output -> 2 7 12 42
//            Input  -> 5    Output -> -1
//
// Approach: Iterate i from 1..N; if i divides N and i%10 is 2 or 7, print.
//           Flag tracks whether any was printed; if none, print -1.

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	bool spftrflag = true;

	for(int i = 1; i <= n; i++)
	{
	    if (n % i == 0 and (i % 10 == 2 or i % 10 == 7))
	    {
	        spftrflag = false;
	        cout << i << " ";
	    }
	}

	if (spftrflag)
	{
	    cout << -1 << endl;
	}
}
