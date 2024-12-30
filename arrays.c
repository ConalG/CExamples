#include <stdio.h>

int main(){
	/*
	int marks[5];

	for(int i = 0; i < 5; ++i ){
		printf("Enter mark for student %d: ", i+1);
		scanf("%d", &marks[i]);
		}

	int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

	int average = sum/5;
					
	printf("Average class mark: %d\n", average);
	*/

//	Find the largest number in the array

	int arr[] = {34,12,21,54,48};
	int largest = *arr;
	for(int i = 0; i < 5; ++i){
		if(largest < *(arr+i)){
			largest = *(arr+i);
			}
		}
	printf("Largest number is: %d\n", largest);
	}
