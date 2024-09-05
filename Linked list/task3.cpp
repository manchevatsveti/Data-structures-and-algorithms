/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* l=llist;
    
    if(position==0){
        SinglyLinkedListNode* newHead =   new SinglyLinkedListNode(data);
        newHead->next = llist;
        l=newHead;
    }else{
        int count=0;
        while(llist){
            if(count==position-1){
                SinglyLinkedListNode* oldNext =llist->next;
                llist->next= new SinglyLinkedListNode(data);
                llist=llist->next;
                llist->next=oldNext;
                break;
            }else{
            llist=llist->next;
            count++;
            }
        }
    }
    return l;
}
