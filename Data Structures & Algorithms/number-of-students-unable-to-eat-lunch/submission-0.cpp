class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;
        for(auto i:students)q.push(i);

        int i=0;
        int cnt=0;
        while(!q.empty() && i<sandwiches.size())
        {
            if(q.front()==sandwiches[i])
            {
                q.pop();
                i++;
                cnt=0;
            }
            else
            {
                int x=q.front();
                q.pop();
                q.push(x);
                cnt++;
            }
            if(cnt==sandwiches.size()-i)return cnt;
        }

        return q.size();
        
    }
};