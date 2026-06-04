// Problem: F. Column Sum
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Compute the sum of each column of an n x m matrix.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (0<=Aij<=1e5).
//   Output: m integers — sum of each column in order.
//   Example: Input  -> 3 3 / 1 2 3 / 4 5 6 / 7 8 9
//            Output -> 12 15 18
//
// Approach: For each column, accumulate sum down the rows, print.

#include <iostream>
using namespace std;

int main() {

	int n, m;

	cin >> n >> m;

	int arr[n][m];

	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < m; j++)
	    {
	        cin >> arr[i][j];
	    }
	}

	for(int j = 0; j < m; j++)
	{
	    int rowSum = 0;
	    for(int i = 0; i < n; i++)
	    {
	        rowSum += arr[i][j];
	    }
	    cout << rowSum << " ";
	}
}
