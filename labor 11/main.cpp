// A divPrim függvénynek egy n paramétere van, amelyen keresztül egy természetes számot kap (n ∈ [2,109]);
 //s visszatéríti az n azon prím osztóinak összegét, amelyek páratlan hatványon jelennek meg a szám prímtényezőkre bontásában.
//Írjuk meg a teljes programot, amely használva a divPrim függvényt kiírja az n et!


//Bemenet360
//Kimenet7
//Magyarázat (360=23·32·51, tehát s=2+5)
//Bemenet16
//Kimenet0




#include <iostream>

using namespace std;
int divPrim(int n){
int oszto=2;
int S=0;
while(n>1){
    int szamlalo=0;
    while (n%oszto==0){
        n/=oszto;
        szamlalo++;
    }
if(szamlalo&2>0){
S+=oszto;
}
oszto++;}
return S;
}
int main()
{  int S=divPrim(360);
    cout << S<< endl;
    return 0;
}
