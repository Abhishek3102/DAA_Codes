#include <stdio.h>
#include <time.h>
int main()
{
    int arr[1000], n;
    double start, end, TT;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // arr[i]= 13*i + 92; //Best
        // arr[i]= rand()%10000 + 72; //Average
        // arr[i]= 100000 - 7*i; //Worst
    }
    start = clock();
    end = clock();
    /* printf("The sorted array is: \n");
    for(int i=0;i<n;i++)
    {
    printf("%d\n", arr[i]);
    } */
    TT = (end - start);
    printf("Time taken is %f", TT);
    return 0;
}
void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[mid + 1 + j];
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = M[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = M[j++];
        void mergeSort(int arr[], int low, int high);
        {
            if (low < high)
            {
                int mid = (low + high) / 2;
                mergeSort(arr, low, mid);
                mergeSort(arr, mid + 1, high);
                merge(arr, low, mid, high);
            }
        }
    }
}
