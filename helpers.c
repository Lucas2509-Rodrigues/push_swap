/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 14:48:26 by lucas             #+#    #+#             */
/*   Updated: 2026/11/24 14:48:29 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	swap(t_node **head)
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