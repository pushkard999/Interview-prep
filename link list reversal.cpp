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
        head_new->link = head;
        
        struct node *new_node2 = (struct node*)malloc(sizeof(struct node));
        new_node1->link = new_node2;
        new_node2->data = 2;
        
        struct node *new_node3 = (struct node*)malloc(sizeof(struct node));
        new_node2->link = new_node3;
        new_node3->data=3;
        
        struct node *new_node4 = (struct node*)malloc(sizeof(struct node));
        new_node3->link = new_node4;
        new_node4->data=4;
        
        struct node *new_node5 = (struct node*)malloc(sizeof(struct node));
        new_node4->link = new_node5;
        new_node5->data=5;
 
    while(head!= NULL)
    {
        cout << head->data;
        head=head->link;
    }
    
    head = new_node5;
    new_node5->link = new_node3->link;
    new_node4->link = new_node2->link;
    new_node3->link = new_node1->link;
    new_node2->link = head_new->link;
    new_node1->link = NULL;
    
    cout << endl << endl;
     while(head!= NULL)
    {
        cout << head->data;
        head=head->link;
    }
    
}
