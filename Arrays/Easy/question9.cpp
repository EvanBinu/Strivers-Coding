#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    int arr1[n],arr2[m];
    for(int i = 0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i = 0;i<m;i++){
        cin >> arr2[i];
    }
    vector<int> arr;
    int i =0,j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            if(arr.empty() || arr.back() != arr1[i]){
                arr.push_back(arr1[i]);}
                i++;
            
        }
        else if(arr1[i] > arr2[j]){
            if(arr.empty() || arr.back() != arr2[j]){
                arr.push_back(arr2[j]);}
                j++;
            
        }
        else{
            if(arr.empty() || arr.back() != arr1[i]){
                arr.push_back(arr1[i]);}
                i++;
                j++;
            
        }
    }
    while(i < n){
        if(arr.empty() || arr.back() != arr1[i])
            arr.push_back(arr1[i]);
        i++;
    }

    while(j < m){
        if(arr.empty() || arr.back() != arr2[j])
            arr.push_back(arr2[j]);
        j++;
    }
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}