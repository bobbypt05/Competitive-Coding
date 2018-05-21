#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
   long T;
   scanf("%d",&T);
   while(T--)
   {
       string Oper;
       cin>>Oper;
 
       long cnt1=0,cnt2=0,Greater=0,Less=0,i;
 
       for(i=0;i<Oper.size();i++)
       {
           if(Oper[i]=='>')
           {
               cnt1++;
               Greater=max(Greater,cnt2);
               cnt2=0;
           }
           if(Oper[i]=='<')
            {
                cnt2++;
                Less=max(Less,cnt1);
                cnt1=0;
            }
       }
       Greater=max(Greater,cnt2);
       Less=max(Less,cnt1);
       printf("%ld\n",max(Greater,Less)+1);
   }
}