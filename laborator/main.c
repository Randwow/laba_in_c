//
//  main.c
//  laba
//
//  Created by Nikita Makeev on 11/6/19.
//  Copyright © 2019 Nikita Makeev. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
//  Лабораторная работа номер 1
//    float    a, b, c;
//    float    StartX, EndX, dX;
//    float    F;
//    int      k;
//    printf("Enter:");
//    printf("\ta = "); scanf("%f", &a);
//    printf("\tb = "); scanf("%f", &b);
//    printf("\tc = "); scanf("%f", &c);
//    printf("\tX Start = "); scanf("%f", &StartX);
//    printf("\tX Final = "); scanf("%f", &EndX);
//    printf("\tdX = "); scanf("%f", &dX);
//    float x = StartX;
//
//    while (x <= EndX)
//    {
//        if ( a < 0 && c != 0 )
//        {
//               F = a * x * x + b * x + c;
//               k = 1;
//        }
//        else if (a > 0 && b==0 && fabs(x-c) >.000001)
//        {
//            F = (-a) / (x - c);
//            k = 2;
//        }
//        else
//        {
//            F = a * (x + c);
//            k = 3;
//        }
//
//
//        if (!(long)floor(a) || ((long)floor(b) &&  (long)floor(c)))
//            printf("x = %.2f\t F%d = %.0f\n", x, k,F);
//        else
//            printf("x = %.2f\t F%d = %.2f\n", x, k,F);
//            x += dX;
//    }
//  Лабораторная работа номер 2
//    int n = 5,i,array[n],tmp=0,neg = -1,sum=0,sum1 = 0;
//    printf("Заполнение массива \n");
//        for (i = 0; i<n; i++)
//        {
//            scanf("%d", &array[i]);
//        }
//    printf("Вывод массива на экран\n");
//    printf("a[n] = {");
//        for (i = 0; i<5; i++)
//        {
//            tmp = (array[i] < 0 ) ? tmp+1 : tmp+0;
//            printf("%d ", array[i]);
//        }
//    printf("}\n");
//    for (i = 0; i<5; i++)
//    {
//        sum1 = (array[i]<0) ? sum1+=array[i]: sum1+0;
//    }
//    printf("Сумма отрицательных элементов массива %d", sum1);
//    printf("\n");
//    printf("Количество отрицательных элементов массива: %d \n", tmp);
//    for (i=0; i < n; i++) {
//        if (array[i] < 0) {
//            neg = i;
//            break;
//        }
//    }
//    if (neg == -1) printf("нет отрицательных\n");
//    else {
//        printf("номер 1-го отриц: %d\n", neg+1);
//        sum = 0;
//        for (i=neg+1; i<n; i++) sum += abs(array[i]);
//        printf("сумма после него : %d\n", sum);
//    }
//    printf("Замена всех отрицательных элементов массива их квадратами \n");
//    printf("a[n] = {");
//    for (i = 0; i<5; i++)
//    {
//        array[i] = (array[i] < 0 ) ? array[i]*array[i] : array[i];
//        printf("%d ", array[i]);
//    }
//    printf("}\n");
//    printf("Cортировка в поредяке возрастания\n");
//    printf("a[n] = {");
//    for (i = 0; i<5; i++)
//     {
//         for (int j = i+1; j < n; j++)
//            if (array[i] > array[j])
//            {
//               int buf = array[i];
//               array[i] = array[j];
//               array[j] = buf;
//            }
//        printf("%d ", array[i]);
//     }
//    printf("}\n");
//    printf("Находим в массиве максимальные элементы \n");
//    int imax1=0, imax2=0;
//    for (int i=0; i<n; i++) {
//        if (array[i]>=array[imax2]) {
//            imax1=imax2;
//            imax2=i;
//        } else if (array[i]>=array[imax1] && array[i]!=array[imax2])
//            imax1=i;
//        }
//    printf("Max1 a[%d] = %d\nMax1 a[%d] = %d\n", imax1+1,array[imax1], imax2+1, array[imax2]);
    return 0;
}
