//MEDIA PONDERADA
//Leia 2 valores reais A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, 
//sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
// Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

int main () {

float nota1, nota2, mediaPonderada;

printf("Bem vindo a calculadora de media ponderada:\n");
printf("Aqui vamos calcular a media ponderada entre duas notas .. \n");
printf("Informe os valores da nota 1 e nota 2:\n");

printf("nota 1 = ");
scanf("%f", &nota1);
printf("\n");

printf("nota 2 = ");
scanf("%f", &nota2);
printf("\n");  

mediaPonderada = (nota1*3.5 + nota2*7.5)/11;

printf("A media ponderada do aluno e: %.2f\n\n", mediaPonderada);
printf("Fim do algoritmo.\n");

    return 0;
}