clc
clear
load('Datos.mat')
America=0;
AsiaAustralia=0;
Europa=0;
Africa=0;
for c=1:1:5
America = America + VentasAnuales(c,6);
end

for c=6:1:12
AsiaAustralia = AsiaAustralia + VentasAnuales(c,6);
end

for c=13:1:19
Europa = Europa + VentasAnuales(c,6);
end

for c=20:1:20
Africa = Africa + VentasAnuales(c,6);
end

x= 1:4;
y = [America,AsiaAustralia,Europa,Africa];
plot(x,y,'rx-')