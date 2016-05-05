water <- read.csv("waterSells.csv")

book <- read.table("bookSells.txt", header = T, sep = ",")
print(book)

plot(water$income, book$income)
cor.test(water$income, book$income)
line <- lm(water$income ~ book$income)
abline(line)
