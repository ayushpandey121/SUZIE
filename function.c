#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter the values of a and b : ");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("The addition is %d",c);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}