#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dice1, dice2, total;
	int dice[13] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	srand(time(NULL));


	for (int i = 0; i < 36000; i++) {
		dice1 = (rand() % 6 + 1);
		dice2 = (rand() % 6 + 1);
		total = dice1 + dice2;

		for (int j = 2; j < 13; j++)
			if (total == j)
				dice[j] += 1;
	}

	printf("%s%12s\n","point","times");

	for (int i = 2; i < 13; i++)
		printf(" %2d%13d\n", i, dice[i]);

	system("pause");
	return 0;
}
