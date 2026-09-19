#include<iostream>
#include<algorithm>
using namespace std;

int t;
int root[30005];//根是哪个
int dis[30005];//到根的距离
int _size[30005];//根为i的集的大小

int findRoot(int x){
    if(root[x]==x){
        return x;
    }
    //暂存旧根
    int old=root[x];
    //先把前面的更新
    root[x]=findRoot(root[x]);
    //轮到自己更新
    dis[x]+=dis[old];
    return root[x];
}

void merge(int x,int y){
    int rootX=findRoot(x);
    int rootY=findRoot(y);
    dis[rootX]=_size[rootY];
    _size[rootY]+=_size[rootX];
    root[rootX]=rootY;
}

void check(int x,int y){
    int rootX=findRoot(x);
    int rootY=findRoot(y);
    if(rootX!=rootY){
        cout<<-1<<endl;
        return;
    }
    cout<<abs(dis[x]-dis[y])-1<<endl;
}

int main(){
    cin>>t;
    for(int i=1;i<=30000;i++){
        root[i]=i;
        dis[i]=0;
        _size[i]=1;
    }
    for(int i=0;i<t;i++){
        char c;
        int x,y;
        cin>>c>>x>>y;
        if(c=='M'){
            merge(x,y);
        }else if(c=='C'){
            check(x,y);
        }
    }
}