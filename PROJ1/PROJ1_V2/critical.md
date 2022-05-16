# Acesso à região crítica

No nosso projeto, a variável compartilhada é a " **global_result** ".
Neste caso utilizamos o o comando " **#pragma omp critical** " para que não ocorra a condição de corrida,
isto é quando existe a possibilidade de inúmeros resultados imprevisíveis acontecerem durante a execução de mais de uma thread, ao mesmo tempo.
Desta forma, somente uma thread poderá realizar seu bloco de instruções, logo nenhuma outra thread entrará em situação crítica também.
Após realizar todos os processos a soma será armazenada na variável sum e por fim será chegará na variável compartilhada (**global_result**)
que irá somar e acumular os valores recebidos.
