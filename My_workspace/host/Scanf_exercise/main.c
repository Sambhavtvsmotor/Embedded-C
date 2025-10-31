#include<stdio.h>

int main(){

	int number1;
	int number2;
	int number3;

	printf("Enter number1, number2, number3\n");
	scanf("%d %d %d",&number1,&number2,&number3);

	float avgerage;

	average = (number1 + number2 + number3) / 3;

	printf("The average of the numbers is %f",average);

	return 0;
}
