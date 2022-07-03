#include<stdio.h>   //header file
int main()          //main function
{
  
  int i,n;          //variable declaration
  int ar[10];       ///array of int type
  printf("enter the number of items in array:  ");
  scanf("%d", &n);  //size of array from user
  for(i=0;i<n;i++)
  {
  	scanf("%d", &ar[i]);  //elements of array taking from user
  }
  printf("The array is: ");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);  //printing the array
  return 0;
}
