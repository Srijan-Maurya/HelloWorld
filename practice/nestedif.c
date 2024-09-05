#include<stdint.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if (num>0)
    {
        printf("Positive\n");
        if (num%2==0)
        {
            printf("Even number");
        }
        else{
            printf("Odd number");
        }
        
    }
    else
    {
        printf("Negative\n");
        if (num%2==0)
        {
            printf("Even number");
        }
        else{
            printf("Odd number");
        }
        
    }
    
    

}