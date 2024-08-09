/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:17:45 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 13:19:24 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			if (*s1 == '\n')
			{
				return (1);
			}
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int main(){
	char  s1[] = "hello";
	char  s2[] = "world";
	printf("%d\n", ft_strcmp(s1, s2));
	return 0;
}