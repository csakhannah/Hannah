// Hozzunk l�tre egy vektort, t�lts�k fel n elemmel, majd olvassunk be egy pos v�ltoz�t,
 //illetve egy hosszt s t�r�lj�nk ki a pos v�ltoz�t�l hossz elemet a vektorb�l
//Bemenet	Kimenet
//3	         1 3
//1
//2
//3
//1 (pos)
//1 (hossz)
#include <iostream>

#include <vector>
using namespace std;

int main()
{
    int n, k, pos, hossz;
    vector<int>tomb ;
    cin>>n;

    for (int i=0; i<n; i++)
        {cout<<"tomb["<<i<<"]=";
         cin>>k;
         tomb.push_back(k);
    }
    cin>>pos;
    cin>>hossz;
    tomb.erase(tomb.begin()+pos,tomb.begin()+pos+hossz);
    for (int i=0; i<tomb.size(); i++) {
        cout<<tomb[i]<< " ";
    }
    return 0;
}
