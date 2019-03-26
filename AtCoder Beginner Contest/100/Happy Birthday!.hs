module Main where
import System.IO
 
main :: IO ()
main = do
  [a,b] <- map (read :: String -> Int) . words <$> getLine
  if a <= 8 && b <= 8
    then print "Yay!"
    else print ":("