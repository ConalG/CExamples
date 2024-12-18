#include <stdio.h>

int main () {
	int number;

	scanf("%d", &number);

	if(number == 0){
		printf("Your number is 0");
		}
	else if(number > 0){
		printf("Your number is positive");
		}
	else{
		printf("Your number is negative");
		}
	return 0;
}

