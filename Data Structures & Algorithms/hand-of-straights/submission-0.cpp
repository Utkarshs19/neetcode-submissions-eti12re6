class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        map<int,int> m;

        sort(hand.begin(),hand.end());

        for(int i=0;i<hand.size();i++)
        {
            m[hand[i]]++;
        }

        while(m.size()>0)
        {
            int x=-1;
            int group=0;
            for(int i=0;i<hand.size();i++)
            {
               if(m[hand[i]]>0 && x==-1)
               {
                x=hand[i];
                m[hand[i]]--;
                if(m[hand[i]]==0)m.erase(hand[i]);
                group++;
               }
               else if(m[hand[i]]>0 && x!=-1)
               {
                    if(x+1!=hand[i])continue;
                    else
                    {
                        group++;
                        x=hand[i];
                        m[hand[i]]--;
                        if(m[hand[i]]==0)m.erase(hand[i]);
                    }
               }
               if(group==groupSize){break;}
            }
            if(group!=groupSize && x!=-1){return false;}
            if(group!=groupSize && x==-1){return true;}
        }
        return true;
    }
};
