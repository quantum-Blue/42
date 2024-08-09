/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemirel <zakirr2004@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:47:30 by mdemirel          #+#    #+#             */
/*   Updated: 2024/02/10 23:47:30 by mdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
char *ft_strdup(char *src)
{
	int size = ft_strlen(src); // 4
	char *ptr = (char *)malloc(size+1); // 5 -> 0 1 2 3 4
	int i = 0;
	while (i < size) // 0 1 2 3 4
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[size] = '\0';
	return (ptr);
}



int main() {
    char *originalString = "Merhaba, dunya!";
    
    char *duplicateString = ft_strdup(originalString);
    
    if (duplicateString != NULL) {
        printf("Orijinal: %s\n", originalString);
        printf("Kopya: %s\n", duplicateString);
        
        // Bellek tahsisi yapıldıktan sonra hatırlanmalıdır.
        free(duplicateString);
    } else {
        fprintf(stderr, "Bellek tahsisi basarisiz oldu.\n");
    }

    return 0;
}
