#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    Node* next;
}Node;

Node* newNode(int data)
{
    Node* node = (Node*)(malloc)(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void push(Node **top, int data)
{
    Node* node = newNode(data);
    node->next = top;
    top = node;
}

void pop(Node **top)
{
    if(*top == NULL)
    {
        printf("Stack Underflow\n");
        exit(0);
    }
    Node* temp= *top;
    *top = temp->next;
    free(temp);
}

int top(Node *top)
{
    if(top == NULL)
    {
        printf("Stack Underflow\n");
        exit(0);
    }
    return top->data;
}

int main()
{
    Node* top = NULL;
    return 0;
}