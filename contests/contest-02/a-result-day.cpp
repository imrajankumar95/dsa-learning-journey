// Problem: A. Result Day
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Arrays / Counting
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   Given marks of N students and a passing mark P, count how many passed
//   (marks >= P) and how many failed.
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N marks (0<=Ai<=100).
//           Line 3 = P (0<=P<=100).
//   Output: "Pass: X" then "Fail: Y".
//   Example: Input  -> 5 / 45 60 30 80 50 / 50
//            Output -> Pass: 3 / Fail: 2
//
// Approach: Single pass, increment pass/fail counters by comparing to P.

#include <iostream>
using namespace std;

int main() {

	int n, target, passMarks;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++)
	{
	    cin >> a[i];
	}

	cin >> passMarks;

	int countPass = 0;
	int countFail = 0;
	for(int i = 0; i < n; i++)
	{
	    if (a[i] >= passMarks)
	    {
	        countPass++;
	    }
	    else
	    {
	       countFail++;
	    }
	}
	cout << "Pass: " <<  countPass << endl;
	cout << "Fail: " <<  countFail << endl;
}
