#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty");
    }

    while (ptr->next != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
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
        temp->next = temp;
        temp->prev = temp;
        
        return;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
    }
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
        temp->next = temp;
        temp->prev = temp;
        return;
    }
    else
    {
        while (ptr->next != head)

            ptr = ptr->next;

        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return;
}
void deletfirst()
{
    struct node *ptr = head;
    struct node *prev = head;

    if (head == NULL)
    {
        printf("list is already empty\n");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;

        ptr->next = head->next;
        head ->next->prev = ptr;
        head=prev->next;
        free(prev);
    }
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
    temp->prev = prev;
    temp->next = ptr;
    ptr->prev = temp;
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
    ptr->next->prev = prev;
    free(ptr);
    return;
}

int main()
{
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    display();
    insertmid(70,30);
    insertmid(80,40);
    display();
}