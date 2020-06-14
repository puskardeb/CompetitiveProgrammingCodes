class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> m_map(3);
        
        for (int i : nums) {
            ++m_map[i];
        }
        int k = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < m_map[i]; ++j)
                nums[k++] = i;
        }
    }
};
