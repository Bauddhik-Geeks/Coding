#include<iostream>
using namespace std;
//function to swap to indices of array
void Swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
//function to print an Array
void print (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
//Bubble sort function
void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){              
            if(arr[j-1]>arr[j]){
                Swap(arr,j-1,j);
            }
        }
    }
}
int main(){
    int n;
    //taking size of array as input and storing in variable n
    cin>>n;
    int Array[n];
    //taking elements of array and storing in array.
    for(int i=0;i<n;i++){
        cin>>Array[i];
    }
   
    //printing array before sorting
    print(Array,n);

    //sorting array using Bubble sort
    bubbleSort(Array,n);
    
    //printing array after sorting
    print(Array,n);
}