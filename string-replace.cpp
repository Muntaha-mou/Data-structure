#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ol[50],ne[50],result[100];
    int i=0,j=0,olen,nlen,k,match;
    printf("Enter string= ");
    gets(str);
    printf("Enter old string= ");
    gets(ol);
    printf("Enter new string= ");
    gets(ne);
    olen=strlen(ol);
    nlen=strlen(ne);
    while(str[i]!='\0')
    {
        match=1;
        for(k=0;k<olen;k++)
        {
            if(str[i+k]!=ol[k])
            {
                match=0;
                break;
            }

        }
        if(match)
        {
            for(k=0;k<nlen;k++)
            {
                result[j++]=ne[k];
            }
            i+=olen;
        }
        else
        {
            result[j++]=str[i++];
        }
    }
    result[j]='\0';
    printf("After replacing= %s",result);
    return 0;

}
