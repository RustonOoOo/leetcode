class Solution {
public:
    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size();i++) {
            map[nums[i]]++;
        }
        priority_queue<p, vector<p>,std::function<bool(p&, p&)>>
                q(map.begin(), map.end(),
                  [](p& p1,p& p2)->bool{return p1.second < p2.second;});
        vector<int> res;
        for(int i = 0; i < k; i++) {
            res.push_back(q.top().first);q.pop();
        }
        return res;
    }
};