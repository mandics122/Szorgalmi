#include <iostream>
using namespace std;

int main(){
    struct 
    {
        string nap;
        int ora;
    } naplo[7];

    string napok[7] = {"Hétfő","Kedd","Szerda","Csütörtök","Péntek","Szombat","Vasárnap"};
    int kelés[7] = {8,5,7,7,5,9,9};

    for (int i = 0; i < 7; i++)
    {
        naplo[i].nap = napok[i];
        naplo[i].ora = kelés[i];
    }

    cout << "Az ébredés napló:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << naplo[i].nap  << " --> " << naplo[i].ora << " óra" << endl; 
    }
}