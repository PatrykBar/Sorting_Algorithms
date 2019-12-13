class menuA
{
private:

public:

};

    clock_t start, stop;
    double time_sorting;
    int HowManyNumbers;
    int t=0;

    int *table;
    table = new int [t];

    int *table2;
    table2 = new int [t];

    int *table3;
    table3 = new int [t];

    //loops for creating table
    cout << "How many numbers ?? (between 1 and 100000)" << endl;
    cin >> HowManyNumbers;
    srand(time(NULL));
    if ( 1<HowManyNumbers<100000 )
    {
        cout << "Your numbers: " << endl;
        for (int i=0; i<HowManyNumbers; i++)  // change this two loops in 1 loop
        {
            table [i] = rand()%100000+1;
        }

        for (int i=0; i<HowManyNumbers; i++)
        {
            cout  << table [i] << " ";
        }
    }
    else
    {
        cout << "Too much or too less.... " << endl;
    }



    //sorting

    //bubbles sorting
    start = clock();
    Bubbles_Sort(table, t);
    stop = clock();
    time_sorting = (double)(stop-start)/CLOCKS_PER_SEC;
    cout << "Bubbles time sorting: " << time_sorting << " s."<< endl;

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
