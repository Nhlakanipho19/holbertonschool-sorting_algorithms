#wap_linked_list - Function to Swap 2 nodes in a doubly-linked list
* @head: Pointer to first node
* @first: Pointer to the first node
* @second: Pointer to the second node
 *
* Return: None
 */
void swap_linked_list(listint_t **head, listint_t **first, listint_t *second)
{
(*first)->next = second->next;
if (second->next != NULL)
second->next->prev = *first;

second->prev = (*first)->prev;
second->next = *first;

if ((*first)->prev != NULL)
(*first)->prev->next = second;
else
*head = second;

(*first)->prev = second;
*first = second->prev;
}
