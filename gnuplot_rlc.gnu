#script to plot rlc
set terminal pngcairo size 1024,720 enhanced font 'Verdana,12'
set output "./plot_rlc.png"
set title "SOLUÇÃO SISTEMA RLC"
set xlabel 'Tempo(s)'
set ylabel 'Coulomb (C)'
plot 'rlc.dat' using 1:2 with linespoint title "Carga no Capacitor"