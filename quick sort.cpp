#include <bits/stdc++.h>
using namespace std;

void quicksort(int A[],int low,int high);
int partitions(int A[],int low,int high);

int main()
{
    int A[] = {44,39,1,7,2,12,56,8};
    int high = (sizeof(A)/sizeof(A[0])) - 1;
    quicksort(A,0,high);

    for (int i = 0; i<= high; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

void quicksort(int* A,int low,int high)
{
    if (low < high)
    {
        int pi = partitions(A , low , high);
        quicksort(A,low,pi -1);
        quicksort(A,pi +1,high);

    }

}


int partitions(int* A,int low,int high)
{
    int i = low-1;
    int pivot = A[high];

    for (int j = low; j< high -1; j++)
    {
        if (A[j] <= pivot)
        {
            i++;
            swap(A[i],A[j]);
        }
    }

    swap(A[i+1],A[high]);
    return i+1;

}
