module Main where

import Text.Printf

calculateSalaryAndBonus :: Int -> (Float, Float)
calculateSalaryAndBonus quantidadeJogos = (salario, bonus)
  where
    valorTotal = fromIntegral quantidadeJogos * 19.9
    salario = valorTotal * 0.5
    bonus = fromIntegral (quantidadeJogos `div` 15) * (valorTotal * 0.08)

main :: IO ()
main = do
  putStrLn "Quantos jogos foram vendidos?"
  quantidadeJogos <- readLn
  let (salario, bonus) = calculateSalaryAndBonus quantidadeJogos
  printf "Venda total: %.2f\nValor do salario: %.2f\nValor do bonus: %.2f\n" valorTotal salario bonus
