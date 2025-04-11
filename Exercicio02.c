#include <stdio.h>
#include <locale.h>

void func01();

int func02();

void func03(int valor, int *pt);

int func04(int valor, int *pt);

int main()
{
    int um = 0;
    int dois = 0; 
    int tres = 0;

    setlocale(LC_ALL, "");
    
    um = 1;
    dois = 2;
    tres = 3;
    
    func01();
    printf("%d,%d,%d",um, dois,tres);
    
    um = func02();
    printf("%d,%d,%d",um, dois,tres);
    
    func03(dois,&tres);
    printf("%d,%d,%d",um, dois,tres);
    
    um = func04(dois,&tres);
    printf("%d,%d,%d",um, dois,tres);
    
    
    return 0;
}

void func01(){
    int a = 10;
    int b = 20;
    int c = 30;
}

int func02(){
    int a = 50;
    int b = 60;
    int c = 70;
    return a;
}

void func03(int valor, int *pt){
    int a = 80;
    valor = 1;
    *pt = 2;
    printf("%d",a);
}

int func04(int valor, int *pt){
    int a = 3;
    valor = 15;
    *pt = 8;
    printf(a);
}
