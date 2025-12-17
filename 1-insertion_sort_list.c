#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion Sort algorithm.
 * @list: A double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *key, *temp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        key = current;
        temp = current->prev;

        while (temp != NULL && key->n < temp->n)
        {
            /* Swap nodes */
            if (temp->prev != NULL)
                temp->prev->next = key;
            key->prev = temp->prev;

            temp->next = key->next;
            if (key->next != NULL)
                key->next->prev = temp;

            key->next = temp;
            temp->prev = key;

            /* Update head if necessary */
            if (key->prev == NULL)
                *list = key;

            print_list(*list);
            temp = key->prev;
        }
        current = current->next;
    }
}
