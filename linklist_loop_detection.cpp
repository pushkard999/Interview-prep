//find loop in linklist
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* link;
}*head;

void find_loop()
{
    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
    struct node *temp2 = (struct node*)malloc(sizeof(struct node));
    
    temp1 = head;
    temp2 = head;
    temp1 =  temp1->link;
    temp2 = temp2->link->link;
  
    int flag;
    
    for(int i=0; i<5; i++)
    {
         if(temp1 == temp2)
        {
            flag =1;
            break;
        }
        else if(temp2->link == NULL)
        {
            flag=0;
        }
        else
        {
            flag=0;
            temp1 =  temp1->link;
            temp2 = temp2->link->link;
        }
    }
    
    if(flag ==1)
    {
        cout << "loop detected";
    }
    else
    {
        cout << "not detected";
    }

}

int create_linklist()
{
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));
    struct node *five = (struct node*)malloc(sizeof(struct node));

    head = first;
    first->data = 10;
    first->link = second;
    second->data = 20;
    second->link = third;
    third->data = 30;
    third->link = fourth;
    fourth->data = 40;
    fourth->link = five;
    five->data = 50;
    five->link = NULL;
    //five->link = head->link;  //uncomment this to make loop and comment above line

    return 0;  
}

int main()
{
    create_linklist();
    find_loop();
    return 0;
    
}
