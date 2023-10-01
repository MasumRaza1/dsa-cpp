#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int nums[], int size) {
    if(size==0) return 0;
    int j=0;
    for(int i=1; i<size; i++) {
        if(nums[i]!=nums[j]) {
            j++;
            nums[j]=nums[i];
        }
    }
    return j+1;
}

int main() {
  
    int nums[]={1,1,2,6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int index = removeDuplicates(nums, size);
    cout<<index;

    return 0;
}
