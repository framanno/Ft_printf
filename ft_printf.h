/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanno <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:34:04 by fmanno            #+#    #+#             */
/*   Updated: 2025/02/06 17:27:34 by fmanno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_printf(const char *s, ...);
void		ft_specifiers(const char c, int *count, va_list args);
void		ft_print_char(const char c, int *count);
void		ft_print_str(const char *s, int *count);
size_t		ft_strlen(const char *str);
void		ft_print_nbr_base(unsigned long nbr, char *base, int *count);
void		ft_print_int(int nbr, int *count);
void		ft_print_uns_int(unsigned int nbr, int *count);
void		ft_print_low_hex(unsigned int nbr_hex, int *count);
void		ft_print_up_hex(unsigned int nbr_hex, int *count);
void		ft_print_ptr(void *ptr, int *count);

#endif
