#include <stdio.h>

int main(){
	double fnum, snum;
	char op;
	double result;

	printf("Enter the first number: ");
	scanf("%lf", &fnum);

	printf("Enter operator(+,-,x,/): ");
	scanf(" %c", &op);

	printf("Enter second number: ");
	scanf("%lf", &snum);

	switch(op){
		case '+':
		result = fnum + snum;
		break;

		case '-':
		result = fnum - snum;
		break;

		case 'x':
		result = fnum * snum;
		break;

		case '/':
		result = fnum / snum;
		break;

		default:
		printf("An error has occured please try again");
		}

	printf("Your result is: %lf\n",result);

	return 0;
	}
