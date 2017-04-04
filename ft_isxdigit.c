/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:09:59 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/09 17:17:39 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isxdigit(int c)
{
	if (c >= 65 && c <= 70)
		return (1);
	if (c >= 97 && c <= 102)
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
