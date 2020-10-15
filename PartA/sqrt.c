/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool valid(int n)  {
	if (n < 0)
		return false;
	return true;
}

//Akshit Kumar(B18045)

int main(int argc, char* argv[]) {

	if (argc != 2) {
		printf("DEBUG:Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (!valid(input)) {
		printf("DEBUG:Negative Number\n");
		printf("DEBUG:End of program. Exiting\n");
		return (0);
	}

	printf("DEBUG:Sqrt of %d is %f\n",input,sqrt(input));
	printf("DEBUG:End of program. Exiting\n");
	return(0);

} // end main
