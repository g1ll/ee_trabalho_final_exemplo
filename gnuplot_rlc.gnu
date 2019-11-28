#script to plot rlc
set terminal pngcairo size 1024,720 enhanced font 'Verdana,12'
set output "./plot_rlc.png"
plot 'rlc.dat' using 1:2 with linespoint