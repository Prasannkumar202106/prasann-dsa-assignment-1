#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the array size : "<<endl;
    int d=0,e=0;
    cin>>d>>e;
    int arr[d][e];
    cout<< "The matrix is of size is : "<< d<<"X"<< e <<endl<<endl;
    cout<< "Enter Array Elements : "<< endl;

    for(int i=0; i<d; i++){
        for(int j=0; j<e; j++){
            cin>>arr[i][j];
        }
        cout<< endl;
    }

    cout<<"Array Entered : "<<endl;
    for(int i=0; i<d; i++){
        for (int j=0; j<e; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int z;
    cout<<"Enter element to search : ";
    cin>>z;
    for(int i=0; i<d; i++){
        for(int j=0; j<e; j++){
            if(arr[i][j]==z){
                cout<<"Element found at : "<< "Array["<<i+1<<"]" << "["<< j+1<<"]" << endl;
            }
            else{
            cout<<"Element not found!"<< endl;
            return 0;
            }
        
        }

        
    }
    return 0;
}