// Problem: D. Compare Factorials
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Math / Observation
// Difficulty: Easy
// Time: O(1)  Space: O(1)
//
// Statement:
//   Given two non-negative integers A and B, determine whether A! == B!.
//   0! = 1 by definition.
//   Input:  A single line with two integers A B (0 <= A,B <= 1e18).
//   Output: "Yes" if A! == B!, else "No".
//   Example: Input  -> 1 2   Output -> No
//            Input  -> 1 0   Output -> Yes
//
// Approach: Factorial is strictly increasing for n>=1, and 0!=1!=1. So
//           A!==B! iff A==B, except 0 and 1 collide. Normalize 0 to 1,
//           then compare directly. No need to compute huge factorials.

#include <iostream>
using namespace std;

int main() {

	long long a, b;
	cin >> a >> b;

	if(a == 0)
	{
	    a = 1;
	}

	if(b == 0)
	{
	    b = 1;
	}

	if (a == b)
	{
	    cout << "Yes" << endl;
	}
	else
	{
	    cout << "No" << endl;
	}
}
