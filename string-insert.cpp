#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ins[50];
    int pos,i,len1,len2;
    printf("Enter main string= ");
    gets(str);
    printf("Enter string to insert= ");
    gets(ins);
    printf("Enter position= ");
    scanf("%d", &pos);

    len1=strlen(str);
    len2=strlen(ins);

    for(i =len1;i>=pos;i--)
    {
        str[i+len2]=str[i];
    }

    for(i = 0;i<len2;i++)
    {
        str[pos+i] = ins[i];
    }

    printf("Result = %s", str);

    return 0;
}
