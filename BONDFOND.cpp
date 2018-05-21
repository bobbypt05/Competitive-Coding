#include<bits/stdc++.h>
using namespace std;
long long int power[70];
int main()
{
    long long int i,t;
    for(i=0;i<63;i++)
    {
       power[i]=pow(2,i);
      //cout<<power[i]<<endl;
    }
    cin>>t;
    while(t--)
    {
        long long int n,mini=1000000000000000000;
        cin>>n;
        long long int p=lower_bound(power,power+60,n)-power;
        for(i=p-1;i<63;i++)
        {
                if(abs(power[i]-n)<mini)
                    mini=abs(power[i]-n);
         }
        cout<<mini<<endl;
    }
 
}