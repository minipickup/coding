#include<iostream>
#include<algorithm>
using namespace std;

int n,ans,sum=0;
int len[70];
int vis[70];

bool func(int cnt,int cur,int targetL){
    if(cnt==sum/targetL){
        ans=targetL;
        return true;
    }
    int last=-1;
    for(int i=0;i<n;i++){
        if(vis[i])continue;
        if(cur+len[n-1]>targetL)break;
        //------------------------------
        if(len[i]==last)continue;
        //------------------------------
        vis[i]=1;
        last=len[i];
        if(cur+len[i]==targetL){
            if(func(cnt+1,0,targetL))return true;
        }else{
            if(func(cnt,cur+len[i],targetL))return true;
        }
        vis[i]=0;
    

        //-----------抄了AI的2个关键剪枝-----------
        //如果选择第一个木棍无法完成拼接,后面的不用尝试
        if(cur==0)return false;
        //如果当前再拼一个正好达到targetL,最后也无法完成,后面的不用尝试
        if(cur+len[i]==targetL)return false;
        //-----------抄了AI的2个关键剪枝-----------

    }
    return false;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>len[i];
        sum+=len[i];
        vis[i]=0;
    }
    sort(len,len+n,greater<int>());
    int maxL=len[0];
    for(int l=maxL;l<=sum;l++){
        if(sum%l!=0)continue;
        if(func(0,0,l)){
            cout<<l<<endl;
            return 0;
        };
    }
}