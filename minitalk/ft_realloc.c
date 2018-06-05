/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:04:36 by azulbukh          #+#    #+#             */
/*   Updated: 2018/05/20 17:04:37 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char			*ft_realloc(char *s, int size)
{
	char		*tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + size));
	ft_strcpy(tmp, s);
	if (s != NULL)
		free(s);
	return (tmp);
}
