#include <iostream>
#include <vector>

using namespace std;

//szomszedossagi matrix
int m[10][10];
//a csomopontok szama + 1
int n = 9;


bool leall(vector<int> v)
{

    if (v.size() == n-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool lehet(int jelenlegi, int kovetkezo, vector<int> v)
{
    //van-e osszekottestes a ket csomopont kozott
    if (m[jelenlegi][kovetkezo] == 0)
    {
        return false;
    }
    //jartunk e mar kovetkezo csomopontban
    for (int i=0; i<v.size(); i++)
    {
        if (v[i] == kovetkezo)
        {
            return false;
        }
    }
    return true;
}

void kiir(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";

    }
    cout << endl;
}


void backtrack(int jelenlegi, vector<int> v)
{
    // ha bejartunk mindent, irjuk ki a megoldast
    if (leall(v))
    {
        kiir(v);
        return;
    }
    //probaljunk meg az osszes lehetseges
    //csomopontba atmenni, ha lehet
    for(int i = 1; i<n; i++)
    {
        //csak akkor probaljunk tovabblepni,
        //ha nem a jelenlegi be szeretnenk lepni
        if (i!=jelenlegi)
        {
            if (lehet(jelenlegi, i, v))
            {
                //ha lehetseges tovabblepni,
                //lepjunk tovabb, s mentsuk le a kovetkezo csomopontot egy ideiglenes vektorban
                vector<int> tempv = v;
                tempv.push_back(i);
                backtrack(i, tempv);
            }
        }
    }

}


int main()
{
    //szomszedossagi matrix inicializalasa
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            m[i][j]=0;
        }
    }
    //elek betoltese
    m[1][2] = 1;
    m[1][6] = 1;
    m[2][3] = 1;
    m[2][4] = 1;
    m[3][4]= 1;
    m[4][8]= 1;
    m[5][6]= 1;
    m[5][7]= 1;
    m[5][8]= 1;
    //szimmetrikus masolas
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            m[j][i]= m[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    //probaljuk meg minden elbol bejarni a grafot
    for(i=0; i<n; i++)
    {
        vector<int> v;
        v.push_back(i);
        backtrack(i, v);
    }
    return 0;
}



