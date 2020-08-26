/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:09:55 by joppe         #+#    #+#                 */
/*   Updated: 2020/08/24 19:25:10 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H
# include "types.h"

bool		ft_is_letter(char c);
bool		ft_is_digit(char c);
bool		ft_is_printable(char c);
bool		ft_is_space(char c);

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, uint64_t n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, unsigned int nb);

int8_t		ft_strcmp(char *s1, char *s2);
int8_t		ft_strncmp(char *s1, char *s2, uint64_t n);

bool		ft_contains_duplicates(char *str);
bool		ft_contains(char c, char *str);

uint64_t	ft_strlen(char *str);

char		*ft_strdup(char *src);
char		*ft_strndup(char *str, uint64_t len);

#endif