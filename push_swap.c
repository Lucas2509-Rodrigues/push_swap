/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <lurodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:45:51 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/14 15:12:56 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa e sb
void	swap_top(t_node **head)
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
}
//ra rb
void	rotate(t_node **head)
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
}
//rra e rrb
void	reverse_rotate(t_node **head)
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
}
//pa e pb
void	push(t_node **dst, t_node **src)
{
    t_node  *p;
    if (!src || !*src || !dst)
        return ;
    p = pop_front(src);
    push_front(dst, p);
}


int	main(void)
{
	t_node	*src;


	src = NULL;
	push_front(&src, new_node(3));
    push_front(&src, new_node(2));
    push_front(&src, new_node(1));
	rotate(&src);
    print_stack(src);
    free_stack(&src);
	return (0);
}
