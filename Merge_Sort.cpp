#include "sortingAlgoritms.h"

void Merge(int *tab, int low, int high, int mid);

// A function to split array into two parts.
void Merge_Sort(int *tab, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		Merge_Sort(tab, low, mid);
		Merge_Sort(tab, mid+1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}

void Merge(int *tab, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (tab[i] < tab[j])
		{
			temp[k] = tab[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = tab[j];
			k++;
			j++;
		}
	}

	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = tab[i];
		k++;
		i++;
	}

	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = tab[j];
		k++;
		j++;
	}


	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		tab[i] = temp[i-low];
	}
}
