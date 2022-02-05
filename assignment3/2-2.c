/* Sieve of eratosthenes method of finding primes 
 * For more info: https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
 */
#include <stdio.h>

void mark_nprime(int begin, int n, int *arr, int len_arr);

int main(void)
{
	int n; printf("Enter n: ");
	scanf("%d", &n);

	int arr[n];

	//populate the arr with numbers from 1 to n
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	// Begin marking all non prime numbers starting from 2.
	for (int i = 2; i <= n; i++) {
		mark_nprime(i*i, i, arr, n);
	}

	// print all nums in arr which is not -1
	for (int i = 2; i <= n; i++) {
		if (arr[i] != -1) {
			printf("%d is Prime\n", arr[i]);
		}
	}
}

// this fn marks all the multiples of n in arr
// beginning from begin till len_arr as _not_ prime
// Marking notPrime is basically changing that num to -1
void mark_nprime(int begin, int n, int *arr, int len_arr)
{
	for (int i = begin; i <= len_arr; i++) {
		if (i % n == 0) {
			arr[i] = -1;
		}
	}
}
