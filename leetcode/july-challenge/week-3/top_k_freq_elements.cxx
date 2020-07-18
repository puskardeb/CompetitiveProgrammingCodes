struct cmp {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.first < p2.first;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        const int n = nums.size();
        unordered_map<int, pair<int, int>> umap;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        vector<int> res;
        
        for (int i = 0; i < n; ++i) {
            pair<int, int> p;
            if (umap.find(nums[i]) == umap.end()) {
                p.first = 1;
                p.second = nums[i];
            } else {
                p = umap[nums[i]];
                ++p.first;
            }
            umap[nums[i]] = p;
        }
        
        for (auto it = umap.begin(); it != umap.end(); ++it) {
            pq.push(it->second);
        }
        
        for (int i = 0; i < k; ++i) {
            pair<int, int> p = pq.top();
            pq.pop();
            res.push_back(p.second);
        }
        return res;
    }
};
