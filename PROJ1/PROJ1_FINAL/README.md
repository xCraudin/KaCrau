>>> **Como compilar os execícios ?**

    > Utilizamos o gcc para compilar.
    >  $ gcc PROJ_FINAL_reduction.c

>>> **Como executar o programa ?**
    
    > Crie um arquivo .bin para os exercícios e execute o arquivo.

    > $ ./PROJ1_FINAL_reduction.c

>>> **Comprovando que os resultados foram obtidos corretamente.**

    > Primeiramente criamos as variáveis que utilizaremos...
    > A variável T armazena o número final para nossa série de Taylor.
    > Criamos a função Taylor que irá calcular a soma da série de Taylor.
    > Na main criamos 2 variáveis, uma que servirá como variável compartilhada **global_result**
    > A outra armazenará o número de threads que serão utilizadas.
    > Em seguida chamamos a função reduction passando a operação soma como parametro.
    > Por fim chamamos a função taylor e somamos os valores na variável global_result_p

  >  **ENTREGA FINAL**

  > Na nossa entrega final utilizamos o código que apresentou a melhor performance possível, no caso, o método reduction.

**OUTROS MÉTODOS TESTADOS**

  > Mas este não o único método que tentamos, fizemos algumas tentativas usando critical (OMP), porém o desempenho foi menor do que usando reduction
  > Também tentamos utilizar pthreads, porém tivemos dificuldades rodando o código e não conseguimos fazê-lo chegar num resultado.
  > Tentamos calcular com + de 4 threads, porém o tempo de execução é maior, portanto, menos eficiente.
  > Além disso também tivemos problemas em rodar o código com 10^10 ou mais


  > **SPEEDUP** 

  > O tempo foi calculado usando a função time:

  $ time ./reduction 4

  > As condições para realizar os testes foram:

> 4 threads
> T = 10^9

  > Tempo Serial:03,273s

  > Tempo Paralelo(OMP):01,153s

  > Tempo Paralelo(Reduction):01,164s

**SPEEDUP: (Ts/Tp) =>  3,273/1,164 => 2,811855670103093**

