
    int L;
    while (cin >> L, L > 0)
    {
        char P1, P2;
        int most = 0x3fffffff, dist = 0;

        int B = 1;
        while (B++ <= L)
        {
            cin >> P1;
            if (P1 != '.') break;
        }

        if (P1 == 'Z') most = 0;

        while (B++ <= L)
        {
            cin >> P2;
            dist += 1;
            if (P2 == '.') continue;
            if (P2 == 'Z') { most = 0; continue; }
            if (P1 != P2) { most = min(most, dist); P1 = P2; }
            dist = 0;
        }
        cout << most << '\n';
    }
