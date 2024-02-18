
    // FOLLOWING TASK AND INPUT || OUTPUT

// int a[5] = [5,2,6,4,8];
// input : num=10;
// output : indexes :-> 2,3 AND indexes :-> 1,4

#include<iostream>
using namespace std;
int main()
{

    int size,i,num,j;
    cout << "Enter A Array Size :-->" ;
    cin >> size;
    int arr[size];

    for(i=0;i<size;i++){
        cout << "Enter A Array Element [" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl << "Enter Any Number :-->";
    cin >> num;

    cout << endl << "!! Enter Number In Element Sum of Index !!" << endl;

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]==num){
                cout << endl <<" First Index Of ["<< i <<"] = "<< arr[i] << "" << " Second Index Of [" << j <<"] = "<< arr[j] << " => "<< num << endl;
            }
        }
    }
    return 0;

}