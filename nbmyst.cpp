 do {
        cout << "Entrez une valeur : ";
        cin >> val1;
        nbessai++;

        if (val1 < val)
            cout << "C'est plus !" << endl;
        else if (val1 > val)
            cout << "C'est moins !" << endl;