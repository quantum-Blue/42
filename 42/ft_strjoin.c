#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str) {
    int i = 0;
    if (str) {
        while (str[i] != '\0') {
            i++;
        }
    }
    return i;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    // Toplam uzunluğu hesapla
    int total_size = 0;
	int i = 0;
    while (i < size) {
        total_size += ft_strlen(strs[i]);
		i++;
    }

    // Ayırıcı string'in uzunluğunu hesapla
    int sep_len = ft_strlen(sep);

    // Gereken toplam bellek boyutunu hesapla
    int result_len = total_size + (size - 1) * sep_len;

    // Bellekten yer ayır
    char *result = (char *)malloc(result_len + 1);

    if (!result) {
        return NULL; // Bellek ayırmada sorun oluştu
    }
	i = 0;
	int j = 0;
	int k = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			result[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < size-1)
		{
			result[k] = *sep;
			k++;
		}
		i++;
	}
    return result;
}

int main() {
    char sep = '/';
    char *strs[] = {"zakir", "enes", "fjkaslf"};
    char *str = ft_strjoin(3, strs, &sep);
    printf("%s", str);

    free(str); // Belleği serbest bırak

    return 0;
}
