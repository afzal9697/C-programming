#include<stdio.h>
void primefactor(int num)  //primefactor function declaration
{
    int i;  //variable declaration
    printf("prime factors of %d are: ",num);
    for ( i = 2; num >1; i++)
    {
         while (num%i==0)  //factor condition check
        {
            printf("%d ",i);
            num = num/i;
        }
    }
    printf("\n");
};
int main()
{
    int num;
    printf("enter any positive number: ");
    scanf("%d",&num); //taking input from user
    primefactor(num);  //primefactor call
    return 0;
}