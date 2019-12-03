
/**
 *    Resolve o Circuito Ressonante (RLC) Subamortecido e quarda
 * a solu��o no par�metro de E/S Qa. Qa deve ser
 * um ponteiro para uma �rea de mer�ria alocada de 
 * acordo com a discretiza��o do Tempo(Ti,h e Tf)
 * 
 * PAR�METROS DE ENTRADA
 * V     Tens�o (V)
 * R     Resist�ncia (Ohm)
 * L     Indut�ncia (Henry)
 * C     Capacit�ncia (Farad)
 * Ti    Tempo inicial (s)
 * h     Passo de tempo (s)
 * Tf    Tempo final (s)
 * 
 * PAR�METROS DE ENTRADA/SA�DA
 * *T    Ponteiro para vetor de tempos (s)
 * *Qa   Ponteiro para vetor de Carga no Capacitor (Columbs)
 * 
 * */
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


/**
 *   Cria o arquivo .DAT para ser lido pelo script de plotagem.
 * O arquivo deve se chamar 'rlc.dat' e seguir o padr�o do gnuplot
 * com duas colunas de valores separadas por <TAB> \t
 * Tempos       Coulumbs     
 * Exemplo:
 *
 * x1   y1
 * x2   y2
 * x3   y3
 *  ....
 * 
 * PAR�METROS DE ENTRADA
 * *dataQ    Ponteiro para dados da carga (Qa)
 * *dataT    Ponteiro para dados dos passos de tempo(s)
 *  size     Quantidade de dados de acordo com o passo de tempo
 * 
 * */
void createRLCDatFile(double *dataQ,double *dataT,int size);


/**
 *    
 *   Criar o arquivo de Log com dos dados (*dataQ, *dataT)
 *  e os parametros de entrada do circuito RLC (V, R, L, C, Ti, h, Tf)
 * 
 * */
void createRLCLogFile(double V, double R, double L, double C,
                double Ti,double h, double Tf,
                double *dataQ,double *dataT,int size);
