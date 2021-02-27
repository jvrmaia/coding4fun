module Main where

square :: Int -> Int
square x = x * x

sum :: [Int] -> Int
sum [x] = x
sum (x:xs) = x + Main.sum xs

collection = [1..100]

main = print (square(Main.sum(collection)) - Main.sum(map square collection))
