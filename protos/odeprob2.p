set terminal postscript solid color 22
set output "odeprob2.eps"
set xlabel 't'
set ylabel 'theta'
plot "odeprob2.txt" u 1:2 title "RK4 method", "odeprob2.txt" u 1:3 title "analytic solution"
set terminal x11

