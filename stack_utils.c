/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:01:00 by lucas             #+#    #+#             */
/*   Updated: 2026/11/20 15:05:29 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
/*                         STACK: INSERT / FREE / INFO                        */
/* ************************************************************************** */

/*
** Adds a new node with value `out` at the END of the stack.
** Returns 1 on success, 0 if malloc fails.
*/
int	append_node(t_node **a, int out)
{
	t_node	*p;

	p = *a;
	if (*a == NULL)
	{
		*a = new_node(out);
		if (!*a)
			return (0);
	}
	else
	{
		while (p->next)
			p = p->next;
		p->next = new_node(out);
		if (!p->next)
			return (0);
	}
	return (1);
}

/*
** Frees every node of the stack and leaves *head set to NULL.
*/
void	free_stack(t_node **head)
{
	t_node	*p;

	if (!head || !*head)
		return ;
	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}

/*
** Returns how many nodes the stack has (0 if it is empty).
*/
int	stack_size(t_node *head)
{
	int	count;

	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}

/*
** DEBUG ONLY: prints the stack from top to bottom.
** printf is not allowed in the final project: remove before submitting.
*/
void	print_stack(t_node *head)
{
	while (head)
	{
		printf("[%d]->", head->value);
		head = head->next;
	}
	printf("NULL\n");
}