/*
 * this is a comment
 *
 */


#include <stdio.h>

int main()
{
	int age;
	
	printf("Please enter your age:");
	scanf("%d",&age);

	age =age + 20;

	//puts("This can also print text")
	printf("Your age in 20 years:%d",age);
	return(0);
	
}
