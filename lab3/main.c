#include <stdio.h>
#include <malloc.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main()
{    
    int i = 0, j = 0, k = 0, p = 0, s = 0, success = 1;
    char** Arr = NULL;
    int n = 0;
    int len = 0, sqr = 0, z = 0, t = 0, w, q = 0;  
    char* a = NULL; 
    char str[10000];
    scanf("%10000[^\n]s", str);

    while (str[i] >= 32 && str[i] <= 126) {
        len++;
        i++;
    }
    len--;
    i--;
    
    n=countMatrixSide(len);
    Arr = (char**)malloc( n *  sizeof(char*));
    
   if(!Arr) {
        printf("Error\n");
        free(Arr);
        Arr = NULL;
        return 1;
    }

    for (i = 0; i < n; i++) {
        Arr[i] = (char*)malloc(n * sizeof(char));

        if(!Arr[i]) {
            printf("Error x2");
            success = 0;
            break;
        }
    }

    if (success == 0) {
        for (; i >= 0; i--) { 
            free(Arr[i]);
        }
        free(Arr);
        Arr = NULL;
        return 1;
    }

    while (s < n * n) {
        for (i = k; i < n - k; i++) {
            if (s <= len) {
                Arr[i][j] = str[s];   
            } else {
                Arr[i][j] = ' ';
            }
            s++;
        }                                                       
        i--;

        for (j = k + 1; j < n - k; j++) {
            if (s <= len) {
                Arr[i][j] = str[s];
            } else {
                Arr[i][j] = ' ';
            }
            s++;
        }                                                       
        j--;

        for (i = n - k - 2; i >= k; i--) {
            if (s <= len) {
                Arr[i][j] = str[s];
            } else {
                Arr[i][j] = ' ';
            }
            s++;
        }                                                     
        i++;

        for (j = n - k - 2; j > k; j--) {
            if (s <= len) {
                Arr[i][j] = str[s];   
            } else {
                Arr[i][j] = ' ';
            }
            s++;
        }                                                       
        j++;
        k++;
    }
    for (q = 0; q < n; q++) {
        for (w = 0; w < n; w++) {
            printf("%c", Arr[q][w]);
        }
        printf("\n");
    }

    a = (char*)malloc(n * n * sizeof(char));
    if(!a) {
        printf("Error x3\n");
        free(a);
        /*This may be nesessary if programm contiue working*/
        a = NULL;
        return 1;
    }

    while (z < n * n) {
        if (n % 2 != 0) {
            for (i = n / 2 + t; i >= k - 2; i--) {
                if (z >= n * n) break;

                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            i++;

            for (j = n / 2 - t + 1; j <= n - k + 1; j++) {
                if (z >= n * n) break;

                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            j--;
    
            for (i += 1; i <= n /2 + t + 1; i++) {
                if (z >= n * n) break;

                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            i--;

            for (j -= 1; j >= k - 1; j--) {
                if (z >= n * n) break;

                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            t++;
            k--;
        } else {
            for (i = n / 2 - t - 1; i <= n / 2 + t; i++) {
                if (z >= n * n) break;
    
                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            i--;

            for (j -= 1; j >= k - 1; j--) {
                if (z >= n * n) break;
                
                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            j++;
                                                                    
           for (i -= 1 ; i >= k - 2; i--) {
                if (z >= n * n) break;
                
                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            i++;

            for (j += 1; j <= n - k ; j++) {
                if (z >= n * n) break;
                
                if (s <= len) {
                    a[z] = Arr[i][j];
                    z++;
                } else {
                    a[z] = Arr[i][j];
                    z++;
                }
            }                                                       
            t++;
            k--;
        }
    }

    for (w = z - 1; w >= 0; w--) {
        printf("%c", a[w]);
    }

    free(Arr);
    free(a);
    return 0;
}

int countMatrixSide(int len){
    int sqr;
      sqr = sqrt(len);
    if (sqr * sqr < len) {
        sqr++;
    }
    return sqr;  
}
