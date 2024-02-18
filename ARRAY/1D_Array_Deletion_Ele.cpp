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

    for(int i=n;i<size;i++){    // i=n => 2  2<5 3<5 4<5
        a[i]=a[i+1];            // a[2]=a[2+1]
                                // a[2]=a[3]  p=3
                                // a[3]=a[4] p=4
                                // a[4]=a[5] p=5
                                // 5<5 contion false 
    }
    size--; // size=5-- => 4 size = 5 size=4

    for(int i=0;i<size;i++){
        cout << a[i] << " "; // 1 3 4 5
    }

    return 0;
}