/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_string.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 17:09:55 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/09 17:21:31 by joppe         ########   odam.nl         */
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
char		**insert_str(char **arr, uint64_t size, char *str, uint64_t i);
uint64_t	ft_bin_search_match(char **arr, uint64_t size, char *str);
int64_t		ft_bin_search(char **arr, uint64_t size, char *str);

uint64_t	ft_strlen(char *str);

char		*ft_strdup(char *src);
char		*ft_strndup(char *str, uint64_t len);

void		ft_strnrev(char *str, uint64_t len);
void		ft_strrev(char *str);

char		**ft_split(char *str, char *charset);

#endif