# Algoritmos de ordenação

## Selection sort 

Para ver um exemplo em código, acesse [selectionSort.c](https://github.com/MarcosT25/data-structures/blob/main/n2-sorting/selectionSort.c)

O algoritmo Selection Sort fica repetidamente procurando o menor elemento (considerando a ordem crescente) em uma parte ainda não ordenada e coloca no início.

Esse algoritmo mantém **duas arrays** dentro da array dada inicialmente: 

1. Uma subarray já ordenada; 
2. A array restante não ordenada.

Em cada iteração, o menor elemento (considerando a ordem ascendente) da subarray não ordenada é pego e movido para a subarray ordenada.

### Exemplo
Dada a array = [64, 25, 12, 22, 11], deve-se encontrar o menor elemento em array[0 ... 4], e colocá-lo no início.

[11, 25, 12, 22, 64]. Agora, busca-se o menor elemento em array[1 ... 4].

[11, 12, 25, 22, 64]. Busca o menor em array[2 ... 4].

[11, 12, 22, 25, 64]. Busca o menor elemento em array[3 ... 4].

E para a última busca, a array se mantém como está, pois 25 < 64.

### Representação em imagem

![Selection Sort](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

## Insertion Sort

O algoritmo Insertion Sort também ordena a array de forma crescente, no entanto, constrói a array final com uma inserção por vez.

Percorre-se a array a partir da posição 1 e compara a array com a subarray ordenada à esquerda daquela posição.


### Exemplo
Dada a array = [4, 3, 2, 10, 12, 1, 5, 6]

Começa olhando a posição 1, e vê onde aquele elemento se encaixa na array ordenada à esquerda.

[4 **|** 3, 2, 10, 12, 1, 5, 6] 

[3, 4 **|** 2, 10, 12, 1, 5, 6]

[2, 3, 4 **|** 10, 12, 1, 5, 6]

[2, 3, 4, 10 **|** 12, 1, 5, 6]

[2, 3, 4, 10, 12 **|** 1, 5, 6]

[1, 2, 3, 4, 10, 12 **|** 5, 6]

[1, 2, 3, 4, 5, 10, 12 **|** 6]

Assim, array final fica:

[1, 2, 3, 4, 5, 6, 10, 12]

### Representação em imagem

![Insertion Sort](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0f/Insertion-sort-example-300px.gif/220px-Insertion-sort-example-300px.gif)


## Bubble Sort

Bubble Sort é o algoritmo de ordenação mais simples. Funciona trocando repetidamente os elementos adjacentes se eles estiverem na ordem errada, ou seja, vai comparando de dois em dois.

### Exemplo

Dada a array = [5, 3, 8, 4, 6]

[5, 3 **|** 8, 4, 6] Compara o 1º com o 2º, e troca.

[3 **|** 5, 8 **|** 4, 6] Compara o 2º com o 3º, e não troca.

[3, 5 **|** 8, 4 **|** 6] Compara o 3º e o 4º, e troca.

[3, 5, 4 **|** 8, 6] Compara o 4º e o 5º, e troca.

A array resultante da primeira iteração é: [3, 5, 4, 6, 8], que ainda não está ordenada.

Depois, é feita novas iterações até que a array esteja corretamente ordenada. A array final fica:

[3, 4, 5, 6, 8]

### Representação em imagem

![Bubble Sort](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif?20131109191607)
