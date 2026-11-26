/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:47:24 by lurodri2          #+#    #+#             */
/*   Updated: 2026/11/26 11:57:50 by lucas            ###   ########.fr       */
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
sa sb ss pa pb ra rb rr rra rrb rrr
typedef enum e_actions
{
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR
	RRA,
	RRB,
	RRR,	
	COUNTS_ACTIONS
}	t_actions;

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_info
{
	t_node			*a;
	t_node			*b;
	int				counts[COUNTS_ACTIONS];
	int				total;
}	t_info;

/* ************************************************************************** */
/*                          STACK: CREATE / INSERT / REMOVE                   */
/* ************************************************************************** */

t_node	*new_node(int value);
void	push_front(t_node **head, t_node *node);
t_node	*pop_front(t_node **head);
int		append_node(t_node **a, int out);
void	free_stack(t_node **head);
void	init_info(t_info *info);

/* ************************************************************************** */
/*                          STACK: INFORMATION / CHECKS                       */
/* ************************************************************************** */

int		stack_size(t_node *head);
void	print_stack(t_info *info);
int		is_sorted(t_node *a);
int		has_value(t_node *a, int out);
t_node	*find_max(t_node *a);
t_node	*find_min(t_node *a);
int		find_index(t_node *a, t_node *min);
/* ************************************************************************** */
/*                       OPERATIONS (swap / push / rotate)                    */
/* ************************************************************************** */

void	sa(t_info *info);
void	pa(t_info *info);
void	ra(t_info *info);
void	rra(t_info *info);
void	sb(t_info *info);
void	pb(t_info *info);
void	rb(t_info *info);
void	rrb(t_info *info);
int    rotate(t_node **head);
int    reverse_rotate(t_node **head);
int    swap(t_node **head);
int   pp(t_node **dst, t_node **src);
void	ss(t_info *info);
void	rr(t_info *info);
void	rrr(t_info *info);

/* ************************************************************************** */
/*                           PARSING / VALIDATION                             */
/* ************************************************************************** */

int		parse_int(const char *str, int *out);
int		init_stack(t_node **a, char *argv[]);
double	disorder(t_node *a);
/* ************************************************************************** */
/*                                  SORTING                                   */
/* ************************************************************************** */

void	sort_three(t_info *info);
void	sort_five(t_info *info);

#endif