/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:01:00 by lucas             #+#    #+#             */
/*   Updated: 2026/11/20 15:18:04 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
/*                                  SORTING                                   */
/* ************************************************************************** */

/*
** Sorts a stack of exactly 3 nodes with at most 2 operations:
** 1) send the biggest value to the bottom (ra if it is on top,
**    rra if it is in the middle);
** 2) if the two on top are out of order, swap them (sa).
*/
void	sort_three(t_node **a)
{
	t_node	*max;

	max = find_max(*a);
	if (*a == max)
		ra(a);
	else if ((*a)->next == max)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}