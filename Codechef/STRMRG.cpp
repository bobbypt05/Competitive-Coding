#include<bits/stdc++.h>
using namespace std;
 
char aa[100005],bb[100005];
int arr[5005][5005];
 
 
int foo(int N,int M)
{
        int i,j;
        for(i=0;i<=N;i++)
        {
                for(j=0;j<=M;j++)
                {
                    arr[i][j]=0;
                }
        }
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=M;j++)
            {
                    if(aa[i-1]==bb[j-1])
                    {
                        arr[i][j] = 1+arr[i-1][j-1];
                    }
                    else
                        arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
            }
        }
 
 
 
        return arr[N][M];
}
 
int main()
{
        ios_base::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--)
        {
                int i,j,N,M;
                cin>>N>>M;
                string A,B;
                cin>>A;
                cin>>B;
                aa[0]=A[0];
                j=1;
                for(i=1;i<N;i++)
                {
                        if(A[i-1]!=A[i])
                        {
                            aa[j]=A[i];
                            j++;
                        }
                }
                aa[j]='\0';
                int l1=j;
                j=1;
                bb[0]=B[0];
                for(i=1;i<M;i++)
                {
                        if(B[i-1]!=B[i])
                        {
                            bb[j]=B[i];
                            j++;
                        }
                }
                bb[j]='\0';
                int l2=j;
 
                //cout<<aa<<" "<<bb<<endl;
 
                int answer = foo(l1,l2);
 
                //cout<<answer<<endl;
 
                cout<<l1+l2-answer<<endl;
        }
}