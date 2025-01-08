#include <stdio.h>

int main() {
    // Praktikum 9, no. 1
    // Program untuk menampilkan bilangan ganjil sebanyak n kali
    printf("--------------------Praktikum 9--------------------\n\n\n");
    printf("Percobaan 1\n");
    
    int n, m = 1;

    // Meminta input banyaknya bilangan ganjil yang akan ditampilkan
    printf("Seberapa banyak anda ingin menampilkan bilangan ganjil? ");
    scanf("%d", &n);

    // Loop untuk mencetak bilangan ganjil
    for(int i = 1; i <= n; i++) {
        printf("%d\n", m);
        m += 2;  // Menambahkan 2 untuk mendapatkan bilangan ganjil berikutnya
    }

    printf("\n\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // Praktikum 9, no. 2
    // Program untuk menampilkan bilangan triangular dan menghitung jumlahnya
    printf("Percobaan 2\n");
    
    int angka_2, jumlah_2 = 0;

    // Meminta input bilangan triangular
    printf("Masukkan bilangan triangular: ");
    scanf("%d", &angka_2);

    // Loop untuk menampilkan bilangan triangular dan menjumlahkannya
    for(int i = angka_2; i > 0; i--) {
        printf("%d", i);
        jumlah_2 += i;  // Menambahkan angka ke total jumlah
        if(i > 1)
            printf(" + ");
    }
    printf(" = %d\n", jumlah_2);

    printf("--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // Praktikum 9, no. 3
    // Program untuk menampilkan huruf dari Z ke A
    printf("Percobaan 3\n");

    // Loop untuk menampilkan huruf dari Z ke A
    for(int i = 'Z'; i >= 'A'; i--) {
        printf("%c\n", i);
    }

    printf("\n\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // Praktikum 9, no. 4
    // Program untuk menampilkan angka 1 hingga n dengan pemisah "-"
    printf("Percobaan 4\n");
    
    int angka_4;

    // Meminta input angka
    printf("Masukkan bilangan: ");
    scanf("%d", &angka_4);

    // Loop untuk menampilkan angka 1 hingga n dengan pemisah "-"
    for(int i = 1; i <= angka_4; i++) {
        printf("%d ", i);
        if(i % 2 != 0 && i < angka_4)
            printf("-");  // Menambahkan tanda "-" setelah angka ganjil
    }

    printf("\n\n\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // Praktikum 9, no. 5
    // Program untuk mengecek apakah sebuah bilangan adalah bilangan prima
    printf("Percobaan 5\n");
    
    int angka;
    printf("Cek bilangan prima: ");
    scanf("%d", &angka);

// Mengecek apakah angka lebih kecil dari atau sama dengan 1
if(angka <= 1)
    printf("Bilangan yang diinputkan bukan bilangan prima");
else {
    // Loop untuk memeriksa pembagi dari 2 hingga akar kuadrat dari angka
    for(int i = 2; i * i <= angka; i++) {
        // Jika angka habis dibagi oleh i, maka angka tersebut bukan bilangan prima
        if(angka % i == 0) {
            printf("Bilangan yang diinputkan bukan bilangan prima");
            break;
        }
    }
    // Jika tidak ada pembagi yang ditemukan, maka angka tersebut adalah bilangan prima
    if (angka > 1) {
        printf("Bilangan yang diinputkan merupakan bilangan prima");
    }
}
    printf("\n\n");

    printf("\n\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // Praktikum 9, no. 6
    // Program untuk menghitung Indeks Prestasi Semester berdasarkan nilai dan jam
    printf("Percobaan 6\n");

    int nilai_6, jam_6, $nilai_6 = 0, $jam_6 = 0, i = 1;
    char huruf_6, jwb_6;

    do {
        // Meminta input nilai mata kuliah dan jam kuliah
        printf("Input Nilai Mata Kuliah %d dan Jumlah Jam (A 3): ", i);
        scanf(" %c %d", &huruf_6, &jam_6);  // Spasi sebelum %c untuk menangani input karakter
        i++;

        // Menentukan nilai berdasarkan huruf
        switch(huruf_6) {
            case 'A':
                nilai_6 = 4;
                break;
            case 'B':
                nilai_6 = 3;
                break;
            case 'C':
                nilai_6 = 2;
                break;
            case 'D':
                nilai_6 = 1;
                break;
            case 'E':
                nilai_6 = 0;
                break;
            default:
                printf("Nilai yang diinputkan tidak valid!!");
                break;
        }

        // Menghitung total nilai dan total jam kuliah
        $nilai_6 += nilai_6 * jam_6;
        $jam_6 += jam_6;

        // Menanyakan apakah masih ada mata kuliah lain
        fflush(stdin);
        printf("Ada Mata Kuliah Lain(y/t)? ");
        scanf(" %c", &jwb_6);  // Spasi sebelum %c untuk menangani input karakter
    } while(jwb_6 == 'y');  // Loop jika jawaban 'y'

    // Menghitung dan menampilkan Indeks Prestasi Semester
    $nilai_6 = $nilai_6 / $jam_6;
    printf("Indeks Prestasi Semester: %d\n\n", $nilai_6);

    return 0;
}
