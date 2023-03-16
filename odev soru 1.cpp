#include <stdio.h>


void yildizYazdir(int n) {
    if (n <= 0) {  
        return;
    }
    printf("*");  
    yildizYazdir(n-1);  
}


void ucgenYazdir(int n) {
    if (n <= 0) { 
        return;
    }
    ucgenYazdir(n-2); 
    yildizYazdir(n);  
    printf("\n");  
}


void dikeyCizgiYazdir(int n) {
    if (n <= 0) { 
        return;
    }
    printf("|\n"); 
    dikeyCizgiYazdir(n-1);  
}

int main() {
    ucgenYazdir(5);
    ucgenYazdir(9);
    dikeyCizgiYazdir(3);
    return 0;
}

