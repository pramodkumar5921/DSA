/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        // base case
        if(root==NULL){
            return 0;
        }
        // recursive case
        int max=0;
        for(auto x:root->children){
            int temp = maxDepth(x);
            if(temp>max){
                max=temp;
            }
        }
        return max+1;
    }
};
