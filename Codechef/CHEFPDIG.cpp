#include<bits/stdc++.h>
using namespace std;
 
long long Digit[12];
set <char> ans;
 
int main()
{
    int T,i,j;
    cin>>T;
    while(T--)
    {
        string A;
        cin>>A;
        memset(Digit,0,sizeof(Digit));
        for(i=0;i<A.size();i++)
        {
            if(Digit[A[i]-'0']<2)
               Digit[A[i]-'0']++;
        }
        
        for(i=7;i<=8;i++)
        {
            for(j=0;j<=9;j++)
            {
                if(i==j&&Digit[i]>=2)
                {
                    char temp=i*10+j;
                    ans.insert(temp);
                }
                else if(i!=j&&Digit[i]&&Digit[j])
                {
                    char temp=i*10+j;
                    ans.insert(temp);
                }
            }
        }
        if(Digit[6]&&Digit[5])
            ans.insert('A');
        if(Digit[6]==2)
            ans.insert('B');
        if(Digit[6]&&Digit[7])
            ans.insert('C');
        if(Digit[6]&&Digit[8])
            ans.insert('D');
        if(Digit[6]&&Digit[9])
            ans.insert('E');
        if(Digit[9]&&Digit[0])
            ans.insert('Z');
        set <char> :: iterator it;
        if(ans.size())
        {
            for(it=ans.begin();it!=ans.end();it++)
               printf("%c",*it);
        }
        printf("\n");
        ans.clear();
    }
}