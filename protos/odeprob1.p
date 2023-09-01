set terminal postscript solid color 22
set output "odeprob1.eps"
set xlabel 'x'
set ylabel 'y'
plot "odeprob1a.txt" u 1:2 title 'Euler method', "odeprob1b.txt" u 1:2 title 'RK4 method', "odeprob1c.txt" u 1:2 title 'exact solution'
set terminal x11
