# ee_trabalho_final_exemplo
Exemplo de Projeto no DevCpp para o Programa do Circuito Ressonante RLC Série (IFSUL - Engenharia Elétrica)

![Exemplo](https://github.com/g1ll/ee_trabalho_final_exemplo/raw/master/plot_rlc.png)

/**=====circuitoRLC=======
 *    Resolve o Circuito Ressonante (RLC) Subamortecido e quarda
 * a solução no parâmetro de E/S Qa. Qa deve ser
 * um ponteiro para uma área de merória alocada de 
 * acordo com a discretização do Tempo(Ti,h e Tf)
 * 
 * PARÂMETROS DE ENTRADA
 * V     Tensão (V)
 * R     Resistência (Ohm)
 * L     Indutância (Henry)
 * C     Capacitância (Farad)
 * Ti    Tempo inicial (s)
 * h     Passo de tempo (s)
 * Tf    Tempo final (s)
 * 
 * PARÂMETROS DE ENTRADA/SAÍDA
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

/**========createRLCDatFile========
 *   Cria o arquivo .DAT para ser lido pelo script de plotagem.
 * O arquivo deve se chamar 'rlc.dat' e seguir o padrão do gnuplot
 * com duas colunas de valores separadas por <TAB> \t
 * Tempos       Coulumbs     
 * Exemplo:
 *
 * x1   y1
 * x2   y2
 * x3   y3
 *  ....
 * 
 * PARÂMETROS DE ENTRADA
 * *Qa    Ponteiro para dados da carga (Qa)
 * *T    Ponteiro para dados dos passos de tempo(s)
 *  size     Quantidade de dados de acordo com o passo de tempo
 * 
 * */
void createRLCDatFile(double *Qa,double *T,int size);

/**=======createRLCLogFile======
 *    
 *   Criar o arquivo de Log com dos dados (*dataQ, *dataT)
 *  e os parametros de entrada do circuito RLC (V, R, L, C, Ti, h, Tf)
 * 
 * */
void createRLCLogFile(double V, double R, double L, double C,
                double Ti,double h, double Tf,
                double *Qa,double *T,int size);
