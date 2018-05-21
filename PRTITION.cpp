#include<bits/stdc++.h>
using namespace std;
 
long long arr1[1000005],arr2[1000005];
 
 
void foo(long long N,long long aa , long long X)
{
        long long i;
        for(i=0;i<N;i++)
        {
            arr2[i]=0;
        }
 
        long long ss = 0;
 
        for(i=N-1;i>=0;i--)
        {
                if(arr1[i]<=aa && aa-ss-arr1[i]!=X)
                {
                        ss+=arr1[i];
                        arr2[i]=1;
                        if(ss == aa)
                            return ;
                        else if(ss > aa)
                        {
                            ss-=arr1[i];
                            arr2[i]=0;
                        }
                }
        }
}
 
int main()
{
        ios_base::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--)
        {
                long long N,X,i,j,nn;
                cin>>X>>N;
 
                long long aa = (N*(N+1))/2;
                aa-=X;
 
                if( N < 4 || aa%2 )
                {
                    cout<<"impossible\n";
                    continue;
                }
 
                for(i=0,j=0;i<N;i++)
                {
                        if(i+1!=X)
                        {
                                arr1[j]=i+1;
                                j++;
                        }
                }
 
                nn = j;
 
                foo( nn, aa/2 ,X);
 
                if(X==1)
                {
                    cout<<"2";
                    for(i=0;i<nn;i++)
                        cout<<arr2[i];
                }
                else
                {
                    for(i=0;i<(X-1);i++)
                        cout<<arr2[i];
                    cout<<"2";
                    for(i=(X-1);i<nn;i++)
                        cout<<arr2[i];
                }
                cout<<"\n";
 
        }
}