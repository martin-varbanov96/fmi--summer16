a <- c(2, 1, 3, 4, 2, 1, 2, 3, 4, 5, 20)

deviation <- sd(a)
print(deviation)

meanValue <- mean(a)
print(meanValue)


barplot(a)
abline(h = meanValue, col = "red")
abline( h = deviation, col = "green")


