//Shubham and Xor-HackerEarth

#include<bits/stdc++.h>

using namespace std;
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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    long int A[n],k = 0,sum = 0;
    for(int i = 0; i<n; i++)cin>>A[i];
    BubbleSort(A,n);
    for(int i = 0; i<n-1; i++){
        k = 1;
        while(A[i]==A[i+1]&&i<n-1){
            k++;
            i++;
           }
        sum+=(((k)*(k-1))/2);
    }
    cout<<sum<<endl;    

    return 0;

}