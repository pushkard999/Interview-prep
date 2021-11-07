#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
}ll;

int main()
{
    // create LL
    struct node *head= (struct node*)malloc(sizeof(struct node));
    struct node *head_new = (struct node*)malloc(sizeof(struct node));
    struct node *new_node1 = (struct node*)malloc(sizeof(struct node));
    
        new_node1->data=1;
        new_node1->link= NULL;
        head = new_node1;
        head_new = head;
        
        struct node *new_node2 = (struct node*)malloc(sizeof(struct node));
        new_node1->link = new_node2;
        new_node2->data = 2;
        
        struct node *new_node3 = (struct node*)malloc(sizeof(struct node));
        new_node2->link = new_node3;
        new_node3->data=2;
        
        struct node *new_node4 = (struct node*)malloc(sizeof(struct node));
        new_node3->link = new_node4;
        new_node4->data=4;
        
        struct node *new_node5 = (struct node*)malloc(sizeof(struct node));
        new_node4->link = new_node5;
        new_node5->data=5;
 
    int num=0;
    
    cout << "original list: ";
    while(head!= NULL)
    {
        num++;
        cout << head->data;
        head = head->link;
        
    }
    
    cout << endl;
    
    
   struct node* current = head_new;  //current node
     struct node* pointer1, *duplicate;

     while(current->link != NULL){//traversing the list pointed by current 
          pointer1 = current;// the current node is copied into pointer1
          while(pointer1->link != NULL){// traversing the list pointed by pointer1
                if(pointer1->link->data == current->data){ //Checking for duplicates by comparing the current data and pointer1 data of next node
                   duplicate = pointer1->link;// copy the address of pointer1 node (which contains duplicate data) into duplicate
                   pointer1->link = pointer1->link->link;//placing the new address i.e. the next node address into pointer to which it will be pointing next
                   free(duplicate);//free the duplicate node (which contains duplicate data)
                   }
                   pointer1 = pointer1->link;//move to the next node
                }
           current = current->link;//current pointing to next node
          
          }
     
    
    head = head_new;
    cout << "list after removing duplicates: ";
    while(head != NULL)
    {
        cout << head->data;
        head = head->link;
    }
    return 0;
}
