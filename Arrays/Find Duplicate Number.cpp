class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Floyd's Tortoise & Hare Approach
        int slow = nums[0];
        int fast = nums[0];
        
        //move the slow pointer by 1 & fast pointers by 2 until they meet!
        do{
            slow = nums[slow];    //Takes 1-step !
            fast = nums[nums[fast]];  //Takes 2-step !
        }
        while(slow != fast);
        
        //point the fast to the first element of the array
        fast = nums[0];
        
        //move both the slow & fast pointers by 1 until they meet!
        while(slow != fast){
            slow = nums[slow];  // Moves by 1
            fast = nums[fast];  // Moves by 2
        };
        
        return slow;
    }
};
