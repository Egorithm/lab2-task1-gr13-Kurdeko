#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long maximize_number(unsigned long long num) {
		int counts[10] = {0};

		while (num > 0) {
				counts[num % 10]++;
				num /= 10;
		}

		unsigned long long result = 0;
		for (int i = 9; i >= 0; i--) {
				while (counts[i] > 0) {
						result = result * 10 + i;
						counts[i]--;
				}
		}
		return result;
}

int main(int argc, char *argv[]) {
		if (argc != 2) {
				printf("Using: %s <array size>\n", argv[0]);
				return 1;
		}

		int n = atoi(argv[1]);
		if (n <= 0) {
				printf("Array size must be positive number.\n");
				return 1;
		}

		srand(time(NULL));
		unsigned long long *arr = (unsigned long long *)malloc(n * sizeof(unsigned long long));

		printf("Initial array:\n");
		for (int i = 0; i < n; i++) {
				arr[i] = rand() % 1000000; 
				printf("%llu ", arr[i]);
		}
		printf("\n\n");

		printf("Prossesed:\n");
		for (int i = 0; i < n; i++) {
				printf("%llu ", maximize_number(arr[i]));
		}
		printf("\n");

		free(arr);
		return 0;
}