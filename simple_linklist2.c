#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)

    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void deletend()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
    {
        printf("list is already empty\n");
    }
    else if (ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    head = temp;
}
void deletfirst()
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}

void insertmid(int val, int posi)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    struct node *prev;

    while (ptr->data != posi)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
    return;
}
void deletmid(int posi)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != posi)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
    return;
}

int main()
{
    //  insertend(10);
    //  insertend(20);
    //  insertend(30);
    //  insertend(40);
    insertend(50);
   
   insertfirst(60);
   insertfirst(70);
    // display();
    // deletend(); 
    // deletend();
    // deletfirst(10);
    // deletfirst(20);
    // deletfirst(30);
   
    display();
}