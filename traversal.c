#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void traversal(Node *head)
{
    if(head=NULL)
        printf("List is empty");
    else
    {
        Node *ptr=head;
        while(ptr)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main()
{
    Node *head=NULL;
    traversal(head);
}