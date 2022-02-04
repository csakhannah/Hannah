//1. A Hanoi tornyai egy matematikai/logikai játék ahol 3 rúd van,
// A, B, C. Kezdetben az A rúdon "k" korong van, amelyeken különböző
// nagyságú korongok vannak. Az alsó a legnagyobb, a felső a legkisebb.
// Át kell helyezni a korongokat az A rúdról a C rúdra úgy, hogy egyetlenegyszer
 //sem rakhatunk kisebb korongra nagyobbat. Bővebben lásd a wikit. Írjunk egy divide
 //et imperas C++ programot, amely kiírja a lépéseket!
//Bemenet           	Kimenet
//3 (korongok száma)	1.A -> C
//                      2.A -> B
//                      1.C -> B
//                      3.A -> C
//                      1.B -> A
//                      2.B -> C
//                      1.A -> C


#include <iostream>

using namespace std;


void torony(int k, char h, char i, char j )
{

	if(k==1){
   cout<< k <<"."<< h <<" -> "<< j <<endl;
   return;
  }else{
    torony(k-1, h, j, i);
   cout<< k <<"."<< h <<" -> "<< j <<endl;
	torony(k-1, i, h, j);
}}
int main()
{

  int k;
  cin >> k;
  torony(k, 'A', 'B', 'C');
  return 0;
}
