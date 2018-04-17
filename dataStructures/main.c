/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:43:06 by azulbukh          #+#    #+#             */
/*   Updated: 2018/04/02 13:46:02 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef	struct	list
{
	int			val;
	struct ist	*next;
}				element;

int		main(int ac, char **av)
{
	element *p;
	p->val = 5;
	p->next = NULL;
	printf("%d\n", p->val);
}
