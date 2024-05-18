#include <fstream>
using namespace std;

ifstream fin("sort.in");
ofstream fout("sort.out");
int v[100000000];
int main()
{
    int n, i, x, copie, ord, mini, contor, praf;
    fin >> n;
    for(i=1; i<=n; i++){
        fin >> x;
        copie=x;
        ord=1;
        while(copie!=0){
            ord=ord*10;
            copie/=10;
        }
        ord/=10;
        copie=x;
        contor=1;
        praf=0;
        if(x/10!=0){
            while(contor!=0){
                if(copie >=v[i-1]){
                    if(praf==0){
                        mini=copie;
                        praf=1;
                    }
                    if(copie<mini)
                        mini=copie;
                }
                copie=copie%ord*10+copie/ord;
                if(copie==x)
                    contor=0;
            }
        }
        else mini=x;
        v[i]=mini;
    }
    for(i=1; i<n; i++)
        if(v[i]>v[i+1]){
            fout << "NU";
                return 0;
    }
    fout << "DA" << endl;
    for(i=1; i<=n; i++)
        fout << v[i] << " ";
    return 0;
}
