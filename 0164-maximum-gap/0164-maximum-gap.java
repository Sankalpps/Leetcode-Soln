class Solution {
    public int maximumGap(int[] nums) {
        int diff=0;
        int max_val=0;
        Arrays.sort(nums);
        for(int i=0;i<nums.length-1;i++){
            diff=nums[i+1]-nums[i];
        max_val=Math.max(max_val,diff);
        }
        return max_val;
    }
}