#include<iostream.>
using namespace std;


int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot right side dora hoyche;
    int i = (low - 1);  // left side i=-1,j=0 dora hoyche;

    for (int j = low; j <= high-1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment i index and swap j ar index value i ar sathe

            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
        int temp=arr[i+1];///finally akbar puro array check hole i ar ses index ar pore index pivot swap hobe
        arr[i+1]=arr[high];
        arr[high]=temp;
    return (i + 1); ///pivot akhon swap pore i ses pore index asche tai p=i+1;
}

/*
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);
        /*quicksort recusion call hoye opore quick sort jache */
        quickSort(arr, low, pi - 1);///left side pivote bade
        quickSort(arr, pi + 1, high); ///right side pivote bade
    }
}


int main()
{

int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;

	int arr[n];
	cout<<"Enter element: ";
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	quickSort(arr, 0, n-1);

	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<arr[i]<<"\t";

	return 0;
}
