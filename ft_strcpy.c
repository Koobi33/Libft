/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnolan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 14:11:14 by lnolan            #+#    #+#             */
/*   Updated: 2018/12/12 21:38:53 by lnolan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	if (src[i] != '\0')
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
