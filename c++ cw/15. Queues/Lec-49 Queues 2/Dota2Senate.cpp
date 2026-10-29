class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qR;
        queue<int> qD;
        int newIdx = senate.size();
        //Input index of radiant, dire in qR, qD Oueue resp
        for(int i=0;i<senate.size();i++){
            if(senate[i] == 'R') qR.push(i);
            else qD.push(i);
        }
        while(qR.size() > 0 && qD.size() > 0){
            if(qR.front() > qD.front()) qD.push(newIdx++);
            else qR.push(newIdx++);
            qD.pop();
            qR.pop();
        }
        if(qD.size() == 0) return "Radiant";
        return "Dire"; 
    }
};