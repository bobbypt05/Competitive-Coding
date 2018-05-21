#include<bits/stdc++.h>
using namespace std;
 
int Freq_A[130],Freq_B[130];
 
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
 
        memset(Freq_A,0,sizeof(Freq_A));
        memset(Freq_B,0,sizeof(Freq_B));
 
        string A,B;
 
        char Winner='B';
        int i,cmn=0,single1=0,single2=0,flag=1;
 
        cin>>A;
        cin>>B;
 
        for(i=0;i<A.size();i++)
            Freq_A[A[i]]++;
 
        for(i=0;i<B.size();i++)
            Freq_B[B[i]]++;
 
        for(i='a';i<='z';i++)
        {
            if(Freq_A[i]>1&&Freq_B[i]==0)
            {
                Winner='A';
                flag=0;
                break;
            }
            if(Freq_A[i]&&Freq_B[i])
            {
                cmn++;
            }
            if(Freq_A[i]&&!(Freq_B[i]))
            {
                single1++;
            }
            if(Freq_B[i]&&!(Freq_A[i]))
            {
                single2++;
            }
        }
 
        if(cmn&&single1&&flag&&(single2==0))
            Winner='A';
 
        printf("%c\n",Winner);
 
    }
}