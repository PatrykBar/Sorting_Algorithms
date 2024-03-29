#include "sortingAlgoritms.h"

void Quick_Sort(int *tab, int left, int right)
{
    int v=tab[(left+right)/2];
    int i,j,x;
    i=left;
    j=right;
    do
    {
        while (tab[i]<v) i++;
        while (tab[j]>v) j--;

        if (i<=j)
        {
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++;
            j--;
        }
    }
    while (i<=j);
    if (j>left)
        Quick_Sort(tab,left, j);
    if (i<right)
        Quick_Sort(tab, i, right);
}
