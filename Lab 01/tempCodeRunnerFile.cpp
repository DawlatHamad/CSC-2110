    for (int i = 1; i <= size; i++)
    {
        for (int k = size - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;        
    }
    cout << endl;