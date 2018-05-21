#include<bits/stdc++.h>
using namespace std;
 
struct t
{
    int bit[40];
 
}tree[1000005];
 
long long A[10000005],binaryNumbers[1000005][40];
 
void buildTree(int left,int right,int pos,int indx)
{
        if(left==right)
        {
            tree[pos].bit[indx]=binaryNumbers[left][indx];
            return ;
        }
 
        int mid=(left+right)/2;
 
        buildTree(left,mid,2*pos,indx);
        buildTree(mid+1,right,2*pos+1,indx);
 
        tree[pos].bit[indx]=tree[2*pos].bit[indx]+tree[2*pos+1].bit[indx];
}
 
int getOneInRange(int left,int right,int pos,int l,int r,int indx)
{
        if(left>r || right<l ||left>right)
            return 0;
 
        if(left>=l && right<=r)
            return tree[pos].bit[indx];
 
        int mid = (left+right)/2;
 
        return (getOneInRange(left,mid,2*pos,l,r,indx)+getOneInRange(mid+1,right,2*pos+1,l,r,indx));
}
 
int main()
{
        ios_base::sync_with_stdio(false);
        int i,j,N,Q;
        long long power[40];
        power[31]=1;;
        for(i=30;i>=0;i--)
            power[i]=power[i+1]*2;
        cin>>N>>Q;
        for(i=1;i<=N;i++)
            cin>>A[i];
 
        for(i=1;i<=N;i++)
        {
            for(j=31;j>=0;j--)
            {
                binaryNumbers[i][j]=A[i]%2;
                A[i]/=2;
            }
        }
 
        for(i=0;i<=31;i++)
        {
            buildTree(1,N,1,i);
        }
 
        int answer[40];
 
 
        while(Q--)
        {
            for(i=0;i<40;i++)
                answer[i]=1;
 
            int l,r;
            cin>>l>>r;
 
            for(i=1;i<=31;i++)
            {
                int noOfOne=getOneInRange(1,N,1,l,r,i);
                int noOfZero=(r-l+1)-noOfOne;
                answer[i]=(noOfZero>noOfOne?1:0);
            }
 
            long long realAnswer=0;
 
            for(i=1;i<=31;i++)
                realAnswer+=(answer[i]?power[i]:0);
 
 
            cout<<realAnswer<<endl;
        }
}