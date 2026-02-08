#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    vector<int> nums1(n1);
    vector<int> nums2(n2);
    for(int i = 0;i<n1;i++){
        cin >> nums1[i];
    }
    for(int i = 0;i<n2;i++){
        cin >> nums2[i];
    }
    for(int i = n1 -1;i>-1;i--){
        if(nums1[i]>0){
            break;
        }
        else{
            nums1.pop_back();
        }
    }
    int j = 0;
    int i = 0;
    while( j < nums1.size() && i <nums2.size()){
        if(nums1[j]>nums2[i]){
            nums1.insert(nums1.begin()+j,nums2[i]);
            nums2.erase(nums2.begin()+i);
            j++;
        }
        else{
            j++;
        }
    }
    while(i<nums2.size()){
        nums1.push_back(nums2[i]);
        i++;
    }
    for(int x : nums1){
        cout << x << " ";
    }
    cout << endl;

}