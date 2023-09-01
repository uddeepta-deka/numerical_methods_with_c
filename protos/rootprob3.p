set terminal postscript solid color 22
set output "rootprob3.eps"
set xlabel 'x'
set ylabel 'y'
plot "rootprob3.txt" u 1:2
set term x11
