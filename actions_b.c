/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:45:51 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/26 10:42:20 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa e sb
void	sb(t_info *info)
{
	swap(&info->b);
	if (!info->b || !info->b->next)
		return ;
	write(1, "sb\n", 3);
	info->counts[SB]++;
}
//ra rb
void	rb(t_info *info)
{
	rotate(&info->b);
	if (!info->b || !info->b->next)
		return ;
	write(1, "rb\n", 3);
	info->counts[RB]++;
}	

//rra e rrb
void	rrb(t_info *info)
{
	reverse_rotate(&info->b);
	if (!info->b || !info->b->next)
		return ;
	write(1, "rrb\n", 4);
	info->counts[RRB]++;
}
//pa e pb
void	pb(t_info *info)
{

   
	pp(&info->b, &info->a);
	 if (!info->b || !info->a)
        return ;
	write(1, "pb\n", 3);
	info->counts[PB]++;
}
