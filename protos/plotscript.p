set terminal postscript enhanced color solid 22
set output 'plot1.eps'
set xlabel 'x'
set ylabel 'sin (x)'
plot [-2*pi : 2*pi] sin(x) title "Sine wave" with linespoints
   set term x11
   