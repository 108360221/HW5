
#include<stdio.h>
#include<stdlib.h>

int maximum(int arr[], int strat, int end);
int main(void) {
	int a, b, c;
	int n[10] = { 8,4,7,3,9,10,45,68,41,61 };

	for (a = 0; a < 10; a++)
		printf(" %4d", n[a]);


	a = maximum(n, 0, 9);

	printf("\nmax = %d\n", a);

	system("pause");
	return 0;
}

int maximum(int arr[], int strat, int end) {
	if (strat == end)
		return arr[strat];

	if (arr[strat] > maximum(arr, strat + 1, end))
		return arr[strat];

	else
		return maximum(arr, strat + 1, end);
}