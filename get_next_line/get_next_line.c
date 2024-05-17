/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirodri2 <mirodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:28:24 by mirodri2          #+#    #+#             */
/*   Updated: 2024/05/17 17:00:16 by mirodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char    *get_next_line(int fd)
{
    char *buff;
    ssize_t bytesRead;
    int i;
    
    i = 0;
    bytesRead = read(fd, buff, BUFFER_SIZE - 1);
    if (fd != -1)
    {
        while (bytesRead > 0)
        {
            if (*buff == '\n' || *buff == 0)
            {
                
            }
            buff++;
            bytesRead = read(fd, buff, BUFFER_SIZE -1);
        }
    }
    else
    {
        printf("Error abriendo archivo");
        return (0);
    }
    return(buff);
}

int main(int argc, char *argv[])
{
    int fd = open("texto", O_RDONLY);

    return 0;
}