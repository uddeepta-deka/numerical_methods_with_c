set terminal postscript solid color 22
set output "rootprob5.eps"
set xlabel 'x'
set ylabel 'u(x)'
plot "rootprob5.txt" u 1:2 title "Chebyshev"
set terminal x11
