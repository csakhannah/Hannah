#include <iostream>

using namespace std;

int divPrim (int n, int s){
    int v[10000];
    for(int i=0;i<n/+2;i++){
        v[i]=0;
    }

    int x=n;
    for(int i=2;i<n/2+2;i++){
        while(x%i==0){
            v[i+1]++;
            x=x/i;
            cout<<i<<endl;
        }
    }
    for(int i=3;i<n/2+2;i++){
        if(v[i]%2!=0){
        s=s+i;
       // cout<<endl;
       // cout<<i<<endl;
        }
    }
    return s;
}

int main()
{
    int k ;
    cout<<"k=";
    cin>>k;
    cout<<divPrim(k,0);
    return 0;
}
