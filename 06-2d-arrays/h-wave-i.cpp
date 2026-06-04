// Problem: H. Wave - I
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Print matrix elements row by row in wave form: first row left->right,
//   second row right->left, alternating.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (0<=Aij<=1e5).
//   Output: Wave-form traversal, space separated.
//   Example: Input  -> 3 3 / 1 2 3 / 4 5 6 / 7 8 9
//            Output -> 1 2 3 6 5 4 7 8 9
//
// Approach: Even rows print forward, odd rows print reversed.

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
	    if(i % 2 == 0)
	    {
	        for(int j = 0; j < m; j++)
    	    {
    	        cout << arr[i][j] << " ";
    	    }
	    }
	    else
	    {
	        for(int j = m - 1; j >= 0; j--)
	        {
	            cout << arr[i][j] << " ";
	        }
	    }
	}
}
