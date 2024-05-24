class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
        vector<int> result;
    deque<int> window;

    for (int i = 0; i < nums.size(); ++i) {
        // Remove indices of elements that are out of the current window
        while (!window.empty() && window.front() <= i - k) {
            window.pop_front();
        }
        
        // Remove indices of elements smaller than the current element from the back of the deque
        while (!window.empty() && nums[i] >= nums[window.back()]) {
            window.pop_back();
        }
        
        // Add current index to the deque
        window.push_back(i);
        
        // Add maximum element in the current window to the result
        if (i >= k - 1) {
            result.push_back(nums[window.front()]);
        }
    }
    
    return result;
        
    }
};