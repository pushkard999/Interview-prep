#include <iostream>
using namespace std;
struct linklist{
    int data;
    struct linklist *link;
}*head1;

void create_linklist(int element)
{
    struct linklist *new_node = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist *temp = (struct linklist*)malloc(sizeof(struct linklist));

    new_node->data = element;
    
    if(head1==NULL)
        head1 = new_node;
    else
    {
        temp = head1;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link =  new_node;
    }
}

void display_linklist()
{
    struct linklist *temp = (struct linklist*)malloc(sizeof(struct linklist));
    cout << endl << "list is: " << endl;
    temp = head1;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

void reverse_linklist()
{
    struct linklist *first = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist *middle = (struct linklist*)malloc(sizeof(struct linklist));
    struct linklist *last = (struct linklist*)malloc(sizeof(struct linklist));
    
    first = NULL;
    middle = head1;
    last = NULL;
    while(middle != NULL)
    {
        last = middle->link;
        middle->link = first;
        
        first = middle;
        middle = last;
    }
    head1 = first;
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    int arr_size = sizeof(arr)/sizeof(int);
    
    for(int i=0; i< arr_size; i++)
    {
        create_linklist(arr[i]);
    }
    display_linklist();

    reverse_linklist();
    cout << endl<< "afer reversing: "; 
    display_linklist();

    return 0;
}
