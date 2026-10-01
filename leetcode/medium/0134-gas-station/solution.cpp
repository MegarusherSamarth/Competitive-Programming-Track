class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0, currgas=0, start=0;
        for (int i=0; i<gas.size(); i++){
            currgas+=gas[i]-cost[i];
            totalgas+=gas[i]-cost[i];
            if (currgas<0){
                start=i+1;
                currgas=0;
            }
        }
        if(totalgas>=0)
        return start;
        return -1;
    }
};