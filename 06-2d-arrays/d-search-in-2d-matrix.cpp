// Problem: D. Search in a 2D Matrix
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   Determine whether a target value x is present in an n x m matrix.
//   Input:  Line 1 = n m x (1<=n,m<=1000, 0<=x<=1e5). Next n lines = m integers.
//   Output: true if x exists, else false.
//   Example: Input  -> 3 4 7 / 1 2 3 4 / 5 6 7 8 / 9 10 11 12
//            Output -> true
//
// Approach: Linear scan all cells, set flag if match found.

#include <iostream>
using namespace std;

int main() {

	int n, m, searchNum;
	cin >> n >> m >> searchNum;

	int arr[n][m];

	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
	        cin >> arr[i][j];
	    }
	}

	bool numFound = false;
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < m; j++)
	    {
	        if (searchNum == arr[i][j])
	        {
	            numFound = true;
	        }
	    }
	}

	if(numFound)
	{
	    cout << "true" << endl;
	}
	else
	{
	    cout << "false" << endl;
	}
}
