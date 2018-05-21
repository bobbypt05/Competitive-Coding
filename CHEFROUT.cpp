#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j;
        char a[100005];
        scanf("%s",a);
        for(i=0;i<strlen(a)-1;i++)
        {
            if((a[i]=='S'&&a[i+1]=='E')||(a[i]=='E'&&a[i+1]=='C')||(a[i]=='S'&&a[i+1]=='C'))
                  break;
        }
        if(i==strlen(a)-1)
            printf("yes\n");
        else
            printf("no\n");
    }
 
}