#include <stdio.h>
#include <stdlib.h>

void depression() {
	long long int  n,i;

		scanf("%lld", &n);

		if (n % 2 == 0) {
			printf("%lld %lld\n", n / 2, n / 2);
		}
		else {
			for (i = 2; i * i <= n; i++) {
				if (n % i == 0) {
					printf("%lld %lld\n", n / i, n-(n/i));
					return ;
				}
			}
			printf("1 %d\n", n - 1);
		}
	}
int main() {
	long long int t;
	scanf("%lld", &t);
	while (t--) {
		depression();
	}
	return 0;
}
