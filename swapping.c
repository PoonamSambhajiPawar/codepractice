#include<stdio.h>
main()
{
    int x,y,t;
    printf("Enter two numers x and y : \n");
    scanf("%d%d",&x,&y);
    t=x;
    x=y;
    y=t;

    printf("After swaping the values of x and y are %d %d" ,x,y);
    return 0;
}
