#include<iostream>
using namespace std;
int main()
{
    int index;

    cout << "Array Size Enter :-->";
    cin>>index;
    int arr[index];

    for(int i=0; i<index;i++){
        cout << "Enter Array arr["<< i <<"] :-->";
        cin >> arr[i];
    }

    int max=arr[0];
    for(int i=0;i<index;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout << "Array Max Element :-->"<< max;

    return 0;
}
