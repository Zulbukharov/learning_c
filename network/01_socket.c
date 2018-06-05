/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_socket.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 04:05:52 by azulbukh          #+#    #+#             */
/*   Updated: 2018/06/05 06:40:08 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
struct addrinfo {
	int ai_flags; // AI_PASSIVE, AI_CANONNAME, т.д.
	int ai_family; // AF_INET, AF_INET6, AF_UNSPEC
	int ai_socktype; // SOCK_STREAM, SOCK_DGRAM
	int ai_protocol; // используйте 0 для"any"
	size_t ai_addrlen; // размер ai_addr в байтах
	struct sockaddr *ai_addr; // struct sockaddr_in или _in6
	char *ai_canonname; // полное каноническое имя хоста
	struct addrinfo *ai_next; // связанный список, следующий
};

/etc/services TCP/UDP ports:
	80 HTTP
	666 DOOM
*/


#include <sys/types.h>
#include <netdb.h>
#include <sys/socket.h>
#include <stdio.h>

int		main(void)
{
	//socket();
	int info;
	
	info = getaddrinfo("www.google.com". );
	return (0);
}
