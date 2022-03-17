#include <iostream>
#include <vector>

using namespace std;

int m[10][10];

int n = 9;

bool lehet(int m[10][])
{
 for(int 1=1; i<n+1; i++){
    for(int j=1; j<n+1; j++){
        if(m[i][j]>0)
            return false;

    }
 }return true;
}
void kiir(vektor<int>v)
{
    for (int t=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

void backtrack(int jelenlegi, vector<int> v, int m[10[10])
{
    // ha bejartunk mindent, irjuk ki a megoldast
    if (leall(v))
    {
        kiir(v);
        return;
    }
    //probaljunk meg az osszes lehetseges
    //csomopontba atmenni, ha lehet
    for(int kovetkezo = 1; kovetkezo<n+1; kovetkezo++)
    {
        //csak akkor probaljunk tovabblepni,
        //ha nem a jelenlegi be szeretnenk lepni
        if (kovetkezo!=jelenlegi)
        {
            if (lehet(jelenlegi, kovetkezo, v, m))
            {
                //ha lehetseges tovabblepni,
                //lepjunk tovabb, s mentsuk le a kovetkezo csomopontot egy ideiglenes vektorban
                vector<int> tempv = v;
                tempv.push_back(kovetkezo);
                int tenpm[10][10];
                for(int i=1; i<n+1; i++)
                    for(int j=1; j<n+1; j++)
                        tempm[i][j]=m[i][j];
                    temp[jelenlegi][kovetkezo]=0;
                    temp[kovetkezo][jelenlegi]=0;
                    backtrack(kovetkezo,tempv, tempm);

            }
        }
    }

}


int main()
{   int m[10][10];
    int i, j;
    ifstream in("input.txt");
    in>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in>>m[i][j];
        }
    }
    for(i=1; i<n+1; i++){
        vector<int>v;
        v_push.back(i, v, m);
    } return 0;}
  /**  //elek betoltese
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
*/
