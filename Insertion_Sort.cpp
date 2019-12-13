#include "sortingAlgoritms.h"

void Insertion_Sort (int *tab, int n)
{
    int current;
    int otherIndex;
    for (int i=1; i<n; i++)
    {
        current = tab[i];
        otherIndex = i;
        while (otherIndex>0 && current<tab[otherIndex-1])
        {
            tab[otherIndex] = tab[otherIndex-1];
            otherIndex--;
        }
    }
}
