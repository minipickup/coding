#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define MOD 80112002

int n,m;
int ans=0;
vector<vector<int>>g(5005);
int inDegree[5005]={0};
int dp[5005]={0};

void func(){
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(inDegree[i]==0){
            q.push(i);
            dp[i]=1;
        }
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(g[u].empty())ans=(ans+dp[u])%MOD;
        else{
            for(int v:g[u]){
                if(--inDegree[v]==0)q.push(v);
                dp[v]=(dp[v]+dp[u])%MOD;
            }
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        inDegree[b]++;
    }
    func();
    cout<<ans<<endl;
}