/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conoel <conoel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:07:50 by conoel            #+#    #+#             */
/*   Updated: 2018/11/24 17:02:04 by conoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

# define BUFF 1048

#endif

size_t	ft_strcat2(char *s1, char *s2);
char	*get_right_function(const char *str, va_list ap);
int		ft_printf(const char *restrict str, ...);
//int		get_argc(char*str);
