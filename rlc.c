#include<stdio.h>
#include<math.h>
//A função circuitoRLC deverá ser utilizada com ponteiros para os parâmetros Qa e T
void circuitoRLC(double V, double R, double L, double C,
        double Ti,double h, double Tf, double *Qa,double *T){
    
    double d=0,r,i,t=Ti;
	//n = quantidade de iterações
    int n = (Tf-Ti+h)/h;//Discretização no Tempo

    //L?² +2R? +1/C=0
    //D = R² - 4L/C

    d = R*R-4*L*1/C;//Calculando o discriminante
    if(d<0){//Solução apenas para disciminante negativo (Sistem Subamortecido)
		//Calculando Raízes 
        r = -R/(2*L); //Real
        i = sqrt(-d)/(2*L); //Complexa
        for(int j=0;t<=Tf||j<n;T[j]=t,t+=h,j++)//Iteração no Tempo Ti até Tf incrementado por h
            Qa[j] = (V/(1/C))*(1-exp(r*t)*(cos(i*t)-(r/i)*sin(i*t)));//Solução Exata
    }
}

void createRLCDatFile(double *dataQ,double *dataT,int size){
	
	//Implementar 
}

void createRLCLogFile(double V, double R, double L, double C,
                double Ti,double h, double Tf,
                double *dataQ,double *dataT,int size){
					//Implementar 
}