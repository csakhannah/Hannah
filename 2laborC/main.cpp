#include <iostream>

using namespace std;

int main()

    { int v[100][100], n, PE=1,PK=1,PD=1, PN=1, i, j ;
cout<<"n=";
cin>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
            cout<< "v["<< i <<"]["<<j<<"]=";
        cin>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i<j && i+j<n-1){
        PE*=v[i][j];}
        if(i<j && i+j>n-1){
        PK*=v[i][j];}
        if(i>j && i+j>n-1){
        PD*=v[i][j];}
        if(i>j && i+j<n-1){
        PN*=v[i][j];}
        }}
        cout<<PE<<endl;
        cout<<PK<<endl;
        cout<<PD<<endl;
        cout<<PN<<endl;
        return 0;
    }
