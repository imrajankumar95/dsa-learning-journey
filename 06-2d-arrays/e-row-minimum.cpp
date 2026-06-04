// Problem: E. Row Minimum
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Compute the minimum element of each row of an n x m matrix.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (0<=Aij<=1e5).
//   Output: n integers — minimum of each row in order.
//   Example: Input  -> 3 3 / 1 2 3 / 4 5 6 / 7 8 9
//            Output -> 1 4 7
//
// Approach: For each row, track running min across its columns, print.

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

	for(int i = 0; i < n; i++)
	{
	    int rowMin = arr[i][0];
	    for(int j = 0; j < m; j++)
	    {
	        if(rowMin > arr[i][j])
	        {
	           rowMin = arr[i][j];
	        }
	    }
	    cout << rowMin << " ";
	}
}
