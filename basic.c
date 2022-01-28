#include <stdio.h>

int main(){
	int c, i, ndigit[10], nwhite, nother;
	nother = nwhite = 0;
	/* fill up the array ndigit with 0s */
	for (i=0; i<10; ++i){
		ndigit[i] = 0;
	}

	while ((c=getchar()) != EOF){
	  /* character 0 is reprensented by 48 in ASCII.
		 * int c is the ASCII reprensentation of the character.
		 * Therefore, c >= '0' means (ASCII code of c) >= 48
		 * Basically, this condition checks if the character c 
		 * lies between 0 to 9.
		 * */			
		if (c >= '0' || c <= '9'){
			/* Say, c is the character 3.
			 * int c will be 51
			 * Therefore, c-'0' would be 51-48 (= 3)
			 * Then, in the array, ndigit[3] would be incremented by 1
			 * */
			++ndigit[c-'0']; 
		}
		else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		}
		else {
			++nother;
		}
	}
	for (i = 0; i <= 9; ++i)
		printf("%3d %3d\n",i , ndigit[i]);

	printf("white space = %d ; other = %d", nwhite, nother);
}
