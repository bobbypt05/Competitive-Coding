#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int T;
     cin>>T;
     while(T--)
     {
         int N,easy=0,cake=0,simple=0,med=0,hard=0;
         cin>>N;
         while(N--)
         {
             string A;
             cin>>A;
             if(A.compare("easy")==0)
                easy++;
             if(A.compare("medium")==0||A.compare("easy-medium")==0)
                med++;
             if(A.compare("hard")==0||A.compare("medium-hard")==0)
                hard++;
             if(A.compare("simple")==0)
                simple++;
             if(A.compare("cakewalk")==0)
                cake++;
         }
         if(easy&&med&&hard&&simple&&cake)
            printf("Yes\n");
         else
            printf("No\n");
     }
}