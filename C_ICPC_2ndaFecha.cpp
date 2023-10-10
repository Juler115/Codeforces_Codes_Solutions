#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

    map<long long,map<long long,long long>>cali;
    map<long long,bool>bien;

  int n,m;
  cin>>n>>m;
  int mis=0,req=0,mi=0;
  //cali[n][m]=m;

  while(n--)
  {
      int a,b;cin>>a>>b;
      while(b--)
      {
          int aux;cin>>aux;
          cali[a][aux]=aux;
      }
  }
    while(m--)
  {
      int a,b;cin>>a>>b;
      while(b--)
      {
          int aux;cin>>aux;
          //aux*=-1;
          cali[a][aux]-=aux;
          if(cali[a][aux]<0)req++;
      }
  }
  if(req>0)
  {
      for(auto &a:cali)
  {
      bool pasa=1;
      for(auto &b:a.second)
      {
          //cout<<b.first<<" ";
          if(b.second>0 || b.second<0)
            pasa=0;
      }
      if(!pasa){
        mis++;
        bien[a.first]=false;
    }
    else bien[a.first]=true;
  }
  for(auto &a:cali)
  {
      if(!bien[a.first])
      cout<<a.first;
      for(auto &b:a.second)
      {
          //cout<<b.first<<" ";
          if(b.second!=0 && b.second<0)
            cout<<" "<<b.second;
            else if(b.second>0){
                cout<<" +"<<b.second;
                mi++;
            }

      }
      if(!bien[a.first])
      cout<<"\n";
  }
    cout<<"MISTAKES IN "<<mis<<" STUDENTS: "<<req<<" NOT REQUESTED, "<<mi<<" MISSED"<<"\n";
  }
  else cout<<"GREAT WORK! NO MISTAKES FOUND!"<<"\n";


    return 0;
}
