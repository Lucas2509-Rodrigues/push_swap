/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:47:24 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/19 15:51:39 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ************************************************************************** */
/*                                  INCLUDES                                  */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

/* ************************************************************************** */
/*                                DATA STRUCTURE                              */
/* ************************************************************************** */

/*
** One node of a stack: a value and a pointer to the node below it.
** The stack is represented by a pointer to its first (top) node.
*/
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

/* ************************************************************************** */
/*                          STACK: CREATE / INSERT / REMOVE                   */
/* ************************************************************************** */

t_node	*new_node(int value);
void	push_front(t_node **head, t_node *node);
t_node	*pop_front(t_node **head);
int		append_node(t_node **a, int out);
void	free_stack(t_node **head);

/* ************************************************************************** */
/*                          STACK: INFORMATION / CHECKS                       */
/* ************************************************************************** */

int		stack_size(t_node *head);
void	print_stack(t_node *head);
int		is_sorted(t_node *a);
int		has_value(t_node *a, int out);
t_node	*find_max(t_node *a);

/* ************************************************************************** */
/*                       OPERATIONS (swap / push / rotate)                    */
/* ************************************************************************** */

void	sa(t_node **head);
void	pa(t_node **dst, t_node **src);
void	ra(t_node **head);
void	rra(t_node **head);

/* ************************************************************************** */
/*                           PARSING / VALIDATION                             */
/* ************************************************************************** */

int		parse_int(const char *str, int *out);
int		init_stack(t_node **a, char *argv[]);

/* ************************************************************************** */
/*                                  SORTING                                   */
/* ************************************************************************** */

void	sort_three(t_node **a);

#endif