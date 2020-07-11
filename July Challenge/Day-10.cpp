class Solution {
public:
   Node* flatten(Node* head) {
    Node *ptr = head;
    while (ptr)
    {
        if (ptr->child != nullptr)
        {
            auto temp = ptr->next;
            auto temp2 = ptr;
            ptr->next = flatten(ptr->child);
            if(ptr->next)
			{
				ptr->next->prev = temp2;
			}
            ptr->child = nullptr;
            while (ptr && ptr->next)ptr = ptr->next;
            ptr->next = temp;
            if(temp)
			{
				temp->prev = ptr;
			}
            
        }
        ptr = ptr->next;
    }
    return head;
}
};
