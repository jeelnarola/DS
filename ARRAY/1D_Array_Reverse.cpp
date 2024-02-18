#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << " Enter A Array Size :->";
    cin >> size;
    int arr[size];

    for(int i=0;i<size;i++){
        cout << "Eneter A Array Element ["<< i <<"] : ";
        cin >> arr[i];
    }

    cout << endl << " !! Array print !! " << endl << endl;
    
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl  << endl << " !! Reverse Array print !! " << endl << endl;

    for(int i=size-1;i>=0;i--){
        cout << arr[i] << " ";
    }

    return 0;
}