class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>v;
        int size=0;
        for(auto i:ops){
            if(i=="+"){
                v.push_back(v[size-1]+v[size-2]);
                size++;
            }
             else if(i=="D"){
                v.push_back(2*v[size-1]);
                size++;
            }
            else if (i=="C"){
                size--;
                v.pop_back();
            }
            else{
                size++;
                // int temp=stoi([i]);
                v.push_back(stoi(i));
            }
        }
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=v[i];
        }
        return sum;
    }
};
