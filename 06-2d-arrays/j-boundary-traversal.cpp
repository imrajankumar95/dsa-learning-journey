// Problem: J. Boundary Traversal
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Print the boundary of an n x m matrix in clockwise order starting from
//   the top-left corner.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (1<=Aij<=1e9).
//   Output: Boundary elements clockwise, space separated.
//   Example: Input  -> 4 4 / 1 2 3 4 / 5 6 7 8 / 9 10 11 12 / 13 14 15 16
//            Output -> 1 2 3 4 8 12 16 15 14 13 9 5
//
// Approach: Top row L->R, right column top->bottom, bottom row R->L (if n>1),
//           left column bottom->top (if m>1). Guards handle single row/column.

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

	 for(int j = 0; j < m; j++) // top row (row = 0)
	 {
	     cout << arr[0][j] << " ";
	 }

	 for(int i = 1; i < n; i++) // right column (col = m - 1)
	 {
	     cout << arr[i][m - 1] << " ";
	 }

	 if(n > 1)
	 {
	    for(int j = m - 2 ; j >= 0; j--) // bottom row (row = n - 1)
	    {
	     cout << arr[n - 1][j] << " ";
	    }
	 }

	 if(m > 1)
	 {
	     for(int i = n - 2; i >= 1; i--) // left column (col = 0)
	     {
	         cout << arr[i][0] << " ";
	     }
	 }
}
