#include <iostream>

using namespace std;
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int a[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l <= n && a[l] > a[largest])
    {
        largest = l;
    }
    if (r <= n && a[r] > a[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap1(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}
void buildheap(int a[], int n)
{
    for (int i = n / 2; i >= 0; i--)
    {

        heapify(a, n, i);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

void heapsort(int arr[], int n)
{

    for (int i = n; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i - 1, 0);
    }
}

int main()
{
    int arr[] = {10, 30, 50, 20, 35, 15};
    int n = 5;
    buildheap(arr, n);
    printArray(arr, n + 1);
    // now its time for heap sort
    heapsort(arr, n);
    cout << endl;
    printArray(arr, n + 1);
    return 0;
}