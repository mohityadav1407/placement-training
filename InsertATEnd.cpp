#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void InsertAtEnd(int arr[],int& size,int value,int maxsize){
    if(size>=maxsize){
        cout<<"array is full"<<endl;
        return;
    }
    arr[size] = value;
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
    cout<<"Original array: ";
    display(arr,size);
    InsertAtEnd(arr,size,10,maxsize);
}
