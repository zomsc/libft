/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findwordc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 15:33:42 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/21 15:33:56 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_findwordc(const char *s, char c)
{
	int wc;

	wc = 0;
	if (*s != c && *s != '\0')
		wc++;
	while (*s != c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			if (*(s + 1) != c)
				if (*(s + 1) != '\0')
					wc++;
		}
		s++;
	}
	wc++;
	return (wc);
}
