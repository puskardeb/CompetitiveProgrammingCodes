class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		unordered_map<int, int> umap;
		vector<int> res;
		
		for (int i : nums) {
				if (umap.count(i)) {
					++umap[i];
				} else {
					umap[i] = 1;
				}
		 }
		
		for (auto it = umap.begin(); it != umap.end(); ++it) {
				if (it->second == 1) {
					res.push_back(it->first);
				}
		}
		
		return res;
	}
};
