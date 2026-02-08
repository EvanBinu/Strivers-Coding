#include <iostream>
using namespace std;



int merge(int arr[],int l,int r,int mid){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int L[n1];
    int R[n2];
    for(int i = 0;i<n1;i++){
        L[i] = arr[l+i];
    }
    for(int i = 0;i<n2;i++){
        R[i] = arr[mid+i+1];
    }
    int i = 0 , j = 0, k= l;
    int swap = 0;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k++] = L[i++];

        }
        else{
            arr[k++] = R[j++];
            swap+=(n1-i);

        }
    }
    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
    return swap;
}
int mergesort(int arr[],int l,int r){
    int count = 0;
    if (l<r){
        int mid = (l+r)/2;
        count+=mergesort(arr,l,mid);
        count+=mergesort(arr,mid+1,r);
        count+=merge(arr,l,r,mid);
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << mergesort(arr,0,n-1) << endl;

}