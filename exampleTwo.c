#include <stdio.h>

int multiply(int num1, int num2){
	int result = num1 * num2;
	return result;
	}

int main(){
	int input1, input2;

	printf("Select two numbers: \n");
	scanf("%d%d", &input1, &input2);

	int ans = multiply(input1, input2);

	printf("Answer: %d\n", ans);
	}
