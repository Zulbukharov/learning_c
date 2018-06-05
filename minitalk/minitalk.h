/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:04:21 by azulbukh          #+#    #+#             */
/*   Updated: 2018/05/20 17:04:26 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# define BUF 1024

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_buf
{
	char		r[BUF + 1];
	int			size;
}				t_buf;

int				ft_power(int i);
char			*ft_realloc(char *s, int size);

#endif /* !MINITALK_H */
