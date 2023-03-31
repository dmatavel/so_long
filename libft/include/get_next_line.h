/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:39:55 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/28 13:44:48 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif //BUFFER_SIZE

# define OPEN_MAX 256
# define _EOF 0
# define STATUS_ERROR -1

# include "libft.h"

char	*get_next_line(int fd);
int		find_newline(char *s);
char	*ft_gnljoin(char *stock, char *buf);
char	*ft_gnl_strcpy(char *dest, char *src);

#endif //GET_NEXT_LINE
