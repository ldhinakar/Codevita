#include <bits/stdc++.h>
using namespace std;
int v;
int t;
int *Parent,*Visited,*Disc,*Low,*Ans;
 
void Addedges(int a,int b,vector<int> *Adj)
{
  Adj[a].push_back(b);
  Adj[b].push_back(a);
}
 
void Bridge(int i,vector<int> *Adj)
{
  Visited[i]=1;
  Disc[i]=Low[i]=++t;
  for(int j=0;j<Adj[i].size();j++)
  {
    int child=Adj[i][j];
    if(Visited[child]==0)
    {
      Parent[child]=i;
      Bridge(child,Adj);
      Low[i]=min(Low[i],Low[child]);
      if(Low[child]>Disc[i])
      {
          Ans[i]=1;Ans[child]=1;
      }
    }
    else if(child!=Parent[i])
    Low[i]=min(Low[i],Disc[child]);
  }
}
 
int main()
{
    int e;
  cin>>e>>v;
  int a,b;
  vector<int> Adj[v];
  for(int i=0;i<e;i++)
  {
      cin>>a>>b;
      Addedges(a,b,Adj);
  }
  Ans=new int[v];
  Parent=new int[v];
  Visited=new int[v];
  for(int i=0;i<v;i++) {Parent[i]=-1;Visited[i]=0;Ans[i]=0;}
  Disc=new int[v];
  Low=new int[v];
  for(int i=0;i<v;i++)
  if(Visited[i]==0)
  Bridge(i,Adj);
  for(int i=0;i<v;i++)
  if(Ans[i]) cout<<i<<endl;
}
