#include <iostream>

using namespace std;

void merge(int arr[],int left,int mid,int right){
    int subarr1 = mid - left + 1;
    int subarr2 = right - mid;

    auto *leftarr = new int[subarr1];
    auto *rightarr = new int[subarr2];

    for(int i = 0;i < subarr1;i++){
        leftarr[i] = arr[left + i];
    }
    for(int i = 0;i < subarr2;i++){
        rightarr[i] = arr[mid + 1 + i];
    }
    int index1 = 0, index2 = 0,indexOfMergearr = left;

    while(index1 < subarr1 && index2 < subarr2){
        if(leftarr[index1] <= rightarr[index2]){
            arr[indexOfMergearr] = leftarr[index1];
            index1++;
        }
        else{
            arr[indexOfMergearr] = rightarr[index2];
            index2++;
        }
        indexOfMergearr++;
    }

    while (index1 < subarr1) {
        arr[indexOfMergearr] = leftarr[index1];
        index1++;
        indexOfMergearr++;
    }

    while (index2 < subarr2){
        arr[indexOfMergearr] = rightarr[index2];
        index2++;
        indexOfMergearr++;
    }
    
    delete[] leftarr;
    delete[] rightarr;
}

void mergesort(int arr[],int begin,int end){
    if(begin >= end) return;

    int mid = begin + (end - begin) / 2;
    mergesort(arr,begin,mid);
    mergesort(arr,mid + 1,end);
    merge(arr,begin,mid,end);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr,0,size-1);
    
    int curr = 1;
    while(arr[0] == 0){
        swap(arr[0],arr[curr]);
        curr++;
    }

    for(int i = 0;i <n;i++){
        cout <<  arr[i];
    }
    return 0;
}