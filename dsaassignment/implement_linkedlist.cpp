/*
Write a program to implement a
linked list
*/
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void print_data(struct node *head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty";
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->link;
    }
}
int main()
{
    struct node *head= (struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=98;
    current->link =NULL;
    head->link=current;

    current= (struct node*)malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    print_data(head);


    return 0;
}
