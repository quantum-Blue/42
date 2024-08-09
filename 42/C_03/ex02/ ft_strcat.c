/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:01:28 by mubal             #+#    #+#             */
/*   Updated: 2024/02/07 13:26:14 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	char	*new;
	
	while (dest != "\0")
	{
		*new +=  *dest;
		*dest++;
		*new++;
	}
	while (src != "\0")
	{
		*new +=  *src;
		*src++;
		*new++;
	}
	return new ;
}