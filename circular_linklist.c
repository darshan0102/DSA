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
        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)

        ptr = ptr->next;

    ptr->next = temp;
    temp->next = head;
    return;
}
void deletend()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
    {
        printf("\nlist is already empty");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = head;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void deletfirst()
{
    struct node *ptr = head;
    struct node *temp = head;

    if (head == NULL)
    {
        printf("list is already empty\n");
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp->next;
    head = temp->next;
    free(temp);
    return;
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
    insertend(10);
  
    insertend(20);
    display();
    insertfirst(30);
    insertfirst(40);
    display();
      
}