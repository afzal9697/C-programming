#include<stdio.h>
int main()
{
    int arr[]={5,10,1,56,80,17};   //array declaration and intialization
    int len=sizeof(arr[0]);   //finding length of aaray
    int min=arr[0];  //assigning first element as min
    for(int i=0; i<len; i++)
    {
        if(arr[i]<min)  //condition check for min value
        min=arr[i];
    }
    printf("The min of an aaray is %d\n",min);  //printing min value in an array
    return 0;
}