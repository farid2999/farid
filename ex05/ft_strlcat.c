/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:18:04 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/07 20:07:26 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    unsigned int j;
    int a; 
    int b;

    i = 0;
    
    a = ft_strlen(dest);
    b = ft_strlen(src);
    j = a;
    while (dest[j] != '\0')
    {
        j++;
    }
    while (src[i] != '\0' && j < size - 1)
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    return a + b;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char p[] = "is broding";
    char l[56] = "kamal ";
    printf("%d\n", ft_strlcat(l, p, 5));
    printf("%lu\n", strlcat(l, p, 5));
    printf("%s\n", l);


}