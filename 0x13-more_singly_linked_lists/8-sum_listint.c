#include "lists.h"

int sum_listint(listint_t *head)
{
        size_t sum = 0;
        while (head)
        {
                sum = sum + head->n;
                head = head->next;
        }
        return (sum);
}