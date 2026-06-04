// Problem: A. Row Order
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Print all elements of an n x m matrix row by row.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers each (0<=Aij<=1e5).
//   Output: All elements row by row, space separated.
//   Example: Input  -> 3 3 / 1 2 3 / 4 5 6 / 7 8 9
//            Output -> 1 2 3 4 5 6 7 8 9
//
// Approach: Read matrix, traverse row-major (i outer, j inner), print.

#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int arr[n][m];

	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
	        cin >> arr[i][j];
	    }
	}

	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
	        cout << arr[i][j] << " ";
	    }
	}
}
