/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:10:25 by anboscan          #+#    #+#             */
/*   Updated: 2017/11/27 18:27:40 by anboscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *source)
{
	int i;

	i = 0;
	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
