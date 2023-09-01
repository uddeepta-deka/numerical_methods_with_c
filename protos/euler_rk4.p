set terminal postscript solid color 22
set output 'euler_rk4.eps'
set xlabel 't'
set ylabel 'x'
plot "euler_rk41.txt" u 1:2 title "Euler method", "euler_rk42.txt" u 1:2 title "actual method", "euler_rk43.txt" u 1:2 title "4th order Runge Kutta method"
set terminal x11
