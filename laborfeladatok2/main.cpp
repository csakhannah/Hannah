#include <iostream>
#include <fstream>
using namespace std;

int main()
{int v[100][100], n, i, j, PE,PK, PD, PN ;
ifstream in("input.txt");
in>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        cout<< "v["<< i <<"]["<<j<<"]=";
        cin>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++)
    {if(i<j && i+j<n-1){
        PE+=v[i][j];}
        if(i<j && i+j>n-1){
        PK+=v[i][j];}
        if(i>j && i+j>n-1){
        PD+=v[i][j];}
        if(i>j && i+j<n-1){
        PN+=v[i][j];}
        }}
        cout<<PE<<endl;
        cout<<PK<<endl;
        cout<<PD<<endl;
        cout<<PN<<endl;

cout<<endl;

in.close ();
    return 0;}

