#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 2

typedef struct {

    int ddd;
    long int prefixo;
    long int sufixo;


}telefone;


typedef struct {

    int codigo;
    char nome[30];
    char cpf[15];
    char endereco[30];
    char tipo_imovel[30];
    long int valorImovel;
    long int iptu;
    long int valorAlugel;
    telefone tel;



}imovel;


int op=10; //PODE SER QUALQUER NÚMERO DESDE QUE DIFERENTE DE 0.
int i, codigo, x;


int main()
{

    setlocale(LC_ALL, "");

	telefone tel;
    imovel im[tam];



    while(op != 0){



    printf("IMOBILARIA POPULAR \n\n\n");

    printf("\n1 - Cadastrar um imóvel: ");
    printf("\n2 - Imprimir relação de imóveis: ");
    printf("\n3 - Alterar um cadastro: ");
    printf("\n0 - Sair do programa: ");
    printf("\n\nDigite uma opção: ");
    scanf("%d", &op);
    system("cls");


    switch(op){


		case 1:


    	for (i=1; i<=tam; i++) {

					printf("\n\IMÓVEL %d \n\n", i);

					printf("\n\t\tDADOS CADASTRAIS\n\n");

					printf("Código: ");
					 fflush(stdin);
					scanf("%d", &im[i].codigo);

			        printf("Nome do locatário: ");
			        fflush(stdin);
					gets(im[i].nome);

					printf("CPF: ");
			        fflush(stdin);
					gets(im[i].cpf);

					printf("Endereço: ");
			        fflush(stdin);
					gets(im[i].endereco);

					printf("Tipo do imovel: ");
					fflush(stdin);
					gets(im[i].tipo_imovel);

					printf("Valor do Imóvel: ");
					fflush(stdin);
					scanf("%ld", &im[i].valorImovel);

					printf("IPTU: ");
					fflush(stdin);
					scanf("%ld", &im[i].iptu);

					printf("Valor Aluguel: ");
					fflush(stdin);
					scanf("%ld", &im[i].valorAlugel);

			        printf("DDD do Telefone: ");
					fflush(stdin);
					scanf("%d", &im[i].tel.ddd);

					printf("Prefixo do Telefone: ");
					fflush(stdin);
					scanf("%ld", &im[i].tel.prefixo);

					printf("Sufixo do Telefone: ");
					fflush(stdin);
					scanf("%ld", &im[i].tel.sufixo);


					printf("\n\nIMÓVEL CADASTRADO COM SUCESSO!\n");
			        printf("\n\n");
			        system("Pause");

			}//FIM DO FOR CADASTRO DE IMÓVEIS

                        break;

                    case 2:

                    for(i=1; i<=tam; i++){


                printf("Código: %d\n", im[i].codigo);
                printf("Nome: ");
                puts (im[i].nome);
                printf("\nCPF: ");
                puts(im[i].cpf);
                printf("\nEndereço: ");
                puts(im[i].endereco);
                printf("\nTipo de Imóvel: ");
                puts(im[i].tipo_imovel);
                printf("\nValor do imóvel: R$%ld,00 ", im[i].valorImovel);
                printf("\nIPTU: R$%ld,00 ", im[i].iptu);
                printf("\nValor Aluguel: R$%ld,00 ", im[i].valorAlugel);
               	printf("\nTelefone: (%d) %ld-%ld ", im[i].tel.ddd, im[i].tel.prefixo, im[i].tel.sufixo);

				printf("\n\n\n");

            }

                        break;

            case 3:

            printf("Qual o código do imóvel que deseja alterar?: \n");
            scanf("%d", &codigo);

            for(i=1; i<=tam; i++){

				if(im[i].codigo == codigo){

					printf("DIGITE O numero\n\n\n");
	                printf("1 - Alterar Nome: ");
	                printf("\n2 - Alterar CPF: ");
	                printf("\n3 - Alterar Endereço: ");
	                printf("\n4 - Alterar Tipo de Imóvel: ");
	                printf("\n5 - Alterar Valor do imóvel:");
	                printf("\n6 - Alterar IPTU: ");
	                printf("\n7 - Alterar Valor Aluguel: ");
	               	printf("\n8 - Alterar Telefone: ");
	               	scanf("%d", &x);

					if(x == 1){

						printf("Digite o novo nome: ");
						fflush(stdin);
						gets(im[codigo].nome);


					}else if(x==2){

						printf("Digite o novo CPF: ");
						fflush(stdin);
						gets(im[codigo].cpf);


					} else if(x==3){

						printf("Digite o novo Endereço: ");
						fflush(stdin);
						gets(im[codigo].endereco);


					}else if(x==4){

						printf("Digite o novo tipo de imóvel: ");
						fflush(stdin);
						gets(im[codigo].tipo_imovel);



					}else if(x==5){

						long int v1;

						printf("Digite o novo valor do imóvel: ");
						scanf("%ld", v1);
						im[codigo].valorImovel = v1;


					}else if(x==6){

						long int v2;

						printf("Digite o novo valor do IPTU: ");
						scanf("%ld", v2);
						im[codigo].iptu = v2;


					}else if(x==7){

						long int v3;

						printf("Digite o novo valor do Aluguel: ");
						scanf("%ld", v3);
						im[codigo].valorAlugel = v3;


					}else{

						int ddd1;
						long int prefixo1;
						long int sufixo1;

						printf("Digite o novo DDD: ");
						scanf("%d", &ddd1);
						printf("Digite o novo prefixo: ");
						scanf("%ld", &prefixo1);
						printf("Digite o novo sufixo: ");
						scanf("%ld", &sufixo1);

						im[codigo].tel.ddd = ddd1;
						im[codigo].tel.ddd = prefixo1;
						im[codigo].tel.ddd = sufixo1;

					}



				}
			}



            	break;




    } //FIM DO SHITCH

	}//FIM DO WHILE




    return 0;
}
