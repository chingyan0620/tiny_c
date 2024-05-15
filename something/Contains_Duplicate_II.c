#include <stdio.h>
#include <stdbool.h> 

bool containsNearbyDuplicate(int* nums, int numsSize, int k);

int main(){
    int aaa[] = {1,2,3,1};
    bool res = 0;
    res = containsNearbyDuplicate(aaa,6,3);
    printf(" res :%d , ",res);

    return 0;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int l = 0 , r = 0;

    
    while(l < numsSize - 1){
        printf("%d , %d\n", l ,r);
        for(int i = l; i < r ; i++){
            if(nums[l] == nums[r]){
                return true;
            }
        }

        
        if(r < numsSize-1 && r-l <=k){
            r++;
        }else if( r-l == k){
            l++;
            r++;

        }else if(r == numsSize -1 || r - l >k){
            l++;
        }
        

    }
    return false;
}