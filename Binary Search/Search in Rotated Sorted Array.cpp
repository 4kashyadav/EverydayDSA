int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }

            //if the left half is sorted
            if(nums[low]<=nums[mid]){
                //if target lies in it or nor
                if(target>=nums[low] && target<=nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }

            //if the right half is sorted
            else{
                //if target lies in it or not
                if(target>=nums[mid] && target<=nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
