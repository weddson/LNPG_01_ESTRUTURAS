import Text.Printf

main :: IO ()
main = do
    putStrLn "Quantos passageiros?"
    psg <- readLn :: IO Int
    processPassengers psg 1

processPassengers :: Int -> Int -> IO ()
processPassengers total current
    | current > total = return ()
    | otherwise = do
        putStrLn $ printf "O passageiro %d possui 'RG' ou 'Nao possui'?" current
        rg <- getLine
        if rg == "RG"
            then do
                putStrLn $ printf "O passageiro %d possui 'Passagem' ou 'Nao possui'?" current
                passagem <- getLine
                if passagem == "Passagem"
                    then do
                        putStrLn $ printf "Qual a data de nascimento do passageiro %d? No formato DD/MM/AAAA" current
                        dataNascimentoA <- getLine
                        putStrLn $ printf "Qual a data que de nascimento do passageiro %d que consta na passagem? No formato DD/MM/AAAA" current
                        dataNascimentoB <- getLine
                        if dataNascimentoA == dataNascimentoB
                            then do
                                putStrLn $ printf "Qual o assento que consta na passagem do passageiro %d? No formato A12" current
                                assento <- getLine
                                putStrLn $ printf "Seu assento é: %s, tenha um bom dia" assento
                            else
                                putStrLn "190"
                    else
                        putStrLn "A recepcao e nessa direcao"
            else
                putStrLn "A saida e nessa direcao"
        processPassengers total (current + 1)
