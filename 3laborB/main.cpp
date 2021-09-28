#include <iostream>

using namespace std;

int main()
{int v[100][100], n,S1=0, S2=0, i, j ;
cout<<"n=";
cin>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
            cout<< "v["<< i <<"]["<<j<<"]=";
        cin>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i+j<n-1){
            S1+=v[i][j];}
        if(i+j>n-1){
            S2+=v[i][j];}
    }

            }
        cout<<"S1="<<S1<<endl;
        cout<<"S2="<<S2<<endl;


        return 0;
    }
