#include<iostream>
using namespace std;
int main(){
    int size,temp;
    cout << "Enter Array Size :-->";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout << "Enter Array Element ["<< i << "]:-->";
        cin >> arr[i];
    }

    cout << endl << endl << "!! Array Ascending Order By Print !!" << endl << endl;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl << endl << "!! Array Descending Order By Print !!" << endl << endl;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}