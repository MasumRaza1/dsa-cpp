void insertAtMiddle(Node* &head, Node* &pre, Node* &tail, int position, int data)
{    
    // head
    if(position == 1)
    {
        insertAtHead(head, pre, data);
        return;
    }
    
    // middle
    Node* temp = head;
    Node* nodetoInsert = new Node(data);
    
    int count = 1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }
    
    nodetoInsert->next = temp->next;
    temp->next->pre = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->pre = temp;
    
    // tail
    if(temp == tail)
    {
        tail = nodetoInsert;
    }
}
