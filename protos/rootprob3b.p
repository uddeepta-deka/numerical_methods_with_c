set terminal postscript solid color 22
set output "rootprob3b.eps"
set xlabel 'x'
set ylabel 'y'
plot "rootprob3b.txt" u 1:2
set term x11
