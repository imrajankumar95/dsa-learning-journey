// Problem: Q. Count Quadruplets
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Medium
// Time: O(n^4)  Space: O(n)
//
// Statement:
//   Array A of length n and target x. Count quadruplets (i,j,k,l) with
//   i<j<k<l such that A[i] - 2*A[j] + 3*A[k] - 4*A[l] == x.
//   Input:  Line 1 = n and x (1<=n<=100, |x|<=1e6).
//           Line 2 = n integers (|Ai|<=1000).
//   Output: Count of valid quadruplets.
//   Example: Input  -> 4 -2 / 3 2 1 1
//            Output -> 1
//
// Approach: Four nested loops i<j<k<l; test the weighted equation. n<=100
//           keeps O(n^4) within limits.

#include <iostream>
using namespace std;

void solved()
{
    int n, target;
    cin >> n >> target;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pairCnt = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
               for(int l = k + 1; l < n; l++)
               {
                   if(arr[i] - 2 * arr[j] + 3 * arr[k] - 4 * arr[l] == target)
                   {
                       pairCnt++;
                   }
               }
            }
        }
    }
    cout << pairCnt << endl;
}

int main() {

	int t = 1;
	//cin >> t;

	for(int i = 0; i < t; i++)
	{
	    solved();
	}
}
