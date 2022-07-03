#include<stdio.h>            //header file
double getavg(int arr[],int size);   //getavg function declaration
double getavg(int arr[], int size)   //getavg function definition
{
	int i,sum=0;   //variable declaration
	float avg;
	for(i=0; i<size; i++)
	{
	sum+=arr[i]; //getting sum of elements of array
	}
	avg = (sum/size);  //avg of array
	return avg;
}
int main()
{
	int arr[5]={1,2,3,4,5}; //array intialization 
	int size=5;   //declaring size of an array
	float avg;
	avg= getavg(arr,5); //getavg function call in main function
	printf("the avg of arrays is %f ",avg);
	return 0;
	
}
