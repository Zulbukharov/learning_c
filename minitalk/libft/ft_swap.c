/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 19:13:40 by azulbukh          #+#    #+#             */
/*   Updated: 2018/03/30 19:14:48 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(int *s1, int *s2)
{
	int temp;

	temp = 0;
	if (!s1 || !s2)
		return ;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
