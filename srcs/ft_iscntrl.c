/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esurdam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:02:59 by esurdam           #+#    #+#             */
/*   Updated: 2016/12/09 17:17:49 by esurdam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int		ft_iscntrl(int c)
{
	if (c >= 0 && c <= 31)
		return (1);
	else
		return (0);
}
