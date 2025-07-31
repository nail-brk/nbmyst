#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int aleatoire(int max) {
    return rand() % (max + 1);
}

void nbmyst() {
    int n;
    int nbessai=0;
    int val1;
    cout<<"Choississez la valeur maximale pour votre nombre mystère :"<<endl;
    cin>>n;
    int val=aleatoire(n);
    cout<<"Entrez une valeur !"<<endl;
    cin>>val1;
    do {
        cout<<"C'est plus !"<<endl;
        nbessai+=1;
        cout<<"Entrez une valeur !"<<endl;
        cin>>val1;
    } while(val1<val);
    do {
        cout<<"C'est moins !"<<endl;
        nbessai+=1;
        cout<<"Entrez une valeur !"<<endl;
        cin>>val1;
    } while(val1>val);
    cout<<"Bravo ! Vous avez trouvé la valeur en "<<nbessai+1<<" essais !"<<endl;
}


int main() {
    srand(time(NULL));
    nbmyst();
}