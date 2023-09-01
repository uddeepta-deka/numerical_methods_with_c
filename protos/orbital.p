set terminal postscript
set output "orbital.eps"
set xlabel 'x'
set ylabel 'y'
plot "orbital.txt" u 1:2
set term x11
