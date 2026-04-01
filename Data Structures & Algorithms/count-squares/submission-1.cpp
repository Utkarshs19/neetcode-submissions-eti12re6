class CountSquares {
public:

    map<pair<int,int>,int>m; 

    CountSquares() {
        
    }
    
    void add(vector<int> point) {

        m[{point[0],point[1]}]++;
        
    }
    
    int count(vector<int> point) {
        int res = 0;
        int x = point[0], y = point[1];

        for (auto &it : m) {
            int x1 = it.first.first;
            int y1 = it.first.second;

            if (x1 == x || y1 == y) continue;
            if (abs(x1 - x) != abs(y1 - y)) continue;

            
            pair<int,int> p2 = {x1, y};
            pair<int,int> p3 = {x, y1};

            if (m.count(p2) && m.count(p3)) {
                res += it.second * m[p2] * m[p3];
            }
        }

        return res;
        
    }
};
