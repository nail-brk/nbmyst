void nbmyst() {
    int maxVal;
    int nbEssais = 0;
    int proposition;

    cout << "Choisissez la valeur maximale pour le nombre mystère : ";
    cin >> maxVal;

    int secret = aleatoire(maxVal);

    do {
        cout << "Entrez une valeur : ";
        cin >> proposition;
        nbEssais++;

        if (proposition < secret) {
            cout << "C'est plus !" << endl;
        } else if (proposition > secret) {
            cout << "C'est moins !" << endl;
        } else {
            cout << "Bravo ! Vous avez trouvé la valeur en " << nbEssais
                 << " essai" << (nbEssais > 1 ? "s" : "") << " !" << endl;
        }

    } while (proposition != secret);
}
