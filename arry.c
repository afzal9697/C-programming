#include<stdio.h>
int main()
{
  
  int i,n;
  int ar[10];
  printf("enter the number of items in array:  ");
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
  	scanf("%d", &ar[i]);
  }
  printf("The array is: ");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  return 0;
}
