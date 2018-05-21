#include<bits/stdc++.h>
using namespace std;
 
int main()
{
        cin.tie(NULL);
        cout.tie(NULL);
 
        int Q;
        cin>>Q;
 
 
        while(Q--)
        {
             int bit[30];
             long long num;
             cin>>num;
 
             if(num == 0)
             {
                 cout<<"0 1\n";
                 continue;
             }
 
             for(int i=0;i<30;i++)
                bit[i]=0;
 
             int i=0;
 
             while(num)
             {
                    bit[i++]=num%2;
                    num/=2;
             }
 
             long long mini=0,maxi=0;
 
             maxi = (1<<i);
 
             for(int j=i;j>0;j--)
             {
                 mini+=((1!=bit[j-1])<<(j-1));
             }
 
            cout<<mini<<" "<<maxi<<endl;
        }
}
 