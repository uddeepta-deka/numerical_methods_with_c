set terminal postscript
set output "odeprob3.eps"
set xlabel 'prey'
set ylabel 'predator'
plot "odeprob3.txt" u 2:3 title "prey vs predator" with linespoints
set terminal x11
