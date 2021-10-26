#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode{
    public:
        int data;
        SinglyLinkedListNode *next;
};

class SinglyLinkedList{
    public:
        SinglyLinkedListNode *head;
    public:
        SinglyLinkedList(){
            head = NULL;
        }    
        SinglyLinkedListNode* new_node(int value){

            SinglyLinkedListNode *node = new SinglyLinkedListNode();
            node -> data = value;
            node -> next = NULL;
            return node;
        }

        void append(int data) {
            if(head == NULL) {
                head = new_node(data);
                return;
            }
            SinglyLinkedListNode *temp;
            temp = head;
            while(temp ->next != NULL) temp = temp ->next;
            temp->next = new_node(data);
            return;
        }

        void reverse_linked_list(SinglyLinkedListNode *node){
            if(node == NULL) {
                return;
            }
            if(head == node) head = NULL;
            SinglyLinkedListNode *temp = node;
            node = node->next;
            temp->next = head;
            head = temp;
            reverse_linked_list(node);
        }

        SinglyLinkedListNode* reverse_list(SinglyLinkedListNode *node){

            if(node == NULL) return node;
            SinglyLinkedListNode *temp = reverse_list(node ->next);
            return node;
        }

         SinglyLinkedListNode* reverse( SinglyLinkedListNode* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
 
        /* reverse the rest list and put
          the first element at the end */
         SinglyLinkedListNode* rest = reverse(head->next);
        head->next->next = head;
 
        /* tricky step -- see the diagram */
        head->next = NULL;
 
        /* fix the head pointer */
        return rest;
    }

        void print(){
            SinglyLinkedListNode *temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            return;
        }

        ~SinglyLinkedList(){
          
            while(head){
                SinglyLinkedListNode *temp = head;
                head = head->next;
                free(temp);
            }
        }
};

int main()
{

    SinglyLinkedList llist;

    llist.append(1);
    llist.append(2);
    llist.append(3);
    //llist.append(3);
    //llist.append(4);
    //llist.append(5);

    //llist.reverse_linked_list(llist.head);

    llist.head = llist.reverse(llist.head);



    llist.print();

   // cout<<llist.head->data<<endl;
    //cout<<llist.head->next->data<<endl;
    ///cout<<llist.head->next->next->data<<endl;
   // cout<<llist.head->next->next->next->data<<endl;
    
    return 0;
}