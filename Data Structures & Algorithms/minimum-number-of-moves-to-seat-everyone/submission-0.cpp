class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {

        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int ans=0;
        int i=0;
        int n=seats.size();
        while(i<n)
        {
            ans+=(abs(seats[i]-students[i]));
            i++;
        }

        return ans;
        
    }
};