#include<iostream>
#include<cmath>
using namespace std;

int n,k;
double m;

double miu=0;
double xita=0;
double x[25];
double fx[25];
double z;

int main(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        miu+=a;
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        xita+=a*a;
    }
    for(int i=0;i<k;i++){
        cin>>x[i];
    }
    for(int i=0;i<k;i++){
        cin>>fx[i];
    }
    xita=sqrt(xita);
    z=(m-miu)/xita;
    int preX=0;
    int postX=0;
    for(int i=0;i<k;i++){
        if(x[i]<=z)continue;
        preX=i-1;
        postX=i;
        break;
    }
    if(preX==-1){
        cout<<fx[0]<<endl;
    }else{
        if(fabs(x[preX]+x[postX]-2*z)<1e-3){
            cout<<fx[preX]<<endl;
        }else if(x[preX]+x[postX]-2*z>0){
            cout<<fx[preX]<<endl;
        }else{
            cout<<fx[postX]<<endl;
        }
    }
}