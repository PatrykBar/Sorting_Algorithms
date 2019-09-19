#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void menu_m();
void menu_a();
void Bubbles_Sort(int *tab, int n);
void Quick_Sort(int *table, int left, int right);
void Merge_Sort(int *a, int low, int high);
//void bubbles_time_sorting();

int main()
{
    char manuauto;

    cout << "Do you want to enter the numbers manually (m) or automatically (a)?" << endl;

    cin >> manuauto;

    if (manuauto == 'm')
    {
        menu_m();
    }

    else if(manuauto == 'a')
    {
        menu_a();
    }

    else
        cout << "Incorrectly entered character" << endl;


    return 0;
}

void menu_m()
{
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

}

void menu_a()
{
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

}

void Bubbles_Sort(int *tab, int n)
{
    for (int i=1; i<n; i++)
    {
        for (int j=n-1; j>=1; j--)
        {
            if (tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

void Quick_Sort(int *table, int left, int right)
{
    int v=table[(left+right)/2];
    int i,j,x;
    i=left;
    j=right;
    do
    {
        while (table[i]<v)
            i++;
        while (table[j]>v)
            j--;
        if (i<=j)
        {
            x=table[i];
            table[i]=table[j];
            table[j]=x;
            i++;
            j--;
        }
    }
    while (i<=j);
    if (j>left)
        Quick_Sort(table,left, j);
    if (i<right)
        Quick_Sort(table, i, right);
}

void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}


	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}

// A function to split array into two parts.
void Merge_Sort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		Merge_Sort(a, low, mid);
		Merge_Sort(a, mid+1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}

