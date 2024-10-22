#include <iostream>
using namespace std;
int inver(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i < j && arr[i] > arr[j])
                count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "enter the size of array = ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter the values of array = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << inver(arr, n);
    return 0;
}