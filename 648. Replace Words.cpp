class Solution {
public:
    unordered_set<string>st;
    string add(string &word){
        for(int i=1;i<=word.size();i++){
            string str = word.substr(0,i);
            if(st.find(str)!=st.end()){
                return str;
            }
        }
        return word;
    }
    string replaceWords(vector<string>& dic, string sen) {
        for(int i=0;i<dic.size();i++){
           st.insert(dic[i]);
        }
        vector<string>temp;
        string str;
        int i=0;
        while(i<sen.size()){
            if(sen[i]==' '){
                temp.push_back(str);
                string res;
                str=res;
            }
            else{
                str+=sen[i];
            }
            i++;
        }
        temp.push_back(str);
        string ans;
        for(int i=0;i<temp.size();i++){
            ans+=add(temp[i])+" ";
        }
        ans.pop_back();
        return ans;
    }
};
