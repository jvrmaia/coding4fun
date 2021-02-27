module Main where

main = print(sum (map (\n -> 4*(n-2)^2+10*(n-1)) [3,5..1001]) + 1)
