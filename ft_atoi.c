/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnolan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:17:11 by lnolan            #+#    #+#             */
/*   Updated: 2018/12/13 19:23:52 by lnolan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long long int res;
	long long int sgn;
	long long int tmp;

	res = 0;
	sgn = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'\
			|| *str == '\v' || *str == '\f')\
		str++;
	if (*str == '-')
	{
		sgn = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		tmp = res;
		res = res * 10 + *str - '0';
		if (res < tmp)
			return (sgn == -1 ? 0 : -1);
		str++;
	}
	return (res * sgn);
}
