#include<stdio.h>
int main()
{
    int i=0;
    int len=0;
    char a[100];
    printf("Enter the string:");
    scanf("%s",a);
    while(a[i]!='\0')
    {
        len++;
        i++;
    }
    for(int j=len-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
    return 0;
}