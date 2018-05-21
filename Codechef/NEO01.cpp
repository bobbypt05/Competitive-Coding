#include<bits/stdc++.h>
long long int a[1000007];
using namespace std;
long long int maxi(long long int,long long int);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N,i,sum_n=0,cnt=0,sum_p=0;
        cin>>N;
        for(i=0;i<N;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                sum_p+=a[i];
                cnt++;
            }
            else
                sum_n+=a[i];
        }
        sort(a,a+N);
        long long int cur=upper_bound(a,a+N,-1)-a-1;
        for(i=cur;i>=0;i--)
        {
            if((sum_p+a[i])*(cnt+1)+(sum_n-a[i])>(sum_p*cnt)+sum_n)
            {
                sum_p+=a[i];
                cnt++;
                sum_n-=a[i];
            }
            else
                break;
        }
        cout<<sum_p*cnt+sum_n<<endl;
 
 
    }
}
 