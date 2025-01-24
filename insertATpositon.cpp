#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void InsertAtEnd(int arr[],int& size,int value,int position,int maxsize){
    if(size>=maxsize){
        cout<<"array is full"<<endl;
        return;
    }
    if(position<0 || position>size){
        cout<<"Invalid Position"<<endl;
        return;
    }
    for(int i=size;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position] = value;
    size++;
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int maxsize = 10;
    int arr[maxsize] = {1,2,3,4,5};
    int size=5;
    cout<<"Updated array: ";
    display(arr,size);
    InsertAtEnd(arr,size,10,3,maxsize);
}
