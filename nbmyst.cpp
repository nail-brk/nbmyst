#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int aleatoire(int max) {
    return rand() % (max + 1);
}

void afficherTitre() {
    cout << "=============================" << endl;
    cout << "    🎯 JEU DU NOMBRE MYSTÈRE    " << endl;
    cout << "=============================" << endl << endl;
}

void nbmyst() {
    int maxVal, proposition, nbEssais = 0;

    afficherTitre();

    cout << "Entrez la valeur maximale : ";
    cin >> maxVal;

    int secret = aleatoire(maxVal);
    cout << "\n🔍 Devinez le nombre entre 0 et " << maxVal << " !\n" << endl;

    do {
        cout << "Votre proposition : ";
        cin >> proposition;
        nbEssais++;

        if (proposition < secret)
            cout << "📈 C'est plus !" << endl;
        else if (proposition > secret)
            cout << "📉 C'est moins !" << endl;
        else
            cout << "\n🎉 Bravo ! Vous avez trouvé en " << nbEssais << " essai"
                 << (nbEssais > 1 ? "s" : "") << " !" << endl;

    } while (proposition != secret);
}

int main() {
    srand(time(NULL));
    nbmyst();
    return 0;
}
