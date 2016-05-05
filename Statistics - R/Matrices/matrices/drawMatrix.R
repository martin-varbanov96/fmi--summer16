a <- matrix(1, 10, 10);
contour(a)
persp(a)

a[3:5] <- 0
contour(a)
persp(a)

