#include<iostream>
using namespace std;
int Linear_search(int arr[],int n,int key){
    for(int i =0;i<=n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}                           ///Time complexity O(n)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<Linear_search(arr,n,key);
}
