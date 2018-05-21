#include<stdio.h>
#include<string.h>
int main()
{
 
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
        char A[100007],Print[100];
        scanf(" %[^\n]s",A);
        int cnt=0;
        for(i=0;i<strlen(A);i++)
        {
            if(A[i]==32)
                cnt++;
        }
        if(cnt==0)
        {
            if(islower(A[0]))
                printf("%c",A[0]-32);
            else
                printf("%c",A[0]);
            for(i=1;i<strlen(A);i++)
                {
                     if(islower(A[i]))
                           printf("%c",A[i]);
                         else
                           printf("%c",A[i]+32);
                }
 
        }
        else
        {
            if(islower(A[0]))
                printf("%c. ",A[0]-32);
            else
                printf("%c. ",A[0]);
            for(i=1;i<strlen(A);i++)
            {
                if(A[i]&&A[i-1]==32)
                {
                    cnt--;
                    if(cnt!=0)
                     {
                         if(islower(A[i]))
                           printf("%c. ",A[i]-32);
                         else
                           printf("%c. ",A[i]);
                     }
                     if(cnt==0)
                     {
                         if(islower(A[i]))
                           printf("%c",A[i]-32);
                         else
                           printf("%c",A[i]);
                        for(i=i+1;i<strlen(A);i++)
                        {
                        if(islower(A[i]))
                           printf("%c",A[i]);
                         else
                           printf("%c",A[i]+32);
                        }
                    }
                }
            }
        }
        printf("\n");
}
}