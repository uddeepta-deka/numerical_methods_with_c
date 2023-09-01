set terminal postscript
set output "gnuprob3.eps"
set xlabel 'x'
set ylabel 'y'
plot "gnuprob3.txt" u 1:2 
set terminal x11
