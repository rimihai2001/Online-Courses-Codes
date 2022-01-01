input <- readLines('stdin')
x <- as.integer(input[1])
y <- as.integer(input[2])

#define the function
rangeSum <- function(x,y)
{
    suma<-0
    for(a in x:y)
    {
        suma<-suma+a
    }
    return (suma)
}

result <- rangeSum(x, y)
print(result)