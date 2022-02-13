// Hozzunk létre egy vektort, töltsük fel n elemmel, majd olvassunk be egy pos változót,
 //illetve egy hosszt s töröljünk ki a pos változótól hossz elemet a vektorból
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
