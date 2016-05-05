info <- read.csv("Bi20.csv")
str(info$X.01)
i = 1
sum = 0
for (var in info$X.05){
  if(i < 3){
    sum = sum + var
  }
  i = i + 1    
}
print(var)

