#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
        size_t s = 0;
        while (h)
        {
                
                printf("%i", h->n);
                h = h->next;
                s++;
        }
        return (s);
}
        