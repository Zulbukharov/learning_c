/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 23:00:24 by azulbukh          #+#    #+#             */
/*   Updated: 2018/05/14 23:36:52 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	count_first(int *foo, char *s)
{
	while (*s && (*s == ' ' || *s == '\t'))
	{
		s++;
		(*foo)++;
	}
}

void	print_rost(int foo, char *s)
{
	int i;

	i = foo;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
		i++;
	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
		i++;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t')
		{
			ft_putchar(s[i]);
			if (s[i + 1] && (s[i + 1] == ' ' || s[i + 1] == '\t'))
				ft_putchar(' ');
			i++;
			
		}
		else if (s[i] == ' ' || s[i] == '\t')
			i++;
	}
	while (s[foo] && s[foo] != ' ' && s[foo] != '\t')
	{
		ft_putchar(s[foo]);
		foo++;
	}
}

int		main(int ac, char **av)
{
	int foo;

	foo = 0;
	if (ac != 2)
	{
		ft_putchar((char)10);
		return (0);
	}
	count_first(&foo, av[1]);
	print_rost(foo, av[1]);
	ft_putchar((char)10);
	return (0);
}
