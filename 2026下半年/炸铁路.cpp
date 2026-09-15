// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<iostream>
// using namespace std;

// int n,m;
// vector<int>father(155);
// vector<pair<int,int>>g(5005);
// vector<int>rank_(155);

// int findRoot(int x){
//     if(father[x]!=x){
//         return father[x]=findRoot(father[x]);
//     }
//     return father[x];
// }

// void unionSet(int x,int y){
//     int xFather=findRoot(x);
//     int yFather=findRoot(y);
//     if(xFather==yFather)return;
//     if(rank_[xFather]==rank_[yFather]){
//         father[yFather]=xFather;
//         rank_[xFather]++;
//     }else if(rank_[xFather]>rank_[yFather]){
//         father[yFather]=xFather;
//     }else{
//         father[xFather]=yFather;
//     }
// }

// void func(int a,int b){
    
// }

// int main(){
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         father[i]=i;
//         rank_[i]=0;
//         int a,b;
//         cin>>a>>b;
//         unionSet(a,b);
//         g.push_back({a,b});
//     }
//     for(auto e:g){
//         func(e.first,e.second);
//     }
// }

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int n,m;
vector<pair<int,int>>g[5005];
bool bridge[5005]={0};
int low[155]={0};
int dfn[155]={0};
int timer=0;
set<pair<int,int>>ans;

void func(int u,int parentEdge){
    dfn[u]=low[u]=++timer;
    for(auto [v,eid]:g[u]){
        if(eid==parentEdge)continue;
        if(!dfn[v]){
            func(v,eid);
            low[u]=min(low[u],low[v]);
            if(low[v]>dfn[u]){
                bridge[eid]=1;
                ans.insert({u,v});
            }
        }else{
            low[u]=min(low[u],low[v]);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back({b,i});
        g[b].push_back({a,i});
    }
    func(1,-1);
    for(auto [u,v]:ans){
        cout<<u<<' '<<v<<endl;
    }
}