/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:45:51 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/26 10:41:37 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa e sb
void	sa(t_info *info)
{
	swap(&info->a);
	if (!info->a || !info->a->next)
		return ;
	write(1, "sa\n", 3);
	info->counts[SA]++;
}
//ra rb
void	ra( t_info *info)
{
	rotate(&info->a);
	if (!info->a || !info->a->next)
		return ;
	write(1, "ra\n", 3);
	info->counts[RA]++;
}
//rra e rrb
void	rra(t_info *info)
{
	reverse_rotate(&info->a);
	if (!info->a || !info->a->next)
		return ;
	write(1, "rra\n", 4);
	info->counts[RRA]++;
}

//pa e pb
void	pa(t_info *info)
{

   
	pp(&info->a, &info->b);
	if (!info->b || !info->a)
        return ;
	write(1, "pa\n", 3);
	info->counts[PA]++;
}
int		aux_sign(char c, int *i)
{
	int	sign;

	sign = 1;
	if (c == '-' || c == '+')
	{
		if (c == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}
int	parse_int(const char *str, int *out)
{
	int	sign;
	int	i;
	long	result;
	
	if (!str)
		return (0);
	i = 0;
	result = 0; 
	sign = aux_sign(str[i], &i);
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		if (result > 2147483647 && sign == 1)
			return (0);
		if (result > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	if (str[i] != '\0')
		return (0);
	*out = (int)(result * sign);
	return (1); 
}


