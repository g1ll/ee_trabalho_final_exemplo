#include<stdio.h>
#include<stdlib.h>
#include"rlc.h"

int main(int argc, char *argv[]){

    double V,R,L,C,ti,h,Tf,*Qa,*T;
    int n;

    //R = 10³, L = 1, C = 10-⁶
    // V=5;
    // R = 0.5e3;    //1000
    // L = 2;
    // C = 1e-6;   //0.000001
    // ti = 0.00001;
    // h = 1e-4;   //0.0001
    // Tf = 0.035;  //0.01
    
    if(argc>=7){
        V = atof(argv[1]);
        R = atof(argv[2]);    //1000
        L = atof(argv[3]);
        C = atof(argv[4]);   //0.000001
        ti = atof(argv[5]);
        h = atof(argv[6]);   //0.0001
        Tf = atof(argv[7]);  //0.01
        n = (Tf-ti+h)/h;
    }else{
        printf("\nParametros insuficientes!!\n");
        return 0;
    }

    printf("\nR: %lf\nL: %lf\nC: %lf\n",R,L,C); 

    Qa = calloc(n,sizeof(double));
    T = calloc(n,sizeof(double));
    
    circuitoRLC(V,R,L,C,ti,h,Tf,Qa,T);

    for(int i=0;i<n;i++)
        printf("\nQa[%d]:\t%0.15lf",i,Qa[i]);

    createRLCDatFile(Qa,T,n);
    
    creatRLCLogFile(V,R,L,C,ti,h,Tf,Qa,T,n);

    system("gnuplot -c gnuplot_rlc.gnu");
    printf("\n\n\n");
    return 0;
}
