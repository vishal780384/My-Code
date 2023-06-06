class Solution{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key){
        Node*ptr=root;
        while(ptr!=NULL){
            if(ptr->key>=key)  ptr=ptr->left;
            else { pre=ptr;  ptr=ptr->right; }
        } 
        ptr=root;
        while(ptr!=NULL){
            if(ptr->key<=key)  ptr=ptr->right;
            else { suc=ptr;  ptr=ptr->left; }
        } 
    }
};
