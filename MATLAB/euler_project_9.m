[a, b] = meshgrid(1:500);
c = 1000 - a - b;
idx = hypot(a,b) == c;
max(a(idx).*b(idx).*c(idx))
