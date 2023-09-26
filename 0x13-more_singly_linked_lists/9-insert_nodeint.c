#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: the index position
 * @n: number for node
 * 
 * Return: returns address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        int i;
        listint_t *temp;
        temp = *head;
        listint_t *newNode;
        newNode = malloc(sizeof(listint_t));
        if (newNode == NULL)
        {
                return (NULL);
        }
        newNode->n = n;
        for (i = 0; i < idx; i++)
        {
                temp = temp->next;     
        }
        newNode->next = temp->next;
        temp->next = newNode;
        return (newNode);
}