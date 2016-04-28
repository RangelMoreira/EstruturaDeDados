/*BubbleSort ele percorre o vetor diversas vezes e a cada vez que ele percorre ele sempre tenta jogar para o topo o maior n�mero encontrado
e por ele um algor�timo de ordem quadr�tica ele n�o � t�o eficiente e r�pido.Exemplo se voc� tiver um vetor de 4 n�meros na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
ele vai comparar o vet[0]>vet[1]?,n�o, ent�o n� h� trocas, agora ele vai comparar o vet[1]>vet[2]?,sim,
ent�o ele faz a troca vet[1] recebe o conte�do do vet[2] e o vet[2] recebe o conte�do do vet[1],resumindo: vet[1]=2 e vet[2]=6.
vet[0]=3
vet[1]=2
vet[2]=6
vet[3]=5
agora ele compara vet[2]>vet[3],sim, ent�o ele realiza a troca ficando ent�o vet[2]=5 e vet[3]=6.Essa
foi a primeira passagem e os vetores ficaram:
vet[0]=3
vet[1]=2
vet[2]=5
vet[3]=6
agora na 2�passagem ele verifica o vet[0]>vet[1]?,sim,ent�o eles trocam, assim ordenando o vetor
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6







Insertion Sort ele percorre um vetor de elementos da esquerda para direita e � medida que avan�a vai deixando os elemtentos mais � 
esquerda ordenados.Exemplo se voc� tiver um vetor de 4 n�meros na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
o algoritimo vai comparar o vet[0]>vet[1]?,n�o,en�o n�o h� trocas, agora o vet[1]>vet[2]?,sim, ent�o h� troca,vet[1]=2 e vet[2]=6
vet[0]=3
vet[1]=2
vet[2]=6
vet[3]=5
ent�o agora que houve uma troca ele compara o vet[1]<vet[0]?,sim, ent�o h� uma troca, vet[0]=2 e vet[1]=3, 
vet[0]=2
vet[1]=3
vet[2]=6
vet[3]=5
agora ele compara o vet[2]>vet[3]?,n�o, ent�o h� uma troca,vet[2]=5 e vet[3]=6 e assim finalizando a primeira passagem e j� ordenando os npumeros.
(algor�timo bom para vetores pequenos).
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6







Slect Sort � um algor�tmo de ordena��o que procura passar sempre o menor valor do vetor para a primeira posi��o.Exemplo se voc� tiver um vetor de 4 n�meros na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
ent�o o algoritimo ir� comparar o vet[0]<[1],sim, ent�o n�o h� trocas,agora ele compara vet[0]<vet[2]?,n�o,ent�o h� troca vet[0]=2 e vet[2]=3.
vet[0]=2
vet[1]=6
vet[2]=3
vet[3]=5
Agora o vet[0] ele passar� por todo o vetor at� achar algu�m menor que ele,por�m no nosso caso n�o tem nimgu�m menor que o vet[0]=2 ent�o o algor�timo compara o vet[1]<vet[2]?,n�o,
ent�o h� troca, vet[1]=3 e vet[2]=6.
vet[0]=2
vet[1]=3
vet[2]=6
vet[3]=5
Agora ele compara vet[1]<vet[3]?,sim, ent�o n�o h� troca, agora vet[2]<vet[3]?,n�o, ent�o h� troca,vet[2]=5 e vet[3]=6.
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6







MergeSort sua id�ia b�seca � criar uma sequ�ncia ordenada a partir de duas outras tamb�m ordenadas.Para isso ele divide a sequ�ncia origibal em pares de dados e ordena-as;depois as agrupa em
sequ�ncia dividida em apenas 2  partes .Estas 2 partes s�o ent�o combinadas para se chegar ao resultado final.Exemplo se voc� tiver um vetor de 4 n�meros na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5
o Algor�timo pega o �ndice do primeiro vetor e soma com o �ndice do �ltimo vetor:nocaso seria ((0+3)/2)=1,5 no caso a gente ignora as casas antes da v�rgula e assim o nosso meio seria o �ndice "1"
e por esse �ndice o vetor � dividido em 2:
Sub vetor(1):       Subvetor(2):
vet[0]=3             vet[2]=2
vet[1]=6             vet[3]=5 

E agora novamente o algor�timo vai dividir os subvetores em outros subvetores:
Subvetor(1)   Subvetor(2)    Subvetor(3)   Subvetor(4)
vet[0]=3       vet[1]=6       vet[2]=2       vet[3]=5

Agora o algor�timo vai juntar o subvetor(1) com o subvetor(2) e comparar Subvetor(1)<Subvetor(2)?,sim, ent�o n�o h� trocas:
e vai comparar tamb�m subvetor(3)<subvetor(4)?,sim, ent�o n�o h� trocas:
Subvetor(1+2)  Subvetor(3+4)
vet[0]=3        vet[2]=2
vet[1]=6        vet[3]=5

Agora ele compara vet[0]<vet[2]?,n�o, ent�o o vet[2] do Subvetor(1+2) vai para o vet[0] do VetorFinal
VetorFinal
vet[0]=2
agora ele compara vet[0]<vet[3]?,sim, ent�o o vet[0] do Subvetor(1+2) vai para o vet[1] do VetorFinal
VetorFinal
vet[0]=2
vet[1]=3
agora ele comapra vet[1]<vet[3],n�o, ent�o o vet[3] do Subvetor(1+2) vai para o vet[2] do VetorFinal
e o vet[1] do subvetor(3+4) vai para o vet[3] do vetorfinal
VetorFinal
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6





QuickSort ele escolhe um elemento da lista denominado piv�.
Rearranja a lista de forma que todos os elementos enteriores ao piv� sejam menores que eles, e todos posteriores sejam maiores que ele.ao final do processo o piv� estar� em sua posi��o final e 
haver� duas sublistas n�o ordenadas. e � recursivamente ordenada a sublista dos elementos menores e a sublista dos elementos maiores a base da recurs�o s�o as listas de tamanho 0 ou 1 que est�o sempre
ordenadas,o processo � finito, pois a cada itera��o pelo menos um elemento � posto em sua posi��o final e n�o ser� mais manipulado na itera��o seguinte
Exemplo se voc� tiver um vetor de 4 n�meros na seguinte ordem:
vet[0]=3
vet[1]=6
vet[2]=2
vet[3]=5

o algor�timo ir� ecolher um vetor aleat�rio para ser o piv�,no caso o nosso piv� ser� o "5", ent�o agora ele vai separar e vai colocar todos que s�o menores que ele do lado esquerdo e todos
que s�o maiores que ele do lado direito.
come�ando ele compara vet[0]<vet[3]?,sim, ent�o n�o h� troca.Agora vet[1]<vet[3]?,n�o, ent�o ele faz a troca o vet[3]=6 e vet[1]=5
vet[0]=3
vet[1]=5
vet[2]=2
vet[3]=6
agora ele compara vet[1]<vet[2]?,n�o, ent�o h� troca, vet[1]=2 e vet[2]=5 
vet[0]=3
vet[1]=2
vet[2]=5
vet[3]=6
agora ele compara vet[0]<vet[1]?,n�o, ent�o h� troca,vet[0]=2 e vet[1]=3.Assim finalizando a ordena��o.
vet[0]=2
vet[1]=3
vet[2]=5
vet[3]=6











