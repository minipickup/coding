#include<iostream>
#include<vector>
using namespace std;

int n,m,q;
int t[205];
int dist[205][205];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            dist[i][j]=dist[j][i]=i==j?0:1e9;
        }
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        dist[a][b]=dist[b][a]=c;
    }
    cin>>q;
    int now=0;//目前加入村庄的编号
    while(q-->0){
        int x,y,pt;
        cin>>x>>y>>pt;
        while(now<n&&t[now]<=pt){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dist[i][j]=dist[j][i]=min(dist[i][j],dist[i][now]+dist[now][j]);
                }
            }
            now++;
        }
        if(t[x]>pt||t[y]>pt)cout<<-1<<endl;
        else if(dist[x][y]==1e9)cout<<-1<<endl;
        else cout<<dist[x][y]<<endl;
    }
}