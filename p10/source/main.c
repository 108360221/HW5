#include <stdio.h>
#include <stdlib.h>

void cubeByAddress(int *nPtr);

void cubeByAddress(int *nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;
}

int main(void) {
	int number = 5;

	printf("The original value of number is %d", number);

	cubeByAddress(&number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}