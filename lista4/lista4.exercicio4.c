#include <stdio.h>

int testa_PA(int n, int *v) {
	int k = v[1] - v[0];
	for (int i = 0; i < n; i++) {
		if (i + 1 >= n) {
			continue;
		}
		if (v[i+1] - v[i] != k) {
			return 0;
		}
	}

	return k;
}

int main() {
	int n;
	printf("n: ");
	scanf("%d", &n);

	int v[n];
	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		v[i] = input;

	}

	printf("k = %d\n", testa_PA(n, v));
}
