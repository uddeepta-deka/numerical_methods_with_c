set terminal postscript
set output "serprob4.eps"
set xlabel 'z'
set ylabel 'F(z)'
plot "serprob4.txt" u 1:2 with linespoints
set terminal x11
