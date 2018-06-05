/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_test_process.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <azulbukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:28:59 by azulbukh          #+#    #+#             */
/*   Updated: 2018/05/24 16:33:55 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

#include <sys/time.h>
#include <sys/resource.h>

int     main(int ac, char **av, char **env)
{
    pid_t pid;
    
    pid = getpid();
	printf("process id %d\n", pid);
	printf("Process priority: %d\n", getpriority(PRIO_PROCESS, 0));
	if ((setpriority(PRIO_PROCESS, pid, -20) == -1))
		printf("Set priority error\n");
	int foo = 0;
	while (env[foo])
	{
		printf("env %d: %s\n", foo, env[foo]);
		foo++;
	}
	
}