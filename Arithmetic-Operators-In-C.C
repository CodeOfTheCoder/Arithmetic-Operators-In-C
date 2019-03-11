/*How to declare variables and how to perform
Addition , Subtraction , Multiplication and Divition. */

#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2;//For Integer values
	float no3,no4;//For Float values
	char ch;//For single character
	int add,sub,mul,div;
	float add_f,sub_f,mul_f,div_f;

	clrscr();

	printf("Enter Integer no1:::");
	scanf("%d",&no1);//scanf function for scanf the value

	printf("\nEnter Ineger no2:::");
	scanf("%d",&no2);//%d is use for store the integer value

	printf("\nEnter float values no3 nd no4");
	scanf("%f %f",&no3,&no4);//%f is use for store the float value

	printf("\nEnter character:::");
	scanf("%c",&ch);//%c is use for store the character...

	add=no1+no2;
	printf("\nInteger addition = %d",add);

	sub=no1-no2;
	printf("\nInteger Subtraction = %d",sub);

	mul=no1*no2;
	printf("\nMultiplicatioin = %d",mul);

	div=no1/no2;
	printf("\nDivition = %d",div);

	//Float add,sub,mul,div...
	add_f=no3+no4;
	printf("\nFloat addition = %f",add_f);

	sub_f=no3-no4;
	printf("\nFloat subtraction = %f",sub_f);

	mul_f=no3*no4;
	printf("\nfloat multiplication =%f",mul_f);

	div_f=no3/no4;
	printf("\nfloat divition = %f",div_f);

	getch();
}