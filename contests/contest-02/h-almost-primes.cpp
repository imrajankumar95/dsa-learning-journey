// Problem: H. Almost Primes
// Source: Codeforces — 100xSchool Bootcamp (Contest II)
// Topic: Math / Divisors
// Difficulty: Easy
// Time: O(n^2)  Space: O(1)
//
// Statement:
//   A number is almost prime if it has at most 4 positive divisors.
//   Print all almost prime numbers in [1, N] in increasing order.
//   Input:  A single integer N (1<=N<=5000).
//   Output: All x in [1,N] with at most 4 divisors, space separated.
//   Example: Input  -> 12   Output -> 1 2 3 4 5 6 7 8 9 10 11
//            (12 excluded: it has 6 divisors)
//
// Approach: For each number, count divisors by trial division up to num;
//           keep it if count <= 4. (Could optimize to O(sqrt) per number.)

#include <iostream>
using namespace std;

bool almostPrimeCheck(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return count <= 4;
}

int main() {

    int n;
    cin >> n;

	for(int i = 1; i <= n; i++)
	{
	    if(almostPrimeCheck(i)){
	        cout << i << " ";
	    }
	}
}
