//1. A Hanoi tornyai egy matematikai/logikai játék ahol 3 rúd van, A, B, C.
//Kezdetben az A rúdon "k" korong van, amelyeken különböző nagyságú korongok vannak.
//Az alsó a legnagyobb, a felső a legkisebb. Át kell helyezni a korongokat az A rúdról a C rúdra úgy,
//hogy egyetlenegyszer sem rakhatunk kisebb korongra nagyobbat. Bővebben lásd a wikit.
//Írjunk egy rekurzív C++ programot, amely kiszámolja, hogy tetszőleges "k" korongra hány
//lépésből lehet megoldani a feladatot. Segítség, n(1) = 1 korongra 1 lépés n(2) = 2 korongra 3 lépés általánosan n(k) = 2*n(k-1) + 1 lépés
//Bemenet	Kimenet
//3	        7

#include <iostream>

using namespace std;
int n(int k){
if(k==1){return 1;}
if(k==2){return 3;}
if(k==k){return  2*n(k-1) + 1;}
return n(k);}

int main()

{
int k;
cin>> k;
  cout<< n(k)<<endl;
  //cout<<"7"<<endl;
    return 0;
}
