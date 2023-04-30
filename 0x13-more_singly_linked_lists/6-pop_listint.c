#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
        listint_t *temp;
        int num;

        if (!head || !*head)
                return (0);

        temp = (*head)->next;
        num = (*head)->n;
        free(*head);
        *head = temp;

        return (num);
}

