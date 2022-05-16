>>> **Como compilar os execícios ?**

    > Utilizamos o gcc para compilar.
    >  $ gcc PROJ_V2_opemmp.c
    >  $ gcc PROJ_V2_serial.c
>>> **Como executar o programa ?**
    
    > Crie um arquivo .bin para os exercícios e execute o arquivo.
    > $ ./PROJ1_V2_openmp.c
    > $ ./PROJ1_V2_serial.c

>>> **Comprovando que os resultados foram obtidos corretamente.**

    > Primeiramente criamos as variáveis que utilizaremos...
    > A variável T armazena o número final para nossa série de Taylor.
    > Criamos a função Taylor que irá calcular a soma da série de Taylor.
    > Na main criamos 2 variáveis, uma que servirá como variável compartilhada **global_result**
    > A outra armazenará o número de threads que serão utilizadas.
    > aqui iniciamos as ações do openmp, utilizando o #pragma parallel, e passando o número de threads
    
    > A função Taylor é chamada, aqui utilizaremos comandos do omp para pegar o número de threads
    > em seguida utilizaremos estes números para particionar o número o valor de T pelo número de threads.
    > assim, particionamos em partições menores que serão executadas paralelamente.
    > a condição para que os processos encerrem é que o número do denominador,na série de Taylor, seja menor que o número inicial da próxima thread.
    > Por fim, cada thread printa seu "rank" (ou seja, thread 1 of x...) e a soma de sua partição da série de Taylor.
