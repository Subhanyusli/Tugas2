#include <stdio.h>
#include <ctype.h>

using namespace std;
bool validasiNilai( int x) {
    if ( x >=0 && x<=100 ) {
        return true;
    }else {
    return false;
    }
}


int main() {
    int arr[100],x, i, max, min, sum = 0, q=0;

    printf("Masukkan 10 elemen array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        
        arr[i]=x;
        sum += arr[i];
        if (validasiNilai(x)){
         printf("Angka Valid.\n");
         
    } else {
        printf("Angka Tidak Valid.\n");
        q=1;
        break;
    }
    }
    if (q ==1) {
        return 0;
    }
    max = arr[0];
    min = arr[0];
    for (i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    double average = (double)sum / 10;


   
    printf("Rata-rata: %.2lf\n", average);

    return 0;
}