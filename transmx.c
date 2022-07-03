#include<stdio.h>
int main()
{
	int a[5][5], transpose[5][5], r,c;  //variables declaration
	printf("enter the number of row and column \n");
	scanf("%d %d", &r,&c); //taking rows and column as inputs
	
	//elements of matrix
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
	{
		printf("enter value of matrix \n" );
		scanf("%d", &a[i][j]);
	}
	
	// printing the matrix
	printf("The matrix is: \n");
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
	{
		printf("%d",a[i][j]);
		if(j==c)
	    printf("\n");
	}
	//transpose of matrix
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
	{
		transpose[j][i]=a[i][j];
	}
	printf("The transpose of matrix is: \n");
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
	{
	
	printf("%d",transpose[i][j]);
	if(j==c)
	printf("\n");
	}
	return 0;
	
}
