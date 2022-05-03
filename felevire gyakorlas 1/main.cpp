#include <iostream>

using namespace std;

int main()
{ int n, k, i, j;
cout<<"k=";
cin>>k;
cout<<"n=";
cin>>n;
int v[n][n];
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(j==0){
           v[i][j]=k*(i+1)-i;}else{v[i][j]=v[i][j-i]+1;
           }
    }
}
cout<<"v["<<i<<"]["<<j<<"]"<<endl;
    return 0;
}
