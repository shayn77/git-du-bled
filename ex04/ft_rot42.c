/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdaviot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 04:48:15 by vdaviot           #+#    #+#             */
/*   Updated: 2014/09/12 05:09:33 by vdaviot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_maj(char p)
{
	if (p >= 'A' && p <= 'Z')
		return (1);
	return (0);
}

int		ft_min(char p)
{
	if (p >= 'a' && p <= 'z')
		return (1);
	return (0);
}

char	*ft_rot42(char *str)
{
	int		i;
	int		val;

	val = 42 % 26;
	i = 0;
	while (str[i])
	{
		if (ft_maj(str[i]))
		{
			if ('Z' - str[i] < val)
				str[i] = 'A' + (val - ('Z' - str[i])) - 1;
			else
				str[i] = str[i] + val;
		}
		if (ft_min(str[i]))
		{
			if ('z' - str[i] < val)
				str[i] = 'a' + (val - ('z' - str[i]) - 1);
			else
				str[i] = str[i] + val;
		}
		i++;
	}
	return (str);
}
