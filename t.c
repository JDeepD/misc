#include <stdio.h>
#include <math.h>
#include <string.h>

int isnumeric(char ch);

int main(void)
{
	printf("Enter a string: ");
	char str[1000];
	scanf("%s", str);
	int size = strlen(str);
	int index[size];

	// init all char indices with 0 and num indices with 1
	for (int i = 0; i < size; i++) {
		if (isnumeric(str[i]))
			index[i] = 1;
		else	
			index[i] = 0;
	}
	

	int cnt_1 = 0, sum = 0;
	for (int i = size - 1; i >= 0; i--) {
		if (index[i] == 1)
			cnt_1 += 1;
		else
			cnt_1 = 0;
		if (isnumeric(str[i]))
			sum += index[i] * (int)(str[i] - 48) * (pow(10, cnt_1 - 1));
	}

	printf("The sum is: %d\n", sum);

}


int isnumeric(char ch)
{
	if (ch >= 48 && ch <= 57) {
		return 1;
	}
	return 0;
}
