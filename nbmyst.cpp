char rejouer;
do {
    nbmyst();
    cout << "Voulez-vous rejouer ? (o/n) : ";
    cin >> rejouer;
} while (rejouer == 'o' || rejouer == 'O');