#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int pos,n,i,len;
    printf("Enter string= ");
    gets(str);
    printf("Enter position= ");
    scanf("%d",&pos);
    printf("Enter numbers for dlt= ");
    scanf("%d",&n);
    len=strlen(str);
    for(i=pos;i<len-n+1;i++)
    {
        str[i]=str[i+n];
    }
    printf("After deletion=%s",str);


}
