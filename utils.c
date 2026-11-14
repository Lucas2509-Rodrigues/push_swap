/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <lurodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:53:09 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/14 12:33:23 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*ptr;

	ptr = malloc(sizeof(t_node));
	if (!ptr)
		return (NULL);
	ptr->value = value;
	ptr->next = NULL;
	return (ptr);
}

void	push_front(t_node **head, t_node *node)
{
	if (!head || !node)
		return ;
	node->next = *head;
	*head = node;
}

t_node	*pop_front(t_node **head)
{
	t_node	*p;

	if (!head || !*head)
		return (NULL);
	p = *head;
	*head = p->next;
	p->next = NULL;
	return (p);
}

int	stack_size(t_node *head)
{
	int	count;

	if (!head)
		return (0);
	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

void	print_stack(t_node *head)
{
	while (head)
	{
		printf("[%d]->", head->value);
		head = head->next;
	}
	printf("NULL\n");
}
void	free_stack(t_node **head)
{
    t_node  *p;
    if (!head || !*head)
        return ;
    while(*head)
    {
        p = (*head)->next;
        free(*head);
        *head = p;
    }
    *head = NULL;
}
