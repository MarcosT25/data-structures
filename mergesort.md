# Algoritmos de ordenação nlogn

## Merge sort

O algoritmo Merge Sort divide a array em várias subarrays e, assim, as resolvem através de recursividade.

O algoritmo recursivo fica dividindo a array na metade até que não possa mais ser dividida. Isso significa que se a array ficar vazia ou com um elemento, a divisão irá parar (encerrar a recursão).

A operação de merge é o processo de pegar duas arrays ordenadas e combiná-las para fazer uma maior.

### Representação em imagem

![Merge Sort](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cc/Merge-sort-example-300px.gif/220px-Merge-sort-example-300px.gif)

### Exemplo

![Ex-1.1](https://media.geeksforgeeks.org/wp-content/uploads/20220525094248/Artboard711-300x150.jpg)

- Essa array de 7 elementos é dividida em duas arrays de tamanho 4 e 3, respectivamente.

![Ex-1.2](https://media.geeksforgeeks.org/wp-content/uploads/20220525094314/Artboard721-300x150.jpg)

- Divide-se repetidamente pela metade cada uma das subarrays até chegar em elementos unitários, ou seja, que não conseguem mais se dividir.

![Ex-1.3](https://media.geeksforgeeks.org/wp-content/uploads/20220525094341/Artboard731-300x150.jpg)

- Agora, começa a juntar os elementos de novo, baseando-se no tamanho dos elementos

- Compare os elementos para cada lista e combine-os em uma nova lista de uma maneira ordenada.

![Ex-1.4](https://media.geeksforgeeks.org/wp-content/uploads/20220525094403/Artboard741-300x150.jpg)

- Ao final, a lista fica:

![Ex-1.5](https://media.geeksforgeeks.org/wp-content/uploads/20220525094459/Artboard751-300x150.jpg)
