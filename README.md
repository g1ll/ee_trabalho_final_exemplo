# ee_trabalho_final_exemplo
Exemplo de Projeto no DevCpp para o Programa do Circuito Ressonante RLC Série (IFSUL - Engenharia Elétrica)

![Exemplo](https://github.com/g1ll/ee_trabalho_final_exemplo/raw/master/plot_rlc.png)

Imagem gerada pelo script do gnuPlot (*gnuplot_rlg.gnu*) a partir dos dados do *rlc.dat* criados pela função circuitoRLC para  os seguintes parâmetros : V = 12, R = 10³, L = 1, C = 10⁻⁶,Ti = 0, h = 10⁻⁴, Tf = 0.01 

_gnuplot_rlc.gnu_
```gnuplot
   script to plot rlc
   set terminal pngcairo size 1024,720 enhanced font 'Verdana,12'
   set output "./plot_rlc.png"
   set title "SOLUÇÃO SISTEMA RLC"
   set xlabel 'Tempo(s)'
   set ylabel 'Coulomb (C)'
   plot 'rlc.dat' using 1:2 with linespoint title "Carga no Capacitor"
```

## circuitoRLC 
   Resolve o Circuito Ressonante (RLC) Subamortecido e quarda
  a solução no parâmetro de E/S Qa. Qa deve ser
  um ponteiro para uma área de memória alocada de 
  acordo com a discretização do Tempo(Ti,h e Tf)
  
 * PARÂMETROS DE ENTRADA
   * V     Tensão (V)
   * R     Resistência (Ohm)
   * L     Indutância (Henry)
   * C     Capacitância (Farad)
   * Ti    Tempo inicial (s)
   * h     Passo de tempo (s)
   * Tf    Tempo final (s)
  
 * PARÂMETROS DE ENTRADA/SAÍDA
   * \*T    Ponteiro para vetor de tempos (s)
   * \*Qa   Ponteiro para vetor de Carga no Capacitor (Columbs)
  
 ```c
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
```
## createRLCDatFile 

  Cria o arquivo .DAT para ser lido pelo script de plotagem.
  O arquivo deve se chamar 'rlc.dat' e seguir o padrão do gnuplot
  com duas colunas de valores separadas por <TAB> \t
  Tempos       Coulumbs     
  Exemplo:
 
  x1   y1
  
  x2   y2
  
  x3   y3
  
  ....
  
 * PARÂMETROS DE ENTRADA
   * \*Qa    Ponteiro para dados da carga (Qa)
   * \*T    Ponteiro para dados dos passos de tempo(s)
   * size     Quantidade de dados de acordo com o passo de tempo
  
 ```c
void createRLCDatFile(double *Qa,double *T,int size);
```
## createRLCLogFile

 Criar o arquivo de Log com dos dados (*dataQ, *dataT)
 e os parametros de entrada do circuito RLC (V, R, L, C, Ti, h, Tf)
  
```c
void createRLCLogFile(double V, double R, double L, double C,
                double Ti,double h, double Tf,
                double *Qa,double *T,int size);
```
