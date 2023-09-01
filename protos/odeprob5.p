set terminal postscript solid color 22
set output "odeprob5a.eps"
set xlabel 't'
set ylabel 'x'
plot "odeprob5.txt" u 1:2 title "x vs t"
set output "odeprob5b.eps"
set xlabel 't'
set ylabel 'y'
plot "odeprob5.txt" u 1:3 title "y vs t"
set output "odeprob5c.eps"
set xlabel 't'
set ylabel 'z'
plot "odeprob5.txt" u 1:4 title "z vs t"
set output "odeprob5d.eps"
set xlabel 'x'
set ylabel 'y'
plot "odeprob5.txt" u 2:3 title "x vs y"
set output "odeprob5e.eps"
set xlabel 'x'
set ylabel 'z'
plot "odeprob5.txt" u 2:4 title "x vs z"
set output "odeprob5f.eps"
set xlabel 'y'
set ylabel 'z'
plot "odeprob5.txt" u 3:4 title "y vs z"
set terminal x11
