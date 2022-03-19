

#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *link;
}*head;

struct node* create_LL()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    for(int i=0; i<5; i++)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        cin >> new_node->data;
        new_node->link = NULL;
        
        if(head==NULL)
        {
            head = new_node;
        }
        else
        {
            temp = head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new_node;
        }
    }
    return head;
}

void display(struct node *head)
{
    cout << endl;
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
}

struct node* merge_sorted_list(struct node *head1, struct node *head2)
{
    struct node *head3;
    struct node *head_final;

    if(head1->data > head2->data)
    {
        head3 = head2;
        head2 = head2->link;
    }
    else
    {
        head3 = head1;
        head1 = head1->link;
    }
    head_final = head3;
    
    while(head1!= NULL  && head2!= NULL )
    {
        if(head1->data <= head2->data)
        {
            head3->link = head1;
            head1 = head1->link;
        }
        else
        {
            head3->link = head2;
            head2 = head2->link;
        }
        head3 = head3->link;
    }
    
    if(head1)
    {
        head3->link = head1;
    }
    else if(head2)
    {
        head3->link = head2;
    }
    
    return head_final;
}

int main()
{
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *head3 = (struct node *)malloc(sizeof(struct node));

    head1 = create_LL();

    head2 = create_LL();

    head3 = merge_sorted_list(head1, head2);
    display(head3);

    return 0;
}
