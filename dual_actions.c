/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dual_actions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:45:51 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/26 11:56:58 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_info *info)
{
	swap(&(info->a));
	swap(&(info->b));

    write(1, "ss\n", 3);
	info->counts[SS]++;
	
}

void	rr(t_info *info)
{
	rotate(&(info->a));
	rotate(&(info->b));

    write(1, "rr\n", 3);
	info->counts[RR]++;
}

void	rrr(t_info *info)
{
	reverse_rotate(&(info->a));
	reverse_rotate(&(info->b));

    write(1, "rrr\n", 4);
	info->counts[RRR]++;
}