/*
  Sưu tầm bởi @nguyenvanhieuvn
  Thực hành nhiều bài tập hơn tại https://luyencode.net/
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    long S;
    do
    {
    printf("\nNhap n(n > 0): ");
    scanf("%d", &n);
      if(n <= 0)
       {
        printf("\n N phai > 0. Xin nhap lai !");
       }
    }while(n <= 0);
    i = 1;
    S = 0;
    printf("\nCac uoc nho hon %d la",n);
    while(i < n)
    {
        if(n % i == 0)
        {
            printf("%4d", i);
           S = S + i;
        }
            i++;
    }
    printf("\nTong cac uoc nho hon %d la: %ld", n, S);
    getch();
    return 0;
}