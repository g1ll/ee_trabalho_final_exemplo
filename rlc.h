void circuitoRLC(
        double V,
        double R,
        double L,
        double C,
        double Ti,
        double h,
        double Tf,
        double *T,
        double *Qa);



void createRLCDatFile(double *dataQ,double *dataT,int size);

void creatRLCLogFile(double V, double R, double L, double C,
                double Ti,double h, double Tf,
                double *dataQ,double *dataT,int size);
