class Solution{
public:
    int getNthFromLast(Node *head, int n) {
       Node* start=head,*end=head;
       while(n-- && end)end=end->next;
           
      if(n>=0 && !end)return -1;
       while(end){
           start=start->next;
           end=end->next;
       }
       return start->data;
    }
};
