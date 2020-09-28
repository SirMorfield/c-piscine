/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_file.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <joppe@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 15:11:57 by joppe         #+#    #+#                 */
/*   Updated: 2020/09/10 23:13:41 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

char	*ft_read_file(char *filename);
char	**ft_split_file(char *filename, char *seperator);

#endif
