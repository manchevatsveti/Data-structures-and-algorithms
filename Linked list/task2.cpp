/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* l=llist;
    SinglyLinkedListNode* next;
    while(llist && llist->next){
        next =llist->next;
        if(llist->data==next->data){
            llist->next=next->next;
            delete next;
        }else llist=next;
    }
    return l;
}
