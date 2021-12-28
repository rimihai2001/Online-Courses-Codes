x <- read.csv('/usercode/files/titanic.csv')

v <- x[x$Age>=18,]
tapply(v$Pclass, v$Survived, mean)