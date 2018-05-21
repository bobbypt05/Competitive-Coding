#include<bits/stdc++.h>
using namespace std;
 
int A[100005];
 
int binary(int first,int last,int key)
{
   if(first<last)
   {
       int mid=(first+last)/2;
 
       if(A[mid]==key)
          return mid;
       if(key<A[mid])
            return binary(first,mid,key);
       else
            return binary(mid+1,last,key);
   }
   return 100005;
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i,N,M;
        scanf("%d %d",&N,&M);
        for(i=0;i<N;i++)
           scanf("%d",&A[i]);
        sort(A,A+N);
        for(i=0;i<N;i++)
        {
            int x=binary(0,N-1,M-A[i]);
            if(x!=100005&&x!=i)
            {
                printf("yes\n");
                break;
            }
        }
        if(i==N)
            printf("no\n");
    }
 
}
 