// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(!head1) return head2;
    if(!head2) return head1;
    
    SinglyLinkedList* list = new SinglyLinkedList();
    
    while(head1 && head2){
        if(head1->data<=head2->data){
            list->insert_node(head1->data);
            head1=head1->next;
        }else{
            list->insert_node(head2->data);
            head2=head2->next;
        }
    }
    
    while(head1){
         list->insert_node(head1->data);
            head1=head1->next;
    }
    while(head2){
           list->insert_node(head2->data);
            head2=head2->next;
    }
    
    return list->head;
}
