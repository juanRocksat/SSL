/*
 * cadenas.c
 *
 *  Created on: 3 ene. 2018
 *      Author: juan
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* potenciar(char* s , int n){
	for ( int i = 0;  i < n;  i++) {
		s = strcat(s,s);
	}
	return s;
}
