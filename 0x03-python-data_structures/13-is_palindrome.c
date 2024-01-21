#include "lists.h"

/**
 * reverse_list - reverses a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the new head of the reversed list
 */
listint_t *reverse_list(listint_t *head)
{
	listint_t *prev = NULL, *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the linked list
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *second_half, *prev_slow = *head;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	// Find the middle of the linked list using slow and fast pointers
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev_slow = slow;
		slow = slow->next;
	}

	// If the length of the linked list is odd, move slow one step ahead
	if (fast != NULL)
		slow = slow->next;

	// Reverse the second half of the linked list
	second_half = reverse_list(slow);

	// Compare the first half and the reversed second half
	while (second_half != NULL)
	{
		if ((*head)->n != second_half->n)
			return (0);

		*head = (*head)->next;
		second_half = second_half->next;
	}

	// Restore the original linked list
	reverse_list(prev_slow->next);
	return (1);
}

