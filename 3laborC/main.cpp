#include <iostream>

using namespace std;

int main()
{int v[100][100], n, Sf=0, Sm=0, i, j ;
cout<<"n=";
cin>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        cout<< "v["<< i <<"]["<<j<<"]=";
        cin>>v[i][j];}
    }
for(i=0; i<n; i++){
            Sm+=v[i][n-1-i];
            Sf+=v[i][i];}

        cout<<"Sf="<<Sf<<endl;
        cout<<"Sm="<<Sm<<endl;


        return 0;
    }
