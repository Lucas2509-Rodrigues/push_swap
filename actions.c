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

#include "push_swap.h"

//sa e sb
void	sa(t_node **head)
{
	t_node	*aux;
	t_node	*aux_2;

	if (!head || !*head || !(*head)->next)
		return ;
	aux = (*head)->next;
	aux_2 = aux->next;
	aux->next = *head;
	(*head)->next = aux_2;
	*head = aux;
	write(1, "sa\n", 3);
}
//ra rb
void	ra(t_node **head)
{
	t_node	*aux;
	t_node	*aux_2;

	if (!head || !*head || !(*head)->next)
		return ;
	aux = *head;
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = *head;
	aux_2 = (*head)->next;
	(*head)->next = NULL;
	*head = aux_2;
	write(1, "ra\n", 3);
}
//rra e rrb
void	rra(t_node **head)
{
	t_node	*aux;
	t_node	*aux_2;

	if (!head || !*head || !(*head)->next)
		return ;
	aux = *head;
	while (aux->next->next != NULL)
		aux = aux->next;
	aux_2 = aux->next;
	aux_2->next = *head;
	*head = aux_2;
	aux->next = NULL;
	write(1, "rra\n", 4);
}
//pa e pb
void	pa(t_node **dst, t_node **src)
{
    t_node  *p;
    if (!src || !*src || !dst)
        return ;
    p = pop_front(src);
    push_front(dst, p);
	write(1, "pa\n", 3);
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


