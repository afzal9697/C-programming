#include<stdio.h>  //header files
int max(int, int);  //max function declaration
int max(int a, int b) //max function definition and intialization
{
	int result;  //integer type result variable
	if(a>b)     //conditins checks
	result=a;
	else
	result=b;
	return result;
}
int main()
{
	int a,b;   //defining integer variables
	printf("enter the value of a and b ");
	scanf("%d""%d",&a,&b);  //taking inputs from user
	max(a,b);  //max function call in main function
	printf("max of %d and %d is %d\n",a,b,max(a,b)); //printing max of two numbers
	return 0;
}
