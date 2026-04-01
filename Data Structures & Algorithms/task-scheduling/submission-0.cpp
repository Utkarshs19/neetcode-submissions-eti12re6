class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        priority_queue<pair<int,char>> pq;
        priority_queue<pair<int,char>,
            vector<pair<int,char>>,
            greater<pair<int,char>>> p;

        map<char,int> m;

        for (char c : tasks) m[c]++;

        for (auto i : m) {
            pq.push({i.second, i.first});
        }

        int time = 0;

        while (!pq.empty() || !p.empty()) {

            while (!p.empty() && p.top().first <= time) {
                char c = p.top().second;
                pq.push({m[c], c});
                p.pop();
            }

            if (!pq.empty()) {
                auto [cnt, ch] = pq.top();
                pq.pop();

                m[ch]--;

                if (m[ch] > 0) {
                    p.push({time + n + 1, ch});
                }
            }

            time++;
        }

        return time;
    }
};
