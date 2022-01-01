#include<iostream>
using namespace std;
void subset(int array[], int n){
    cout<<"The possible subsets are:"<<endl;
    for(int i=0; i<(1<<n); i++){
        for( int j=0; j<n; j++){
            if(i&(1<<j)){
                cout<<array[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
int n;
cout<<"Enter the number of elements to be entered:";
cin>>n;
int array[n];
cout<<"Enter the elements: ";
for(int i=0; i<n; i++){
    cin>>array[i];
}
subset(array, n);
return 0;
}