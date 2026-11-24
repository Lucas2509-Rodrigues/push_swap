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
void	sb(t_node **head)
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
	write(1, "sb\n", 3);
}
//ra rb
void	rb(t_node **head)
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
	write(1, "rb\n", 3);
}
//rra e rrb
void	rrb(t_node **head)
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
	write(1, "rrb\n", 4);
}
//pa e pb
void	pb(t_node **dst, t_node **src)
{
    t_node  *p;
    if (!src || !*src || !dst)
        return ;
    p = pop_front(src);
    push_front(dst, p);
    write(1, "pb\n", 3);
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