// Problem: G. Row with max 1s
// Source: Codeforces — 100xSchool Bootcamp (2D Arrays)
// Topic: 2D Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n*m)
//
// Statement:
//   In a binary matrix, find the 0-based index of the first row with the
//   maximum number of 1s. Print -1 if no row contains any 1.
//   Input:  Line 1 = n m (1<=n,m<=1000). Next n lines = m integers (0 or 1).
//   Output: Index of first row with most 1s, or -1.
//   Example: Input  -> 2 2 / 0 0 / 1 1
//            Output -> 1
//
// Approach: Count 1s per row; keep the first row whose count exceeds the
//           best seen so far (maxCount starts at 0 so all-zero -> -1).

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

	int bestRow = -1;
	int maxCount = 0;
	for(int i = 0; i < n; i++)
	{
	    int count = 0;
	    for(int j = 0; j < m; j++)
	    {
	        if(arr[i][j] == 1)
	        {
	            count++;
	        }
	    }

	    if(count > maxCount)
	    {
	        maxCount = count;
	        bestRow = i;
	    }
	}
	cout << bestRow;
}
