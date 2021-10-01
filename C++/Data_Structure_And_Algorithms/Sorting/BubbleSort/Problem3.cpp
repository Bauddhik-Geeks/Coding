//Easy Going - HackerEarth
#include <iostream>
using namespace std;
void input (int arr[], int n) {
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void BubbleSort (int a[], int s) {
    for (int i = 0; i < s - 1; i++) {
        for (int j = 0; j < s - i - 1; j++) {
               if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()

    int n, m, t, arr[1000];
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        input (arr, n);
        BubbleSort (arr, n);
        int max = 0, min = 0, k = n - m;
        for (int j = 0; j < k; j++){
            max += arr[n - j - 1];
            min += arr[j];
        }
        cout << max - min << endl;
    }
    return 0;

}