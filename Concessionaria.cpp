#include<stdio.h>
#include<stdlib.h>
#include<string.h> // utilizada para copiar e comparar as strings na pesquisa
#include<conio.h> //utilizada para usar o getch()
int i=0;  //variavel da estrutura de repetição

struct vrum {
	char modelo[15] ;
	int ano;
	char cor[10];
	float preco;

};
typedef struct vrum carro;
carro vetcarro[20];

void ler(){

printf("\ndigite o modelo do carro\n");
scanf("\n%s",&vetcarro[i].modelo);
printf("\ndigite o ano do carro\n");
scanf("\n%i",&vetcarro[i].ano);
printf("\ndigite a cor do carro\n");
scanf("\n%s",&vetcarro[i].cor);
printf("\ndigite o preco do carro\n");
scanf("\n%f",&vetcarro[i].preco);

i++;
}


void pesquisa_preco(){
    float preco;
printf("\ndigite o preco a ser pesquisado: \n");
scanf("%f",&preco);
for(i=0;i<20;i++){
  if(vetcarro[i].preco == preco){
    printf("\n modelo do carro: %s\n",vetcarro[i].modelo);
    printf("\n ano do carro: %i\n",vetcarro[i].ano);
    printf("\n cor do carro: %s\n",vetcarro[i].cor);


  }

}

}

void pesquisa_marca(){
char modelo[15];
printf("\ndigite a marca a ser pesquisada: \n");
scanf("%s",&modelo);
for(i=0;i<20;i++){
   if (strcmp(vetcarro[i].modelo,modelo) == 0){

    printf("\n preco do carro: %s\n",vetcarro[i].preco);
    printf("\n ano do carro: %i\n",vetcarro[i].ano);
    printf("\n cor do carro: &s\n",vetcarro[i].cor);



   }

   }

}



void pesquisa_carro(){
char marca[15],cor[10];
int ano;
printf("\n preencha os campos para a pesquisa do preco do carro\n");
printf("\n Digite o Modelo: \n");
scanf("%s",&marca);
printf("\n Digite a cor: \n");
scanf("%s",&cor);
printf("\n Digite o ano: \n");
scanf("%i",&ano);

for(i=0;i<20;i++){
	
	if (strcmp(vetcarro[i].modelo,marca) == 0) {
		if (strcmp(vetcarro[i].cor,cor) == 0){
		
		if (vetcarro[i].ano == ano) {
		
		printf("\no preco do carro pesquisado e: %f\n",vetcarro[i].preco);
	}
		}
	
		
}
}



}

int main (){

	int op;

printf("\ndigite a opcao desejada\n");
printf("\n1 - cadastrar carros\n");
printf("\n2 - pesquisar por preco \n");
printf("\n3 - pesquisar por marca\n");
printf("\n4 - pesquisar carro \n");

scanf("\n%i",&op);

switch (op){

	case 1:
		ler ();
		break;

	case 2:
		pesquisa_preco();
		break;


	case 3:
		pesquisa_marca();
		break;

	case 4:
		pesquisa_carro();
		break;

	default:
		printf("\nComando invalido: o programa será encerrado\n\n");
		return 0;

		break;

}
  
    getch ();
    system("cls");

main();

	return 0;
}
