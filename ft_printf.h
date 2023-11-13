/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:17:29 by aldantas          #+#    #+#             */
/*   Updated: 2023/11/13 16:22:06 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		print_decimal(int decimal);
int		print_char(char c);
int		print_string(char *str);
int		print_percent(void);
int		print_hexa(unsigned int n);
int		print_hexa_upper(unsigned int n);
int		print_unsigned(unsigned long n);
int		print_address(void *p);
char	*utoa_base(unsigned long long n, int base, char *chr);
char	*itoa_base(int n, int base, char *chr);
int		is_flag(int c);

#endif
