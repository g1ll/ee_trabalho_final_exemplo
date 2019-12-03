#include<stdio.h>
#include<math.h>
//A fun��o circuitoRLC dever� ser utilizada com ponteiros para os par�metros Qa e T
void circuitoRLC(double V, double R, double L, double C,
        double Ti,double h, double Tf, double *Qa,double *T){
    
    double d=0,r,i,t=Ti;
	//n = quantidade de itera��es
    int n = (Tf-Ti+h)/h;//Discretiza��o no Tempo

    //L?� +2R? +1/C=0
    //D = R� - 4L/C

    d = R*R-4*L*1/C;//Calculando o discriminante
    if(d<0){//Solu��o apenas para disciminante negativo (Sistem Subamortecido)
		//Calculando Ra�zes 
        r = -R/(2*L); //Real
        i = sqrt(-d)/(2*L); //Complexa
        for(int j=0;t<=Tf||j<n;T[j]=t,t+=h,j++)//Itera��o no Tempo Ti at� Tf incrementado por h
            Qa[j] = (V/(1/C))*(1-exp(r*t)*(cos(i*t)-(r/i)*sin(i*t)));//Solu��o Exata
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