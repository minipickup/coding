#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n,w;
int v[105];
int p[105];
int dp[105][305]={0};//选i个商品,零头j元,的最高价值
int maxV=0;
int minV=1e9;

int main(){
    cin>>n>>w;
    for(int i=0;i<=n;i++){
        for(int k=0;k<=3*n;k++){
            dp[i][k]=-1e9;
        }
    }
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        cin>>v[i]>>p[i];
        minV=min(minV,v[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        v[i]-=minV;
        sum+=v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=n;j>=1;j--){
            if(j*minV>w)continue;
            for(int k=min(sum,w-j*minV);k>=v[i];k--){
                dp[j][k]=max(dp[j][k],dp[j-1][k-v[i]]+p[i]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        if(i*minV>w)continue;
        for(int j=0;j<=min(sum,w-i*minV);j++){
            ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans<<endl;
}