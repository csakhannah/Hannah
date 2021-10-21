//Hozzunk létre egy NxN es mátrixot és töltsük fel egy "input.txt" fileból,
 // aztán számítsuk ki a keleti és nyugati háromszögben lévő elemek összegét.
 // Az így kapott két számnak a legnagyobb közös osztóját írassuk ki egy "lnko.out" fileba.

#include <iostream>
#include <fstream>

using namespace std;
int main()
{ int v[100][100], n, SK=0,SN=0,lnko, i, j ;
ifstream in("input.txt");
ofstream out("lnko.out");
in>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        in>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i<j && i+j>n-1){
        SK+=v[i][j];}
        if(i>j && i+j<n-1){
        SN+=v[i][j];}
        }}
    out<<SK<<endl;
    out<<SN<<endl;
while(SK!=SN){
if(SK>SN){
    SK-=SN;}
    else{SN-=SK;}
}


 out << "lnko=" <<SK<< endl;
in.close();
out.close();
        return 0;
    }
