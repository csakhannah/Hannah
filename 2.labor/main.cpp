#include <iostream>

using namespace std;

int main()
{ int v[100][100], n, k, i, j ;
cout<<"n=";
cin>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        cin>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(v[i][j]%2==0){
            cout<<v[i][j]<<" ";
        }
    }
}


    return 0;
}
