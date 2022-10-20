#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {1, 3, 5, 7, 9, 2, 6, 0};
    int brr[5] = {1, 3, 5, 7, 9};

    swapAlternate(arr, 8);
    printArray(arr, 8);

    swapAlternate(brr, 5);
    printArray(brr, 5);
    return 0;
}