#include<stdio.h>   //header files
void swap(int,int);  //swap function declaration
void swap(int a, int b)  //swap function initialization
{
	int temp;   //defining temp variable of integer type
	temp=a;    // assigning a to temp
	a=b;       //assigning b to a
	temp=b;    //assigning b to temp
}
int main()
{
	int a=100,b=200;  //intializing the values of variables
	printf("the value of a and b is %d and %d before swapping\n",a,b);
	swap(a,b);  //swap function call in main function
	printf("the value of a and b is %d and %d after swapping\n",a,b);
return 0;
}
