/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <lurodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:47:24 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/14 13:18:51 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

t_node	*new_node(int value);
void	push_front(t_node **head, t_node *node);
t_node	*pop_front(t_node **head);
int		stack_size(t_node *head);
void	print_stack(t_node *head);
void	swap_top(t_node **head);
void	rotate(t_node **head);
void	reverse_rotate(t_node **head);
void	free_stack(t_node **head);
void	push(t_node **dst, t_node **src);
#endif
