// Problem: B. Fastest Runner
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Arrays / Min tracking
// Difficulty: Easy
// Time: O(n)  Space: O(n)
//
// Statement:
//   N runners with completion times. The fastest has the minimum time; on a
//   tie, pick the runner with the larger ID. Print the winner's ID (1-based).
//   Input:  Line 1 = N (1<=N<=1e5). Line 2 = N times (1<=Ti<=1e9).
//   Output: ID of the fastest runner.
//   Example: Input  -> 5 / 12 9 15 9 10
//            Output -> 4
//
// Approach: Track running minimum; using <= ensures the later (larger ID)
//           runner wins ties.

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n ;

	int a[n];

	for(int i = 0; i < n; i++)
	{
	    cin >> a[i];
	}

	int winnerpos = 0;
	int winner = a[0];
	for(int i = 1; i < n; i++)
	{
	    if (a[i] <= winner)
	    {
	        winner = a[i];
	        winnerpos = i + 1;
	    }

	}
	cout << winnerpos << endl;
}
