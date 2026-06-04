// Problem: C. Find Maximum
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Find the maximum element in an n x m integer matrix.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (0<=Aij<=1e5).
//   Output: The maximum element.
//   Example: Input  -> 3 3 / 1 2 3 / 4 5 6 / 7 8 9
//            Output -> 9
//
// Approach: Track running max while scanning all cells.

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

	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
	        if (max < arr[i][j])
	        {
	            max = arr[i][j];
	        }
	    }
	}

	cout << max << endl;
}
