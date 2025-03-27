#include <stdio.h>
#include <string.h>

// Estrutura com todos os elementos necessários para cadastar uma carta do Super Trunfo
typedef struct
{
	char letraEstado;
	char codigoCarta[4];
	char nomeCidade[51];
	unsigned long int populacao;
	float area;
	float pib;
	int pontosTuristicos;
	float densidadePopulacional;
	float pibPerCapita;
	float superPoder;

} Carta;

int main() 
{	
	int quantidadeCartas = 2; // Quantidade de cartas a serem cadastradas

	Carta cartas[quantidadeCartas];
	
	int i = 0;
	while (i < quantidadeCartas)
	{
		char confirmacao = 'n'; //  
		int cartaNumero = i + 1;
			
		printf("Informe a seguir os dados da sua %dª carta para o jogo Super Trunfo.\n", cartaNumero);
	
		printf("Letra inicial do estado: ");
		scanf(" %c", &cartas[i].letraEstado);

		printf("Código da carta (ex: %c01): ", cartas[i].letraEstado);
		scanf("%3s", cartas[i].codigoCarta);

		printf("Nome da cidade (apenas uma palavra): ");
		scanf("%50s", cartas[i].nomeCidade);

		printf("População da cidade %s: ", cartas[i].nomeCidade);
		scanf("%lu", &cartas[i].populacao);

		printf("Área da cidade %s em km²: ", cartas[i].nomeCidade);
		scanf("%f", &cartas[i].area);

		printf("PIB da cidade %s em bilhões de reais: ", cartas[i].nomeCidade);
		scanf("%f", &cartas[i].pib);

		printf("Número de pontos turísticos da cidade %s: ", cartas[i].nomeCidade);
		scanf("%d", &cartas[i].pontosTuristicos);

		printf("\n%dª Carta cadastrada com os seguintes dados:\n", cartaNumero);
		printf("Estado: %c\n", cartas[i].letraEstado);
		printf("Código: %s\n", cartas[i].codigoCarta);
		printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
		printf("População: %lu\n", cartas[i].populacao);
		printf("Área: %.2f km²\n", cartas[i].area);
		printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
		printf("Número de pontos turísticos: %d\n", cartas[i].pontosTuristicos);
	
		//Cálculo da densidade populacional
		cartas[i].densidadePopulacional = cartas[i].populacao / cartas[i].area;
		printf("Densidade populacional: %.2f hab/km²\n", cartas[i].densidadePopulacional);	
		
		//Cálculo do pib per capita
		cartas[i].pibPerCapita = (cartas[i].pib * 1000000000) / cartas[i].populacao;
		printf("Pib per capita: %.2f reais\n", cartas[i].pibPerCapita);
		
		//Cálculo do Super Poder
		cartas[i].superPoder = (float)cartas[i].populacao + cartas[i].area + (cartas[i].pib * 1000000000) + (float)cartas[i].pontosTuristicos + cartas[i].pibPerCapita + (1 / cartas[i].densidadePopulacional);
		printf("Super poder: %.2f\n", cartas[i].superPoder);

		 // Loop para verificar se digitou outra opção além de 's' e 'n' na confirmação do registro da carta
		do
		{
			if (confirmacao !='s' && confirmacao !='n')
				printf("Opção inválida!\n");

			printf("\nConfirma os dados? (s/n): ");
			scanf(" %c", &confirmacao);
		} while (confirmacao !='s' && confirmacao !='n');
		
		i++;
		
		if (confirmacao == 'n')  
			 i--;
	}

	printf("Todas as cartas foram cadastradas com sucesso!\n\n");

	printf("Comparação de cartas:\n");
	
	printf("População: Carta %d venceu (%d)\n",
			2 - (cartas[0].populacao > cartas[1].populacao),
			cartas[0].populacao > cartas[1].populacao);
	
	printf("Área: Carta %d venceu (%d)\n",
			2 - (cartas[0].area > cartas[1].area),
			cartas[0].area > cartas[1].area);
	
	printf("Pib: Carta %d venceu (%d)\n",
			2 - (cartas[0].pib > cartas[1].pib),
			cartas[0].pib > cartas[1].pib);
	
	printf("Pontos turísticos: Carta %d venceu (%d)\n",
			2 - (cartas[0].pontosTuristicos > cartas[1].pontosTuristicos),
			cartas[0].pontosTuristicos > cartas[1].pontosTuristicos);
	
	printf("Densidade populacional: Carta %d venceu (%d)\n",
			2 - (cartas[0].densidadePopulacional < cartas[1].densidadePopulacional),
			cartas[0].densidadePopulacional < cartas[1].densidadePopulacional);
	
	printf("Pib per capita: Carta %d venceu (%d)\n",
			2 - (cartas[0].pibPerCapita > cartas[1].pibPerCapita),
			cartas[0].pibPerCapita > cartas[1].pibPerCapita);
	
	printf("Super poder: Carta %d venceu (%d)\n",
			2 - (cartas[0].superPoder > cartas[1].superPoder),
			cartas[0].superPoder > cartas[1].superPoder);

	return 0;
}
