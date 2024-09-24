/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:08:46 by milsanch          #+#    #+#             */
/*   Updated: 2024/07/20 23:40:56 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#define O_RDONLY 0

char	*read_dict(char *filename);

int	main(void)
{
	char	*filename = "/numbers.dict";
	char	*file_content = read_dict(filename);

	if (file_content != NULL) 
	{
		write(STDOUT_FILENO, file_content, strlen(file_content));
		free(file_content);
	}
	else 
	{
		write(STDERR_FILENO, "Error", 5);
	}
	return 0;
}
char *read_dict(char *filename)
{
	int f;
	char *buffer;
	ssize_t bytes_read;
	off_t file_size;

	f = open(filename, O_RDONLY);
	if (f < 0)
	{
	return NULL;
	}
	file_size = lseek(f, 0, SEEK_END);
	if(file_size < 0)
	{
		close(f);
		return NULL;
	}
	lseek(f, 0, SEEK_SET);
	buffer = (char *)malloc(file_size + 1);
	if (buffer == NULL)
	{
		close(f);
		return NULL;
	}

	bytes_read = read(f, buffer, file_size);
	if (bytes_read < 0)
	{
		free(buffer);
		close(f);
		return NULL;
	}

	buffer[bytes_read] = '\0';
	close(f);
	return buffer;
}



