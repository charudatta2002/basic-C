/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int res,x=100,y=20;
    char choice;
    printf("enter your choice:+,-,*,/");
    scanf("%c",&choice);
    switch (choice)
{
    case '+':
    res=x+y;
    printf("add = %d",res);
    break;
    case '-':
    res=x-y;
    printf("sub=%d",res);
    break;
    case '*':
    res=x*y;
    printf("multiply = %d",res);
    default :
    res=x/y;
    printf("ans is %d",res);
    break;
    
}
    
    
    
    return 0;
}
