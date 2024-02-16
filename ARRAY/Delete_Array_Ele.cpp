#include<iostream>
using namespace std;
int main()
{
    int size,n;
    cout << "Array Size Enter :-->";
    cin>>size;
    int a[size];

    for(int i=0;i<size;i++){
        cout << "Enter Elemet a[" << i <<"] :-->";
        cin>>a[i];
    }

    cout << "Array Element : --> "<<endl;
    for(int i=0;i<size;i++){
        cout << a[i] <<" ";
    }


    cout << endl  << "Enter Delete  Array index value :-->";
    cin >> n;

    for(int i=n;i<size;i++){
        a[i-1]=a[i];
    }
    n=n-1;

    for(int i=0;i<n;i++){
        cout << a[i];
    }

    return 0;
}