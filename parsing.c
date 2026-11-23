/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:01:00 by lucas             #+#    #+#             */
/*   Updated: 2026/11/20 15:16:36 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
/*                           PARSING / VALIDATION                             */
/* ************************************************************************** */

/*
** Reads each argument (argv[0] is the program name, so it starts at 1),
** validates it, rejects duplicates and appends it to stack `a`.
** Returns 1 on success. On any error it frees the stack and returns 0.
*/
int	init_stack(t_node **a, char *argv[])
{
	int	i;
	int	out;

	i = 1;
	while (argv[i])
	{
		if (!parse_int(argv[i], &out) || has_value(*a, out)
			|| !append_node(a, out))
		{
			free_stack(a);
			return (0);
		}
		i++;
	}
	return (1);
}