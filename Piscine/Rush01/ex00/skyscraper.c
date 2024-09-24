/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicogonz <nicogonz@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:24:13 by nicogonz          #+#    #+#             */
/*   Updated: 2024/07/24 15:56:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int filas;
    int columnas;
    int **x;
    int i;
    int j;
    
    filas = 4;
    columnas = 4;
    x = (int **)malloc(filas*sizeof(int*));
    
        i = 0;
    while (i < filas) 
    {
        x[i] = (int*)malloc(columnas * sizeof(int));
        i++;
    }
    x[0][0] = 1;
    x[0][1] = 2;
    x[0][2] = 3;
    x[0][3] = 4;
        
    x[1][0] = 5;
    x[1][1] = 6;
    x[1][2] = 7;
    x[1][3] = 8;
    
    x[2][0] = 1;
    x[2][1] = 2;
    x[2][2] = 3;
    x[2][3] = 4;
       
    x[3][0] = '-';
    x[3][1] = 6;
    x[3][2] = 7;
    x[3][3] = 8;
       
    i = 0;
while (i < columnas) {
    printf("\n");
    j = 0;
    while (j < columnas) {
        printf("\t%d", x[i][j]);
        j++;
    }
    i++;
}


    return 0;
    
}
