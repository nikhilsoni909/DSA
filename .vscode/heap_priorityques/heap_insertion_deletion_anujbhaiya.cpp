#include <iostream>
#define max 100
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertmaxheap(int a[], int &n, int value)
{
    n = n + 1;
    a[n] = value;
    int i = n;
    while (i >= 1)
    {
        int parent = (i - 1) / 2;
        if (a[parent] < a[i])
        {
            swap1(&a[parent], &a[i]);
            i = parent;
        }
        else
        {
            return;
        }
    }
}

void deletemax(int a[], int &n)
{
    a[0] = a[n];
    n = n - 1;
    int i = 0;
    while (i < n)
    {

        int largest = i;   // Initialize largest as root
        int l = 2 * i + 1; // left = 2*i + 1
        int r = 2 * i + 2; // right = 2*i + 2

        // If left child is larger than root
        if (l < n && a[l] > a[largest])
            largest = l;

        // If right child is larger than largest so far
        if (r < n && a[r] > a[largest])
            largest = r;

        // If largest is not root
        if (largest != i)
        {
            swap(a[i], a[largest]);
            i = largest;
        }

        else
        {
            return;
        }
    }
}

int main()
{
    int arr[] = {10, 5, 3, 2, 4};

    int n = 4;
    // insertmaxheap(arr, n, 60);
    printArray(arr, n + 1);
    deletemax(arr, n);
    cout << endl;
    printArray(arr, n + 1);
    return 0;
}