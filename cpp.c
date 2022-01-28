#include <stdio.h>

int solve(char *string, int str_size, int vac_size);

int main(void) {
    int test;
    while(test--){
        int N, X;
        scanf("%d%d %c", &N, &X);
        char *str;
        scanf("%s", str);
		printf("%d", solve(str, N, X));
		
    }
	return 0;
}

int solve(char *string, int str_size, int vac_size)
{
	int vacations;
	int flipped = 0; //check if 1 has been flipped in prev iteration
	for ( int i = 0; i < str_size; i++ ){
		for ( int loop; loop < vac_size; loop++ ){
			int days = vac_size;
			if (days == 0){
				i = i + vac_size; //since vacations cant overlap
				vacations++;
			}
			else if (string[ i + loop ] == '0')
				days--;
			else
				if (days == 1){ // if just one extra day required for 1 vac
					if (!flipped){
						i = i + vac_size;
						vacations++;
					}
					break;
			}
		}
	}
	return vacations;
}
