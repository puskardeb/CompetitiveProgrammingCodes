class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;

        for (int i : nums) {
            ++umap[i];
        }

        for (auto it = umap.begin(); it != umap.end(); ++it) {
            if (it->second < 3) {
                return it->first;
            }
        }

        assert(false);
        return -1;
    }
};
