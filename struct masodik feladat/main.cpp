#include <iostream>
#include <fstream>
using namespace std;

struct diak{
int azonosito;
double media;
string osztaly;
string nev;
}diakok[1000];

int main()
{
    int max, idx;
    int n;

    ifstream in("input.txt");
    in >>n;
    for(int i=0; i<n; i++){
        in>> diakok[i].azonosito;
        in>> diakok[i].nev;
        in>> diakok[i].osztaly;
        in>> diakok[i].media;
        if(i==0){
            max=diakok[i].media;
            idx=diakok[i].azonosito;}
        if(diakok[i].media>max){
                max=diakok[i].media;
                idx=diakok[i].azonosito;
            }
        }

    cout << idx << endl;
    in.close();
    return 0;
}
