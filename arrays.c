#include <stdio.h>

int main(){
	int marks[5];

	for(int i = 0; i < 5; ++i ){
		printf("Enter mark for student %d: ", i+1);
		scanf("%d", &marks[i]);
		}

	int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

	int average = sum/5;
					
	printf("Average class mark: %d\n", average);
	}
