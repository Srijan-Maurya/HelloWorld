#include<stdio.h>
#include<math.h>
int main()
{
    int age;
    printf("Enter your age \n",age);
    scanf("%d",&age);
    (age>=18)?printf("Eligible to drive"):printf("Not eligible to drive");
    return 0;
}