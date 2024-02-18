#include<iostream>
using namespace std;
int main()
{
    int size,n,element;
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
    cout << endl  << "Enter Delete  Array Element value :-->";
    cin >> element;


    for (int i = size; i>n; i--) { // i=5 5>1 4>1 3>1 2>1 1>1
        a[i] = a[i - 1];    // a[5]=a[5-1]  
                            //a[5]=a[4]  p=5
                            // a[4]=a[3] p=4
                            // a[3]=a[2] p=3
                            // a[2]=a[1] p=2
                            // 1>1 = conditon false And index 1 is Empty
    }
    a[n]=element;  // a[1]=0 p=0
    size++;        // 5++ = 6


    //cout << a[4];
    for(int i=0;i<size;i++){
        cout << a[i] << " "; // 1 0 2 3 4 5
    }

    return 0;
}