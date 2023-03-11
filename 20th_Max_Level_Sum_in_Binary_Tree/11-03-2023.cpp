class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        queue<Node*>q;
        int curr_sum=0;
        int max_sum=INT_MIN;
        
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            Node *curr=q.front();
            q.pop();
            if(curr!=NULL){
                curr_sum+= curr->data;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            else{
                max_sum=max(max_sum, curr_sum);
                curr_sum=0;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
        }
        return max_sum;
    }
};
