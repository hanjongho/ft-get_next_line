/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanjongho <hanjongho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 02:51:03 by hanjongho         #+#    #+#             */
/*   Updated: 2021/01/21 00:17:48 by hanjongho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dest, char *src, size_t size);
size_t		ft_strlcat(char *dest, char *src, size_t size);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(const char *s);

#endif
