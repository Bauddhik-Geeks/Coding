//Ants on a circle - HackerEarth
//solution

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
    }    
}

int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    int x[m], y[m];
    int A[m];

    for (int i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < m; i++)
    {
        if (y[i] < 0)
        {
            x[i] = (n - (t % n) + x[i]) % n;
            if (x[i] == 0)
                x[i] = n;
            else
                x[i] = x[i];
        }

        else if (y[i] > 0)
        {
            x[i] = (t % n + x[i]) % n;
            if (x[i] == 0)
                x[i] = n;
            else
                x[i] = x[i];
        }
        A[i] = x[i];
    }

    bubbleSort(A, m);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}