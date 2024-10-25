/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 04:51:31 by jgomez-d          #+#    #+#             */
/*   Updated: 2024/10/25 05:03:11 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	get_line(int fd, char **txt)
{ 
	read(fd, *txt, BUFFER_SIZE);	
}

char	*get_next_line(int fd)
{
	static char	*text;
	
}
