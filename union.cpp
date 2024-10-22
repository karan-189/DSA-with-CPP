#include <iostream>
using namespace std;
void collection(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {

        if (arr1[i] <= arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n)
        arr3[k++] = arr1[i++];
    while (j < m)
        arr3[k++] = arr2[j++];
}
int main()
{
    int n, m;
    cout << "enter the size of array 1 = ";
    cin >> n;
    cout << "enter the size of array 2 = ";
    cin >> m;
    int *arr1 = new int[n];
    int *arr2 = new int[m];
    int *arr3 = new int[n + m];
    cout << "enter the value of array 1 = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter the values of array 2 = ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    collection(arr1, arr2, arr3, n, m);
    for (int i = 0; i < n + m; i++)
    {
        if (i > 0 && arr3[i] == arr3[i - 1])
            continue;
        cout << arr3[i] << " ";
    }
    return 0;
}