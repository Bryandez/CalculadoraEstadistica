#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

//prototipos de funciones
float MediaAritmetica(int x[], int n);
float MediaGeometrica(int x[], int n);
float MediaArmonica(int x[], int n); 
int Mediana(int x[], int n);
int Moda(int x[], int n);
int Rango(int x[], int n);
float Varianza(int x[], int n, int a); 
float DesviacionEstandar(int x);

//programa principal
int main(){
    //bloque de declarativas
    int n = 1;
    int serie[n];
    float mA, mG, mAr, dE, va; 
    int me, mo, ra, opt;

    //bloque de instrucciones
    printf("\t\tCALCULADORA ESTAD%CSTICA", 161);
    printf("\n\n");

    


    return 0;
}

//definición de funciones
float MediaAritmetica(int x[], int n){
  float a = 0;
  for (int i = 0; i < n; i++) {
    a += (x[i]/n);
  }
  return a;
}

float MediaGeometrica(int x[], int n){
  float a = 1;
  for (int i = 0; i < n; i++) {
    a *= pow(x[i], (1/n))
  }
  return a;
}

float MediaArmonica(int x[], int n){
    float su = 0;
    float div, b;
    n = n1;
    for (int i = 0; i<= n; i++ ){
        div = 1 / x[i];
        su = su + div;
    }
    b = n1/su;
    return b;
}

int Mediana(int x[], int n){
    int a;
    for (int i = 0; i<= n; i++ ){
         for (int y = 0; y <= y; i++ ){
            if (x[i] > x[i+1]){
                a = x[i+1];
            }
         }
    }

}

int Moda(int x[], int n){
    int moda = 0;
    
}

int Rango(int x[], int n){

}

float Varianza(int x[], int n, int a){
    float v=0;
    float re;
    for (int i = 0; i < n; i++){
        v += pow((x[i]-a), 2);
    }
    re = v/n;
    return re;
}

float DesviacionEstandar(int x){
    float d;
    d = sqrt(x);
    return d;
}
