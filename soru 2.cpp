#include <stdio.h>

int bolum(int bolunen, int bolen) {
    
    if (bolunen < 0 && bolen < 0) {
        bolunen = -bolunen;
        bolen = -bolen;
    } else if (bolunen < 0) {
        bolunen = -bolunen;
        return -bolum(bolunen, bolen);
    } else if (bolen < 0) {
        bolen = -bolen;
        return -bolum(bolunen, bolen);
    }

 
    if (bolen == 0) {
        printf("HATA: Bolen sifir olamaz.\n");
        return 0;
    } else if (bolunen < bolen) {
        return 0;
    } else {
        return 1 + bolum(bolunen - bolen, bolen);
    }
}

int main() {
    int bolunen, bolen;
    printf("Bolunen: ");
    scanf("%d", &bolunen);
    printf("Bolen: ");
    scanf("%d", &bolen);

    int sonuc = bolum(bolunen, bolen);
    printf("%d / %d = %d\n", bolunen, bolen, sonuc);

    return 0;
}

