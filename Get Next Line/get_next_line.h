/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsarigul <yangidenmuzaffer@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 03:19:24 by bsarigul          #+#    #+#             */
/*   Updated: 2023/09/11 05:53:33 by bsarigul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif

int		ft_strlen(char const *s);
char	*ft_strjoin1(char *s1, char *s2);
char	*get_next_line(int fd);
char	*find_line(char *str);
char	*ft_strchr(char *s, int c);
char	*new_str(char *str);

#endif
