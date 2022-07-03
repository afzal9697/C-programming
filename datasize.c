#include<stdio.h>   //header files
int main()
{
    int a;   //int type variable declaration
    char b;  //char type variable declaration
    float c;  //float type variable declaration
    double d;  //double type variable declaration
    long int e;  //long type variable declaration
    printf("size of integer is %ld:\n", sizeof(a)); //printing size of  integer
    printf("size of char is %ld:\n", sizeof(b));    //printing size of  char
    printf("size of float is %ld:\n", sizeof(c));   //printing size of  float
    printf("size of double is %ld:\n", sizeof(d));  //printing size of  double
    printf("size of long int is %ld:\n", sizeof(e)); //printing size of  long int
return 0;
}