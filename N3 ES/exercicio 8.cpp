/*BubbleSort ele percorre o vetor diversas vezes e a cada vez que ele percorre ele sempre tenta jogar para o topo o maior número encontrado
e por ele um algorítimo de ordem quadrática ele não é tão eficiente e rápido.Exemplo se você tiver um vetor de 4 números na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
ele vai comparar o vet[0]>vet[1]?,não, então nã há trocas, agora ele vai comparar o vet[1]>vet[2]?,sim,
então ele faz a troca vet[1] recebe o conteúdo do vet[2] e o vet[2] recebe o conteúdo do vet[1],resumindo: vet[1]=2 e vet[2]=6.
vet[0]=3
vet[1]=2
vet[2]=6
vet[3]=5
agora ele compara vet[2]>vet[3],sim, então ele realiza a troca ficando então vet[2]=5 e vet[3]=6.Essa
foi a primeira passagem e os vetores ficaram:
vet[0]=3
vet[1]=2
vet[2]=5
vet[3]=6
agora na 2ªpassagem ele verifica o vet[0]>vet[1]?,sim,então eles trocam, assim ordenando o vetor
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6







Insertion Sort ele percorre um vetor de elementos da esquerda para direita e á medida que avança vai deixando os elemtentos mais á 
esquerda ordenados.Exemplo se você tiver um vetor de 4 números na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
o algoritimo vai comparar o vet[0]>vet[1]?,não,enão não há trocas, agora o vet[1]>vet[2]?,sim, então há troca,vet[1]=2 e vet[2]=6
vet[0]=3
vet[1]=2
vet[2]=6
vet[3]=5
então agora que houve uma troca ele compara o vet[1]<vet[0]?,sim, então há uma troca, vet[0]=2 e vet[1]=3, 
vet[0]=2
vet[1]=3
vet[2]=6
vet[3]=5
agora ele compara o vet[2]>vet[3]?,não, então há uma troca,vet[2]=5 e vet[3]=6 e assim finalizando a primeira passagem e já ordenando os npumeros.
(algorítimo bom para vetores pequenos).
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6







Slect Sort é um algorítmo de ordenação que procura passar sempre o menor valor do vetor para a primeira posição.Exemplo se você tiver um vetor de 4 números na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
então o algoritimo irá comparar o vet[0]<[1],sim, então não há trocas,agora ele compara vet[0]<vet[2]?,não,então há troca vet[0]=2 e vet[2]=3.
vet[0]=2
vet[1]=6
vet[2]=3
vet[3]=5
Agora o vet[0] ele passará por todo o vetor até achar alguém menor que ele,porém no nosso caso não tem nimguém menor que o vet[0]=2 então o algorítimo compara o vet[1]<vet[2]?,não,
então há troca, vet[1]=3 e vet[2]=6.
vet[0]=2
vet[1]=3
vet[2]=6
vet[3]=5
Agora ele compara vet[1]<vet[3]?,sim, então não há troca, agora vet[2]<vet[3]?,não, então há troca,vet[2]=5 e vet[3]=6.
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6







MergeSort sua idéia báseca é criar uma sequência ordenada a partir de duas outras também ordenadas.Para isso ele divide a sequência origibal em pares de dados e ordena-as;depois as agrupa em
sequência dividida em apenas 2  partes .Estas 2 partes são então combinadas para se chegar ao resultado final.Exemplo se você tiver um vetor de 4 números na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
o Algorítimo pega o índice do primeiro vetor e soma com o índice do último vetor:nocaso seria ((0+3)/2)=1,5 no caso a gente ignora as casas antes da vírgula e assim o nosso meio seria o índice "1"
e por esse índice o vetor é dividido em 2:
Sub vetor(1):       Subvetor(2):
vet[0]=3             vet[2]=2
vet[1]=6             vet[3]=5 

E agora novamente o algorítimo vai dividir os subvetores em outros subvetores:
Subvetor(1)   Subvetor(2)    Subvetor(3)   Subvetor(4)
vet[0]=3       vet[1]=6       vet[2]=2       vet[3]=5

Agora o algorítimo vai juntar o subvetor(1) com o subvetor(2) e comparar Subvetor(1)<Subvetor(2)?,sim, então não há trocas:
e vai comparar também subvetor(3)<subvetor(4)?,sim, então não há trocas:
Subvetor(1+2)  Subvetor(3+4)
vet[0]=3        vet[2]=2
vet[1]=6        vet[3]=5

Agora ele compara vet[0]<vet[2]?,não, então o vet[2] do Subvetor(1+2) vai para o vet[0] do VetorFinal
VetorFinal
vet[0]=2
agora ele compara vet[0]<vet[3]?,sim, então o vet[0] do Subvetor(1+2) vai para o vet[1] do VetorFinal
VetorFinal
vet[0]=2
vet[1]=3
agora ele comapra vet[1]<vet[3],não, então o vet[3] do Subvetor(1+2) vai para o vet[2] do VetorFinal
e o vet[1] do subvetor(3+4) vai para o vet[3] do vetorfinal
VetorFinal
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6





QuickSort ele escolhe um elemento da lista denominado pivô.
Rearranja a lista de forma que todos os elementos enteriores ao pivô sejam menores que eles, e todos posteriores sejam maiores que ele.ao final do processo o pivô estará em sua posição final e 
haverá duas sublistas não ordenadas. e é recursivamente ordenada a sublista dos elementos menores e a sublista dos elementos maiores a base da recursão são as listas de tamanho 0 ou 1 que estão sempre
ordenadas,o processo é finito, pois a cada iteração pelo menos um elemento é posto em sua posição final e não será mais manipulado na iteração seguinte
Exemplo se você tiver um vetor de 4 números na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5

o algorítimo irá ecolher um vetor aleatório para ser o pivô,no caso o nosso pivô será o "5", então agora ele vai separar e vai colocar todos que são menores que ele do lado esquerdo e todos
que são maiores que ele do lado direito.
começando ele compara vet[0]<vet[3]?,sim, então não há troca.Agora vet[1]<vet[3]?,não, então ele faz a troca o vet[3]=6 e vet[1]=5
vet[0]=3
vet[1]=5
vet[2]=2
vet[3]=6
agora ele compara vet[1]<vet[2]?,não, então há troca, vet[1]=2 e vet[2]=5 
vet[0]=3
vet[1]=2
vet[2]=5
vet[3]=6
agora ele compara vet[0]<vet[1]?,não, então há troca,vet[0]=2 e vet[1]=3.Assim finalizando a ordenação.
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6











