#include <iostream>
#include <fstream>
using namespace std;

int main()
//Hozzunk létre egy NxN es mátrixot és töltsük fel egy "input.txt"
//fileból, aztán számítsuk ki a főátló feletti és alatti elemek összegét.
//Az így kapott két számnak a legkiseb közös többszörösét írassuk ki egy "lkkt.out" fileba.
{ int v[100][100], n, Sf1=0,Sf2=0,lkkt, i, j ;
ifstream in("input.txt");
ofstream out("lkkt.out");
in>>n;
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        in>>v[i][j];}
    }
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(i<j){
            Sf1+=v[i][j];}
        if(i>j){
            Sf2+=v[i][j];}
        }}
    out<<Sf1<<endl;
    out<<Sf2<<endl;
lkkt=Sf1*Sf2;
while(Sf1!=Sf2){
    if(Sf1>Sf2){Sf1-=Sf2;}
    else{Sf2-=Sf1;}
}
lkkt=lkkt/Sf2;
    out << "lkkt=" <<lkkt<< endl;
in.close();
out.close();
        return 0;
    }
