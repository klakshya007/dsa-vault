class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int left=0;
        int right=0;
        vector<int>vec;
        while(left<nums1.size() && right<nums2.size()){
            if(nums1[left]<nums2[right]){
                if(vec.empty() || vec.back()!=nums1[left])
                vec.push_back(nums1[left]);
            left++;
            }
            else if (nums1[left]>nums2[right]){
                if(vec.empty() || vec.back()!=nums2[right])
                vec.push_back(nums2[right]);
            right++;
            }
            else {
                if(vec.empty() || vec.back()!=nums1[left])
                vec.push_back(nums1[left]);
            left++;
            right++;
            }
        }
        while(left<nums1.size()){
            if(vec.empty() || vec.back()!=nums1[left])
            vec.push_back(nums1[left]);
            left++;
        }
        while(right<nums2.size()){
            if(vec.empty() || vec.back()!=nums2[right])
            vec.push_back(nums2[right]);
            right++;
        }
        return vec;
    }
};