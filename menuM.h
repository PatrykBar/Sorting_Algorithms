class menuB
{
private:

public:

};


    clock_t start, stop;
    double time_sorting;
    int t=0;
    int *table;
    table = new int [t];

    int *table2;
    table2 = new int [t];

    int *table3;
    table3 = new int [t];

    //loops for creating table
    cout << "Enter the number of numbers to sort:" << endl;
    cin >> t;

    cout << "Enter the numbers to sort:" << endl;
    for (int i=0; i<t; i++)
    {
        cin >> table[i];
    }

    for (int i=0; i<t; i++)
    {
        table2[i] = table[i];
    }
    //sorting

    //bubbles sorting
    start = clock();
    Bubbles_Sort(table, t);
    stop = clock();
    time_sorting = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << "Bubbles sorting time: " << time_sorting << " s."<< endl;

    //Quick Sorting
    start = clock();
    Quick_Sort(table2, 0, t-1);
    stop = clock();
    time_sorting = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << "Quick sorting time: " << time_sorting << " s."<< endl;

    //Merg Sorting
    start = clock();
    Merge_Sort(table3, 0, t-1);
    stop = clock();
    time_sorting = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << "Merg sorting time: " << time_sorting << " s."<< endl;

    delete [] table;
    delete [] table2;
    delete [] table3;
