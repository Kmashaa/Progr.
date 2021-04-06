#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "main.h"

int main() {
	char* tx;
	char* newtx;int length = 0;int i = 0;
	int counter = 0;
	int t = 0;
	int p = 0;
	int pp = 0;
	char ff,ss,tt;
	int counter2 = 0;int k = 0;
	tx = (char*)malloc(1000 * sizeof(char));

	scanf("%999[^&]s", tx);
	  
	while (tx[length] >= 'a' && tx[length] <= '~') {
		
		length++;
	}
	
	
	i = 2;
	for (i; i < length+2; i++) 
	{	ff=tx[i-2];
		ss=tx[i-1];
		tt=tx[i];
		if (check(ff,ss,tt)) 
		{
			if (tx[i - 1] >= 97 && tx[i - 1] <= 122) 
			{
				tx[i - 1] -= 32;
			}
			else if (tx[i] >= 97 && tx[i] <= 122)
			{
			tx[i] -= 32;
			}
		}
	}
	i=0;

	for (i; i < length; i++) {
		while (tx[i + counter] != ' ') {
			if (tx[i + counter] == '&') {
				counter++;
				break;
			}
			counter++;

		}
		while (tx[i + counter2+counter+1] != ' ') {
			if (tx[i + counter2+counter+1] == '&') {
				counter2++;
				
				break;
			}
			counter2++; 
		}
		if (counter = counter2)
		{
			for (t; t < counter; t++) {
				if (tx[i + counter + p + 1] == tx[i + p]) {
					p++;
				}
			}
			if (p == counter && p > 0) {
				

				 newtx = (char*)malloc((length - p) * sizeof(char));

				
				for (k; k < i; k++) {
					newtx[k] = tx[k];
				}

				for (k; k + counter < length-1; k++) {
					newtx[k] = tx[k + counter + 1];
				}
				free(tx);
				tx = newtx;
				free(newtx);
				length -= counter;
				i += counter;
				pp++;
				k = 0;
			}
		}

			counter = 0;
			counter2 = 0;
			p = 0;
			t = 0;
			
		
	}
	length -= pp;


	for (i = 0; i < length; i++) {
		printf("%c", tx[i]);
	}
	return 0;
}
int check(char ff,char ss, char tt){
	if (ff == '.' && ((ss >= 97 && ss <= 122) || (tt >= 97 && tt <= 122)))
	{
		return 1;
	}
	else {
		return 0;
	}
	
}