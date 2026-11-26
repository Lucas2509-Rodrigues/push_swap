/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:01:00 by lucas             #+#    #+#             */
/*   Updated: 2026/11/24 15:46:31 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
/*                              STACK: CHECKS                                 */
/* ************************************************************************** */

/*
** Returns 1 if the stack is sorted (smallest on top), 0 otherwise.
** An empty stack or a stack with one node counts as sorted.
*/
int	is_sorted(t_node *a)
{
	if (!a)
		return (1);
	while (a->next != NULL)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

/*
** Returns 1 if a node with value `out` already exists, 0 otherwise.
** Used to reject duplicate arguments.
*/
int	has_value(t_node *a, int out)
{
	while (a)
	{
		if (a->value == out)
			return (1);
		a = a->next;
	}
	return (0);
}

/*
** Returns the node that holds the biggest value (NULL if the stack is empty).
*/
t_node	*find_max(t_node *a)
{
	t_node	*max;

	max = a;
	while (a)
	{
		if (max->value < a->value)
			max = a;
		a = a->next;
	}
	return (max);
}
t_node	*find_min(t_node *a)
{
	t_node	*min;

	min = a;
	while (a)
	{
		if (min->value > a->value)
			min = a;
		a = a->next;
	}
	return (min);
}
int	find_index(t_node *a, t_node *min)
{
	int	  index;

	index = 0;
	while (a)
	{
		if (a == min)
			return (index);	
		index++;
		a = a->next;
	}
	return (index);
}