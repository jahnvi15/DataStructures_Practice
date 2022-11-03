/* Hackerrank Easy Linked List Questions */
#include <bits/stdc++.h>
using namespace std;
class SinglyLinkedListNode {
    private:
        int data;
        SinglyLinkedListNode* next;
    public:
        void printLinkedList(SinglyLinkedListNode* head) {
            SinglyLinkedListNode *p = head;
            while(p != nullptr){
                cout<<p->data<<endl;
                p = p->next;
            }
        };

        SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
            
            SinglyLinkedListNode * q = head;
            SinglyLinkedListNode *p = new SinglyLinkedListNode;
            p->data = data;
            p->next = nullptr;
            if (head == nullptr ){}
            while(q->next != nullptr){
                q = q->next;
            }
            q->next = p;
            return head;
        };

        SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
            
            SinglyLinkedListNode * temp = llist;
            SinglyLinkedListNode * newlist = new SinglyLinkedListNode(data);
            newlist->next = temp;
            return newlist;
            

        };
        SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
            SinglyLinkedListNode * temp = llist;
            int pos = 0;
            while(pos != position - 1){
                temp = temp->next;
                pos++;
            }
            auto * p = temp->next;
            temp->next = new SinglyLinkedListNode(data);
            temp->next->next = p;
            return llist;
}



 };
 
