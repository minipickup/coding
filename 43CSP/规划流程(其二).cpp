#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
int n,m;
double q;
double MAX;
int sum;

int v[105];
double cost[105];
double dp[10005];//价值i情况下,不可靠性的最小值,定义不可靠性为标准差的平方

int main(){
    cin>>n>>m>>q;
    MAX=m*m/q/q;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    for(int i=0;i<=sum;i++)dp[i]=1e9;
    dp[0]=0;
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    for(int i=0;i<n;i++){
        for(int j=sum;j>=v[i];j--){
            dp[j]=min(dp[j],dp[j-v[i]]+cost[i]*cost[i]);
        }
    }
    for(int i=sum;i>=0;i--){
        if(dp[i]<=MAX){
            cout<<i<<endl;
            break;
        }
    }
}