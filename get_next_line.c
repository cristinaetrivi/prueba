/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctrivino <ctrivino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:16:00 by ctrivino          #+#    #+#             */
/*   Updated: 2022/11/15 18:34:21 by ctrivino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_buff(static char value, int fd)
{
	read(fd, buf, BUFFER_SIZE);
	
} 

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	ssize_t		nr_bytes;
	static char	value;

	nr_bytes = read(fd, buf, BUFFER_SIZE);
	if (BUFFER_SIZE <= 0 || fd)
		return (NULL);
}