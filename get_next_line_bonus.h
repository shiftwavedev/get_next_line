/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:30:58 by dekulow           #+#    #+#             */
/*   Updated: 2024/02/14 17:31:01 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

// --- SET MACRO BUFFER_SIZE --- //
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define MAX_FD 4096
// --- REQUIRE INCLUDES --- //
# include <stdlib.h>
# include <unistd.h>

// --- REMOVE OR COMMENT (INCLUDES FOR MAIN FUNC) --- //
//# include <stdio.h>
//# include <fcntl.h>
// --- REMOVE OR COMMENT (INCLUDES FOR MAIN FUNC) --- //

// --- PROTO on get_next_line.c --- //
char	*get_next_line(int fd);

// --- PROTO on get_next_line_utils.c --- //
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
