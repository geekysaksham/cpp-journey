class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // Method 2 Only From Students Queue
        int stu = students.size();
        queue<int> stud;
        for(int i=0;i<stu;i++){
            stud.push(students[i]);
        }
        int sandIdx = 0;
        int k = 0;
        while(k<stud.size()){
            if(stud.front() != sandwiches[sandIdx]){
                stud.push(stud.front());
                stud.pop();
                k++;
            }
            else{ // stud.front() == sandwiches[sandwiches.size()-1]
                stud.pop();
                sandwiches.pop_back();
                k = 0;
                sandIdx++;
            }
        }
        return stud.size();



        //Method 1 Solved by Both are in Quene (Students And Sandwiches)
        // int stu = students.size();
        // int san = sandwiches.size();
        // queue<int> stud;
        // queue<int> sand;
        // for(int i=0;i<stu;i++){
        //     stud.push(students[i]);
        // }
        // for(int i=0;i<san;i++){
        //     sand.push(sandwiches[i]);
        // }
        // int k = 0;
        // while(k<stud.size()){
        //     if(stud.front() != sand.front()){
        //         stud.push(stud.front());
        //         stud.pop();
        //         k++;
        //     }
        //     else{ // stud.front() == sand.front()
        //         stud.pop();
        //         sand.pop();
        //         k = 0;
        //     }
        // }
        // return stud.size();
    }
};