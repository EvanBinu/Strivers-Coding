#include<iostream>
#include<vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to count how many students are needed if the max pages per student is 'd'
int countStudents(vector<int>& nums, int d) {
    int students = 1;
    int pagesPerStudent = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        if(pagesPerStudent + nums[i] <= d) {
            // Add book to current student
            pagesPerStudent += nums[i];
        } else {
            // Assign to next student
            students++;
            pagesPerStudent = nums[i];
        }
    }
    return students;
}

int search(vector<int>& nums, int k) {
    int n = nums.size();
    if(k > n) return -1; // More students than books is impossible
    
    // The lowest possible 'max pages' is the largest single book
    int low = *max_element(nums.begin(), nums.end());
    // The highest possible 'max pages' is the sum of all books
    int high = accumulate(nums.begin(), nums.end(), 0);
    
    int ans = high;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        int studentsRequired = countStudents(nums, mid);
        
        // If we need more students than available, mid is too small
        if(studentsRequired > k) {
            low = mid + 1;
        } 
        // If we can do it with k or fewer students, try to find a smaller maximum
        else {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << search(nums, k) << endl;
    return 0;
}