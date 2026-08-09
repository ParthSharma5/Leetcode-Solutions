class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost_matches; // key  : players number, value : count of losses 
        for(int i=0;i<matches.size();i++){
            int loser = matches[i][1];
            lost_matches[loser]++;
        }
        vector<int> notLost;
        vector<int> lostOnce;

        for(int i=0;i<matches.size();i++){
            int winner = matches[i][0];
            int loser = matches[i][1];

            if(lost_matches.find(winner)== lost_matches.end()){
                notLost.push_back(winner);
                // not lost meh dubara duplicate bachneh keliye
                lost_matches[winner] = 2;

            }
            if(lost_matches[loser] == 1){
                lostOnce.push_back(loser);
            }
        }
        sort(lostOnce.begin(),lostOnce.end());
        sort(notLost.begin(),notLost.end());
        return {notLost,lostOnce};
    }
};