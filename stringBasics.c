#include <stdio.h>
#include <string.h>

int main () {
	char string1[20], string2[20];

	printf("Please enter your first name: \n");
	fgets(string1, sizeof(string1), stdin);

	printf("Please enter your surname: \n");
	fgets(string2, sizeof(string2), stdin);

	if(strlen(string1) > strlen(string2)){
		printf("Your first name is longer");
		}
	else if(strlen(string1) <  strlen(string2)){
		printf("Your surname is longer");
		}
	else{
		printf("Your first name and surname are equal\n"); 
		}
	}
