#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("Letter is uppercase");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("Letter is lowercase");
    }
    
    else
    {
        printf("Entered value is not alphabet");
    }
    
    
}