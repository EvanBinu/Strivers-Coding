#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>& arr){
    int ans = arr[0];
    int maxpro = arr[0];
    int minpro = arr[0];
    for(int i = 1;i<arr.size();i++){
        int curr =arr[i];
        if(curr<0){
            swap(minpro,maxpro);
        }
        minpro = min(curr,minpro*curr);
        maxpro = max(curr,maxpro*curr);
        ans = max(ans,maxpro);
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int maxi = 0;
    int pro = 1;

    for(int i = 0;i<n;i++){
        pro*=arr[i];
        int j = i+1,k=n;
        while(j<k){
            pro *=arr[j];
            maxi = max(pro,maxi);
            j++;
        }
        pro = 1;
    }
    cout << maxi << endl;
    cout << "Function:" << maxProduct(arr)<<endl;
}