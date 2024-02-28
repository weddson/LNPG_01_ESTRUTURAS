import Text.Printf

calculatePi :: Int -> Double
calculatePi n = let
    base = sum [if i `mod` 2 == 0 then -1 / (fromIntegral i) ^ 3 else 1 / (fromIntegral i) ^ 3 | i <- [1..n]]
    pi = cbrt (base * 32)
    in pi

main :: IO ()
main = do
    putStrLn "Qual valor de n?"
    n <- readLn
    let piValue = calculatePi n
    printf "%.5f" piValue
