set terminal postscript solid color 22
set output "serprob5.eps"
set xlabel 'z'
set ylabel 'f(z,n)'
plot "serprob5.txt" u 1:2 with linespoints
set terminal x11

