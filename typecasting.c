#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    float c;
    printf("Enter any two values:");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("The result of c using implicity conversion:%f\n",c);
    c=(float)a/b;
    printf("The result of c using explicity conversion:%f\n",c);
}