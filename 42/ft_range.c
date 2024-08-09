/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:01:32 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/11 00:01:32 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int size = max - min;
	int *ptr = (int *)malloc(size + 1);
	int i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int main() {
int *ptr = ft_range(3,6);
	printf("%d,%d,%d",*ptr,*(ptr+1),*(ptr+2));

}
