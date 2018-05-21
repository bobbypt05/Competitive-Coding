#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
ll Arr[100005];
ll gg2[100005];
 
void foo(ll N)
{
 
				ll countxx[1<<N][N];
				vector < ll > answer;
				ll i,j,k;
 
				ll mini = 1000000000000000000;
				ll countx=0;
 
				for(i=0;i<(1<<N);i++)
				{
					for(j=0;j<N;j++)
					{
						if(i&(1<<j))
						{
							countxx[i][j] = -1*Arr[j];
						}
						else
							countxx[i][j]=Arr[j];
					}
 
					for(k=2;k<=N;k++)
					{
						countx=0;
						for(j=0;j<k;j++)
							countx+=countxx[i][j];
						if(countx<=0)
							break;
 
						for(j=k;j<N;j++)
						{
							countx=countx+countxx[i][j]-countxx[i][j-k];
							if(countx<=0)
								break;
						}
 
						if(j<N)
							break;
					}
 
					if(k>N)
					{
						if(countx>mini)
							continue;
 
						mini = min(mini,countx);
 
						answer.clear();
						for(k=0;k<N;k++)
							answer.push_back(countxx[i][k]);
					}
				}
 
				for(i=0;i<N;i++)
					cout<<answer[i]<<" ";
				cout<<"\n";
}
 
int main()
{
        cin.tie(NULL);
        cout.tie(NULL);
 
        for(int i=0;i<100005;i++)
                gg2[i]=-100;
 
        int T,k;
        cin>>T;
        for(k=1;k<=T;k++)
        {
                ll N;
                cin>>N;
                ll i,j;
 
                for(i=0;i<N;i++)
                    cin>>Arr[i];
 
                if(N<11)
                {
                    foo(N);
                    continue;
                }
 
                for(i=0;i<N;i++)
                {
                     if(i==0 && Arr[i]<Arr[i+1])
                        Arr[i]*=-1;
                     else if(i==N-1 && Arr[i]<Arr[i-1])
                        Arr[i]*=-1;
                     else if(Arr[i]<Arr[i+1] && Arr[i]<Arr[i-1])
                        Arr[i]*=-1;
                }
 
                ll ptr=-1;
 
                vector <ll> indx;
                indx.clear();
 
                for(i=0;i<N;i++)
                {
                    if(ptr == -1 && Arr[i]<0 )
                    {
 
                        indx.push_back(i);
                        ptr = i;
                    }
                    else if(Arr[i]<0)
                    {
                        if(i-ptr==2)
                        {
                            if(Arr[i-1]+Arr[i]+Arr[ptr]>0)
                                indx.push_back(i);
                            ptr = i;
                        }
                        else
                        {
                            indx.push_back(i);
                            ptr = i;
                        }
                    }
                }
 
                ll length = indx.size();
 
                for(i=0;i<length;i++)
                {
                    map <ll,ll> Grap,prevInc;
                    ll incl=0, excl=0;
                    ll endIndx=0;
 
                    if(i!=length-1)
                    {
                        ll temp;
                        for(j=indx[i];j<indx[i+1];j+=2)
                        {
                           if(Arr[j]>0)
                                break;
                           if(j==indx[i])
                           {
                               temp =  incl;
                               incl = excl+(Arr[j]*-1);
                               excl=temp;
                               Grap[j]=-100;
                               prevInc[j]=j;
                               endIndx=j;
                           }
                           else
                           {
                               temp=incl;
                               if(incl<excl+(Arr[j]*-1))
                               {
                                   incl=excl+(Arr[j]*-1);
                                   endIndx=j;
                                   if(j-4>=indx[i])
                                   {
                                       Grap[j]=prevInc[j-4];
                                       prevInc[j]=j;
                                   }
                                   else
                                   {
                                       Grap[j]=-100;
                                       prevInc[j]=j;
                                   }
                               }
                               else
                               {
                                   Grap[j]=-100;
                                   prevInc[j]=prevInc[j-2];
                               }
                               excl = temp;
                           }
                        }
                    }
                    else
                    {
                        for(j=indx[i];j<N;j+=2)
                        {
                            ll temp;
                            if(Arr[j]>0)
                                break;
                            if(j==indx[i])
                            {
                                temp = incl;
                                incl=excl+(Arr[j]*-1);
                                excl=temp;
                                prevInc[j]=j;
                                endIndx=j;
                                Grap[j]=-100;
                            }
                            else
                            {
                                temp=incl;
                                if(incl<excl+(Arr[j]*-1))
                                {
                                    incl=excl+(Arr[j]*-1);
                                    endIndx=j;
                                    if(j-4>=indx[i])
                                    {
                                        Grap[j]=prevInc[j-4];
                                        prevInc[j]=j;
                                    }
                                    else
                                    {
                                        Grap[j]=-100;
                                        prevInc[j]=j;
                                    }
                                }
                                else
                                {
                                    Grap[j]=-100;
                                    prevInc[j]=prevInc[j-2];
                                }
                                excl=temp;
                            }
                        }
                    }
 
 
 
                    ll start = endIndx;
 
                    while(1)
                    {
                        gg2[start]=k;
                        if(Grap[start]==-100)
                            break;
                        else
                            start=Grap[start];
                    }
 
                    ll  ptr1;
 
                    if(i!=length-1)
                    {
                        for(j=indx[i];j<indx[i+1];j+=2)
                        {
                            if(Arr[j]>0)
                                break;
                            if(gg2[j]!=k)
                            {
                                 Arr[j]*=-1;
                            }
                        }
                    }
                    else
                    {
                        for(j=indx[i];j<N;j+=2)
                        {
                            if(Arr[j]>0)
                                break;
                            if(gg2[j]!=k)
                                Arr[j]*=-1;
                        }
                    }
                }
                for(i=0;i<N;i++)
                    cout<<Arr[i]<<" ";
                cout<<endl;
        }
}
 