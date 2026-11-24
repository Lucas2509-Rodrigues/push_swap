/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:45:51 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/20 15:35:19 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);

    write(1, "ss\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);

    write(1, "rr\n", 3);
}

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);

    write(1, "rrr\n", 4);
}