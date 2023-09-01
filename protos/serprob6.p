set terminal postscript solid color 22
set output "serprob6.eps"
set xlabel 'z'
set ylabel 'f(z)'
plot "serprob6.txt" u 1:2 with linespoints
set terminal x11
