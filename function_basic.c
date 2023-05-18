#include "stdio.h" // kutuphane tanımı

int toplam (int d1, int d2); // prototip tanımandı, deklere edilir

int main(void)
{   int sayi1, sayi2, sonuc;  // değişkenlerin tanımlanması
    printf("Toplanacak 2 adet sayiyi giriniz: ");  // degiskenlarin alınması
    scanf("%d %d", &sayi1, &sayi2);       // kullanicidan alinan deger. hafızaya yazılması
    sonuc = toplam(sayi1, sayi2);     //fonksiyonun cagrilmasi
    printf("carpim sonucu = %d ", sonuc);         // fonk. tara. hesapla. sonucun ekrana bastırılması

    return 0;
}

// fonksiyonun gövdesi: toplama işlemi yapmakla görevli
int kare(int d1, d2)
{
    return (d1+d2);  // sonucun ana fonksiyona gönderilmesi
}
