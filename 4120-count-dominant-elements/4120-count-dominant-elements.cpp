class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int sum = 0,d=0;

            if(i>0) sum += nums[i-1],d++;
            if(i+1<n) sum += nums[i+1],d++;

            if(d*nums[i] >= sum) cnt++;
        }
        return cnt;
    }
};