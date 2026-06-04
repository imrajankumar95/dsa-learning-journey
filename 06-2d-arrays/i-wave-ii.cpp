// Problem: I. Wave - II
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Print matrix elements column by column in wave form: first column
//   top->bottom, second column bottom->top, alternating.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (0<=Aij<=1e5).
//   Output: Column-wave traversal, space separated.
//   Example: Input  -> 3 3 / 1 2 3 / 4 5 6 / 7 8 9
//            Output -> 1 4 7 8 5 2 3 6 9
//
// Approach: Even columns print top->bottom, odd columns print bottom->top.

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
	    if(j % 2 == 0)
	    {
	        for(int i = 0; i < n; i++)
    	    {
    	        cout << arr[i][j] << " ";
    	    }
	    }
	    else
	    {
	        for(int i = n - 1; i >= 0; i--)
	        {
	            cout << arr[i][j] << " ";
	        }
	    }
	}
}
