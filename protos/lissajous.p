set terminal postscript
set output "lissajous.eps"
set xlabel 'x'
set ylabel 'y'
plot "lissajous.txt" u 1:2
set term x11
