// Problem: O. Pair Sum
// Source: Codeforces — 100xSchool Bootcamp (Arrays)
// Topic: Arrays
// Difficulty: Easy
// Time: O(n^2)  Space: O(n)
//
// Statement:
//   Array of size N and a number X. Count pairs that sum to X. Pairs differ
//   by index even if values are equal.
//   Input:  Line 1 = t. Per case: N, then N ints, then X.
//   Output: Number of pairs summing to X.
//   Example: Input  -> 1 / 9 / 1 3 6 2 5 4 3 2 4 / 7
//            Output -> 7
//
// Approach: Check every (i, j) with j > i; count where arr[i]+arr[j]==X.
//           (Hash-map count of complements would be O(n).)

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
            if(arr[i] + arr[j] == target)
            {
                pairCnt++;
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
