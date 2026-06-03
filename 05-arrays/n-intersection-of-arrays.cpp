// Problem: N. Intersection of Arrays
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n*m)  Space: O(n+m)
//
// Statement:
//   Two integer arrays of size N and M. Print their intersection in the
//   order elements appear in the first array.
//   Input:  Line 1 = t. Per case: N, then N ints, then M, then M ints.
//   Output: The intersection on one line.
//   Example: Input  -> 1 / 4 / 2 6 1 2 / 5 / 1 2 3 4 2
//            Output -> 2 1 2
//
// Approach: For each element of arr1, scan arr2 for a match; on first match
//           print it and mark that arr2 slot used (-1) to avoid reuse.

#include <iostream>
using namespace std;

void solved()
{
    int n;
    cin >> n;

    int arr1[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int arr2[m];
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = -1;
                break;
            }
        }
    }
    cout << endl;
}

int main() {

	int t;
	cin >> t;

	for(int i = 0; i < t; i++)
	{
	    solved();
	}
}
