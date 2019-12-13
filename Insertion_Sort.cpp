#include "sortingAlgoritms.h"

void Insertion_Sort (int *a, int n)
{
    int current;
    int otherIndex;
    for (int i=1; i<n; i++)
    {
        current = a[i];
        otherIndex = i;
        while (otherIndex>0 && current<a[otherIndex-1])
        {
            a[otherIndex] = a[otherIndex-1];
            otherIndex--;
        }
    }
}
