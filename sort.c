/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:01:00 by lucas             #+#    #+#             */
/*   Updated: 2026/11/26 10:40:58 by lucas            ###   ########.fr       */
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
void	sort_three(t_info *info)
{
	t_node	*max;

	max = find_max(info->a);
	if (info->a == max)
		ra(info);
	else if ((info->a)->next == max)
		rra(info);
	if ((info->a)->value > (info->a)->next->value)
		sa(info);
}
void  sort_five(t_info *info)
{
	t_node *min;
	int    index;

	index = 0;
	while(stack_size(info->a) > 3)
	{
		min = find_min(info->a);
		index = find_index(info->a, min);
		if (index <= stack_size(info->a) / 2)
		{
			while (info->a != min)
				ra(info);
		}
		else
		{
			while (info->a != min)
				rra(info);
		}
		pb(info);
	}
	sort_three(info);
	while (info->b)
	{
		pa(info);
	}
}