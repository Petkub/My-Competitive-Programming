#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    Node *next;
}Node;

Node* createNode(int data)
{
    Node* newNode = (Node*)(malloc)(sizeof(Node));
    if(!newNode)
    {
        printf("Fail\n");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push_front(Node **head, int data)
{
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void push_back(Node **head, int data)
{
    Node *newNode = createNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    Node *temp=*head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
}

void clear(Node **head)
{
    Node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(head);
    }
}

int main()
{
    Node* head=NULL;
    push_front(&head, 10);
    push_front(&head, 20);
    clear(&head);
    return 0;
}