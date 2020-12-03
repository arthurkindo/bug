#include<iostream>
using namespace std;
void decending(int [], int);
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements : \n";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
        // calling the function
    decending(arr, size);
    cout<<"this function had run. ";
        // displaying the final output
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" | ";
    }
    cout<<endl;
    return 0;
}
void decending(int arr[], int n){
    int max;
    int pos;
   int init_value;
    for(int i=0; i<n-1; i++){
        max = arr[i];
        init_value = max;
        for(int j=i+1; j<n; j++){
            if(arr[j]>max){
                max = arr[j];
                pos = j;
            }
        }
        int temp = init_value;
        arr[i] = max;
        arr[pos] = temp;

    }
}