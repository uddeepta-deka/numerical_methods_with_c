set terminal postscript solid color 22
set output "odeprob4.eps"
set xlabel 'x'
set ylabel 'y'
plot "odeprob4.txt" u 1:2 with linespoints
set terminal x11
