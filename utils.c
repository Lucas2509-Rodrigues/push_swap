/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:53:09 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/18 16:11:33 by lucas            ###   ########.fr       */
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



/*int	ft_atoi(const char *str)
{
	int		i;
	long	resultado;
	int		sign;

	sign = 1;
	i = 0;
	resultado = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		resultado = (resultado * 10) + str[i] - '0';
		i++;
	}
	return ((int)(resultado * sign));
}*/
