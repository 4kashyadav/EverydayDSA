class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid = 0;

        while(mid<= high){
            switch(nums[mid]){

                //if the element is 0
                case 0:
                swap(nums[low], nums[mid]);
                low++;mid++;
                break;

                //If the element is 1
                case 1:
                mid++;
                break;

                //If the element is 2
                case 2:
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
