#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"insert value in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int key,i;
cout<<"enter key:"<<endl;
cin>>key;
for(i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"key is present in array"<<endl;    
            break;
        }  
}
if(i==n){
    cout<<"key is not found!!"<<endl;
}
return 0;
}