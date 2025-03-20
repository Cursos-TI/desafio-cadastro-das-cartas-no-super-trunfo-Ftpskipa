#include <stdio.h>
#include <string.h>

// Estrutura com todos os elementos necessários para cadastar uma carta do Super Trunfo
typedef struct
{
	char letraEstado;
	char codigoCarta[4];
	char nomeCidade[51];
	int populacaoCidade;
	float areaCidade;
	float pibCidade;
	int pontosTuristicosCidade;
} Carta;

int main()
{	
	Carta cartas[2];
	
	// Cadastro da primeira carta
	printf("Informe a seguir os dados da sua 1ª carta para o jogo Super Trunfo.\n");
	
	printf("Letra inicial do estado (A-H): ");
	scanf(" %c", &cartas[0].letraEstado);

	printf("Código da carta (ex: %c01): ", cartas[0].letraEstado);
	scanf("%s", cartas[0].codigoCarta);

	printf("Nome da cidade (apenas uma palavra): ");
	scanf("%s", cartas[0].nomeCidade);

	printf("População da cidade %s: ", cartas[0].nomeCidade);
	scanf("%d", &cartas[0].populacaoCidade);

	printf("Área da cidade %s: ", cartas[0].nomeCidade);
	scanf("%f", &cartas[0].areaCidade);

	printf("PIB da cidade %s: ", cartas[0].nomeCidade);
	scanf("%f", &cartas[0].pibCidade);

	printf("Número de pontos turísticos da cidade %s: ", cartas[0].nomeCidade);
	scanf("%d", &cartas[0].pontosTuristicosCidade);

	printf("\n1ª Carta cadastrada com os seguintes dados:\n");
	printf("Estado: %c\n", cartas[0].letraEstado);
	printf("Código: %s\n", cartas[0].codigoCarta);
	printf("Nome da Cidade: %s\n", cartas[0].nomeCidade);
	printf("População: %d\n", cartas[0].populacaoCidade);
	printf("Área: %.2fm²\n", cartas[0].areaCidade);
	printf("PIB: R$%.2f\n", cartas[0].pibCidade);
	printf("Número de pontos turísticos: %d\n\n", cartas[0].pontosTuristicosCidade);

	// Cadastro da segunda carta
	printf("Informe a seguir os dados da sua 2ª carta para o jogo Super Trunfo.\n");
	
	printf("Letra inicial do estado (A-H): ");
	scanf(" %c", &cartas[1].letraEstado);

	printf("Código da carta (ex: %c01): ", cartas[1].letraEstado);
	scanf("%s", cartas[1].codigoCarta);

	printf("Nome da cidade (apenas uma palavra): ");
	scanf("%s", cartas[1].nomeCidade);

	printf("População da cidade %s: ", cartas[1].nomeCidade);
	scanf("%d", &cartas[1].populacaoCidade);

	printf("Área da cidade %s: ", cartas[1].nomeCidade);
	scanf("%f", &cartas[1].areaCidade);

	printf("PIB da cidade %s: ", cartas[1].nomeCidade);
	scanf("%f", &cartas[1].pibCidade);

	printf("Número de pontos turísticos da cidade %s: ", cartas[1].nomeCidade);
	scanf("%d", &cartas[1].pontosTuristicosCidade);

	printf("\n2ª Carta cadastrada com os seguintes dados:\n");
	printf("Estado: %c\n", cartas[1].letraEstado);
	printf("Código: %s\n", cartas[1].codigoCarta);
	printf("Nome da Cidade: %s\n", cartas[1].nomeCidade);
	printf("População: %d\n", cartas[1].populacaoCidade);
	printf("Área: %.2fm²\n", cartas[1].areaCidade);
	printf("PIB: R$%.2f\n", cartas[1].pibCidade);
	printf("Número de pontos turísticos: %d\n\n", cartas[1].pontosTuristicosCidade);
	
	printf("Todas as cartas foram cadastradas com sucesso!\n");

	return 0;
}
