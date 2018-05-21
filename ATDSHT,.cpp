#include<bits/stdc++.h>
using namespace std;
 
int A[150],B[150];
 
int main()
{
        cin.tie(NULL);
        cout.tie(NULL);
 
        int N;
        cin>>N;
        int length = 0;
        while(N--)
        {
                string str;
                cin>>str;
                length+=str.length();
                for(int i=0;i<str.size();i++)
                {
                        A[str[i]]++;
                }
        }
 
        string str;
        cin>>str;
 
        for(int i=0;i<str.size();i++)
            B[str[i]]++;
 
        if(str.size()<length)
        {
            cout<<"-1\n";
            return 0;
        }
 
        int answer = 0;
        for(int i='A';i<='Z';i++)
        {
 
            if(B[i]<A[i])
                answer+=(A[i]-B[i]);
        }
 
        cout<<answer<<endl;
}