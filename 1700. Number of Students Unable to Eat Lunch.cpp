class Solution {
public:
    bool check(int ele,queue<int>q){
        while(q.size()>0){
            if(q.front()==ele){
                return true;
            }
            q.pop();
        }
        return false;
    }
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // int 
        queue<int>q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int i=0;
        while(q.size()>0){
            int temp=q.front();
            q.pop();
            if(temp == sandwiches[i]){
                i++;
            }
            else{
                q.push(temp);
                if(check(sandwiches[i],q)==false){
                    break;
                }
            }
        }
        return q.size();
    }
};
