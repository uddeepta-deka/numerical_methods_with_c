set terminal postscript
set output "odeprob6.eps"
set xlabel "a"
set ylabel "x"
set title "bifurcation function"
plot "odeprob6.txt" u 1:2
