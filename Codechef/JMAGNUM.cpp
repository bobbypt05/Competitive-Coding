#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
 
long long imp[1000006];
bool seen[1000006];
long long tree[4000006];
 
void foo()
{
    long long i,j;
    imp[1]=0;
    for(i=2;i<=1000000;i++)
    {
        if(seen[i]==false)
        {
            int temp=i,temp1=0;
            while(temp)
            {
                temp1+=temp%10;
                temp/=10;
            }
            imp[i]=temp1;
            for(j=2*i;j<=1000000;j+=i)
            {
                imp[j]=imp[j]%MOD+temp1%MOD;
                seen[j]=true;
            }
        }
    }
}
 
long long getAns(long long L,long long R,long long first,long long last,long long root)
{
    if(L>last||R<first)
        return 0;
    if(first>=L&&last<=R)
        return tree[root]%MOD;
 
    long long mid=(first+last)/2;
    return getAns(L,R,first,mid,2*root)%MOD+getAns(L,R,mid+1,last,2*root+1)%MOD;
}
 
void buildTree(long long first,long long last,long long root)
{
    if(first==last)
    {
        tree[root]=imp[first];
        return ;
    }
    long long mid=(first+last)/2;
 
    buildTree(first,mid,2*root);
    buildTree(mid+1,last,2*root+1);
 
    tree[root]=tree[2*root]%MOD+tree[2*root+1]%MOD;
}
 
int main()
{
   foo();
   buildTree(1,1000000,1);
   long long i,T,L,R,j,ans=0;
   scanf("%lld",&T);
   while(T--)
   {
       scanf("%lld %lld",&L,&R);
       printf("%lld\n",getAns(L,R,1,1000000,1));
   }
   return 0;
}
 