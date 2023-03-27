#include "monty.h"
<<<<<<< HEAD

/**
* f_rotr - function that rotates the stack to the bottom
* @head: stack head of the stack
* @counter: line count
*
* Return: nothing
*/
=======
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
>>>>>>> 491352f392b06cc47b1e16b790c250bc5584a6f9
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
