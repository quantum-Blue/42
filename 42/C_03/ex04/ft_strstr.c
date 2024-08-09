/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:29:42 by mubal             #+#    #+#             */
/*   Updated: 2024/02/07 16:39:21 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;

	i = 0;
	while (str[i])
	{
		count = 0;
		j = i;
		while (str[j] && to_find[count] && str[j] == to_find[count])
		{
			count += 1;
			j += 1;
		}
		if (!to_find[count])
			return (&str[i]);
		i += 1;
	}
	return (0);
}
