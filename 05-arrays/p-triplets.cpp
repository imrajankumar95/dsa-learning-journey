// Problem: P. Triplets
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n^3)  Space: O(n)
//
// Statement:
//   Array of size N and a number X. Count triplets that sum to X. Triplets
//   differ by index even if values are equal.
//   Input:  Line 1 = t. Per case: N, then N ints, then X.
//   Output: Number of triplets summing to X.
//   Example: Input  -> 1 / 7 / 1 2 3 4 5 6 7 / 12
//            Output -> 5
//
// Approach: Triple nested loop i<j<k; count where arr[i]+arr[j]+arr[k]==X.

#include <iostream>
using namespace std;

void solved()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    int pairCnt = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {

            for(int k = j + 1; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target)
                {
                    pairCnt++;
                }
            }
        }
    }
    cout << pairCnt << endl;
}

int main() {

	int t;
	cin >> t;

	for(int i = 0; i < t; i++)
	{
	    solved();
	}
}
