/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 00:23:09 by vdaviot           #+#    #+#             */
/*   Updated: 2014/09/12 04:45:27 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_bouton(int i, int j, int k)
{
	if (i > j && k < j || k > j && i < j)
		return (j);
	if (i > k && k > j || j > k && k > i)
		return (k);
	if (j > i && k < i || k > i && j < i)
		return (i);
	return (0);
}
