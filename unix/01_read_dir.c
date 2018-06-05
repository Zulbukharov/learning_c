/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_read_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <azulbukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:55:16 by azulbukh          #+#    #+#             */
/*   Updated: 2018/05/24 18:07:08 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

void	lookup(char *arg)
{
	DIR				*dirp;
	struct dirent	*dp;

	if ((dirp = opendir("libft")) == NULL)
	{
		perror("couldn't open '.'");
		return ;
	}
	dp = readdir(dirp);
	dp = readdir(dirp);
	while (dp != NULL)
	{
		if ((dp = readdir(dirp)) != NULL)
		{
			(void) printf("%s\n", dp->d_name);
		}
	}
	(void) closedir(dirp);
	return ;
}


int		main(int argc, char *argv[])
{
	int i;
	for (i = 1; i < argc; i++)
		lookup(argv[i]);
	return (0);
}