#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,i,max=-1;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]>max)
             max=a[i];
       }
       if(max==0)
          cout<<n-1<<endl;
       else
         cout<<n-max<<endl;
   }
}