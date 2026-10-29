class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> sortAns = deck;
        sort(sortAns.begin(),sortAns.end());
        queue<int> q;
        for(int i=0;i<deck.size();i++) q.push(i);
        int counter = 0;
        int sortAnsI = 0;
        while(q.size() > 0){
            if(counter % 2 == 0) deck[q.front()] = sortAns[sortAnsI++];
            else q.push(q.front());
            counter++;
            q.pop();
        }
        return deck;
    }
};