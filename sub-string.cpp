#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],sub[100];
    int i,j,found;
    printf("Enter string= ");
    scanf("%s",str);
    printf("enter substring= ");
    scanf("%s",sub);
    int n=strlen(str);
    int m=strlen(sub);
    found=0;
    for(i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(str[i+j]!=sub[j])
                break;
        }
    }
    if(j==m)
    {
        printf("sub string found at position=%d\n",i);
        found=1;

    }
    if(found==0)
    {
        printf("Sub string not found\n");
    }
    return 0;
}
