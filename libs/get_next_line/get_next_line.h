/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:17:52 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/07 22:17:55 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);

int		ft_strlen(char *str);
void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif
