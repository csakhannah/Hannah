#include <iostream>
#include <fstream>
using namespace std;

int main()
{int v[100][100], n, SE=0, SD=0, i, j ;
ifstream in("input.txt");
in>>n;
for(i=0; i<n; i++){
 for(j=0; j<n; j++){
    cout<< "v["<< i <<"]["<<j<<"]=";
    cin>>v[i][j];}
    }
for(i=0; i<n; i++){
 for(j=0; j<n; j++){
    if(i<j && i+j<n-1){
            SE+=v[i][n-1-i];}
    if(i>j && i+j>n-1){
            SD+=v[i][i];}
 }}
if(SE>SD){
        cout<<"SE a nagyobb";}
        else{cout<<"SD a nagyobb";}

in.close();
        return 0;
    }
