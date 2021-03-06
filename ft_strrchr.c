/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnolan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:34:58 by lnolan            #+#    #+#             */
/*   Updated: 2018/12/09 20:32:40 by lnolan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;

	j = 0;
	while (s[j])
		j++;
	j += 1;
	while (j-- > 0)
		if (s[j] == c)
			return ((char *)s + j);
	return (NULL);
}
