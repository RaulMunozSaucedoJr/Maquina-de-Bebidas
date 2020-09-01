//Programa: Maquina Expendedora de Bebidas

//Setencias usadas//
//switch:Esta sentencia permite seleccionar las acciones a realizar de acuerdo al valor que tome una variable.
//Switch: Es una estructura de control que se utiliza para agilizar la toma de decisiones multiples.
//if: Sentencia usada para hacer comparaciones.
//Case: Sentencia usada para identificar los diferentes casos o opciones dentro de nuestro programa.
//

#include <stdio.h> //Bibliotecas
#include <stdlib.h> //Bibliotecas

main(void)
{

int a,b,c,d,be,otra; //Declaracion

 printf(" \n"); //Salto de Linea
 printf("    **    AUTOMATA EXPENDEDORA DE BEBIDAS ALCOHOLICAS      **\n"); //Nombre del programa.		
                              printf(" \n"); //Salto de Linea
 selec: //Menu de Seleccion de bebidas
 printf("Que bebida desea?  1.Tequila  2.Vodka  3.Tonayan  4.Mezcal\n"); //Se imprimen en pantalla las opciones a escoger
 scanf("%i", &be);fflush(stdin); //Ayuda a limpiar el buffer de entrada del teclado.
   printf(" \n"); //Salto de linea.


   switch(be) //Esta sentencia permite seleccionar las acciones a realizar de acuerdo al valor que tome una variable.
{
 case 1: { printf("Son 100 Creditos: \n"); //Nos indica que en el caso de la Coca Cola son 100 pesos
        scanf("%i",&b);fflush(stdin); //Ayuda a limpiar el buffer de entrada del teclado.
        
         	//Aqui comparamos los creditos introducidos con los que pida la maquina.
         	
		 a=b;
             if(b<100)
			{  //Inicia el if b
               c=0;
		 	//Aqui observamos que si introducimos una cantidad menor a la que se indica se desplegara un mensaje diciendonos que faltan creditos.
               falta:
               printf("Faltan %i creditos:\n",100-a);
               scanf("%i", &c); fflush(stdin); //Ayuda a limpiar el buffer de entrada del teclado.
               b=a;
               a=c+b;          
			} //Termina el if b

              switch (a) 
			{//Inicia switch

              case 100:
			{
              printf(" \n");
              printf("  Usted ha introdicido todo el dinero\n"); //Se imprime en pantalla que el usuario a introducido el dinero requerido por la maquina.
              goto pagado; //Aqui se indica que si esta pagado nos mande un mensaje.
			}
              break;

              default: 
			{
                    if (a>100) 
					{
                       printf(" \n"); //Salto de linea
                       printf(" Usted ha introdicido todo el dinero\n"); //Se imprime en pantalla que el usuario introdujo el dinero requerido por la maquina,
                       printf(" \n"); //Salto de Linea
                       printf(">>>>Su vuelta: %i creditos<<<<\n", a-100); //Se imprime en pantalla nuestro cambio del dinero introducido anteriormente
                       goto pagado; //Nos manda a pagado y nos entrega el producto.
					}
                    else //Si no hemos pagado introducido el dinero requerido nos mandara a falta dinero.
					{
                       goto falta; 
					} 
			}

				pagado:
                printf(" \n"); //Salto de Linea
                printf(" ^^Gracias ^^\n"); //Se imprime en pantalla un mensaje agradeciendo nuestra compra.
                printf(" \n"); //Salto de Linea
                printf("       Aqui esta su Tequila\n"); //Se imprime en pantalla mensaje dandonos nuestra bebida.
                printf(" \n");  //Salto de Linea
			}//case


 		 }
 break;
 case 2:
 { printf("Son 120 Creditos: \n");
        scanf("%i",&b);fflush(stdin); //Ayuda a limpiar el buffer de entrada del teclado.
         a=b;
             if(b<120)
			{
               c=0;

               falta1:

               printf("Faltan %i creditos:\n",120-a);
               scanf("%i", &c); fflush(stdin); //Ayuda a limpiar el buffer de entrada del teclado.
               b=a;
               a=c+b;          
			} //if b

              switch (a) 
			{

              case 120: //Costo de Vodka. 
			{ //Inicia Case 120
              printf(" \n"); //Salto de Linea.
              printf("  Usted ha introdicido todo el dinero\n");
              goto pagado1; //Ir a estado pagado1
			} //Termina Case 120
              break;

              default:
			{
                    if (a>120) 
					{
                       printf(" \n");
                       printf(" Usted ha introdicido todo el dinero\n");
                       printf(" \n");
                       printf("     >>>>Su vuelta: %i creditos<<<<\n", a-120);
                       goto pagado1;
					}
                    else 
					{
                       goto falta1; 
					} 
			}
				pagado1:
                printf(" \n");
                printf(" \n");
                printf("            ^^Gracias ^^\n");
                printf(" \n");
                printf(" \n");
                printf("       Aqui esta su Vodka\n");
                printf(" \n");  
			}//case
			
//			
			
 }
  break;
 case 3:
  { printf("Son 70 Creditos: \n");
        scanf("%i",&b);fflush(stdin);
         a=b;
             if(b<70)
			{
               c=0;

               falta2:

               printf("Faltan %i creditos:\n",70-a);
               scanf("%i", &c); fflush(stdin);
               b=a;
               a=c+b;          
			} //if b

              switch (a) 
			{

              case 70: 
			{
              printf(" \n");
              printf("  Usted ha introdicido todo el dinero\n");
              goto pagado2;
			}
              break;

              default: 
			{
                    if (a>70) 
					{
                       printf(" \n");
                       printf(" Usted ha introdicido todo el dinero\n");
                       printf(" \n");
                       printf(" >>>>Su vuelta: %i creditos<<<< \n", a-70);
                       goto pagado2;
					}
                    else 
					{
                       goto falta2; 
					} 
			}
//

				pagado2:
                printf(" \n");
                printf("^^ Gracias ^^\n");
                printf(" \n");
                printf("Aqui esta su Tonayan\n");
                printf(" \n");  
			}//case


 }
  break;
  
  //
  
 case 4:
  { printf("Son 60 Creditos: \n");
        scanf("%i",&b);  fflush(stdin);
         a=b;
             if(b<60)
			{
               c=0;

               falta3:

               printf("Faltan %i creditos:\n",60-a);
               scanf("%i", &c); fflush(stdin);
               b=a;
               a=c+b;          
			} //if b

              switch (a) 
			{

              case 60: 
			{
              printf(" \n");
              printf("  Usted ha introdicido todo el dinero\n");
              goto pagado3;
			}
              break;

              default: 
			{
                    if (a>60) 
					{
                       printf(" \n");
                       printf(" Usted ha introdicido todo el dinero\n");
                       printf(" \n");
                       printf("     >>>>Su vuelta: %i creditos<<<<\n", a-60);
                       goto pagado3;
					}
                    else 
					{
                       goto falta3;
					} 
			}

//

                pagado3:
                printf(" \n");
                printf(" \n");
                 printf("^^Gracias ^^\n");
                 printf(" \n");
                 printf(" \n");
                 printf("Aqui esta su MEzcal\n");
                 printf(" \n");  }//case


 }
  break;

 default:
  printf("Seleccione una bebida.\n");
  goto selec;
}
 printf(" \n");
 printf(" \n");
 printf("Desea otra bebida?: 1.Si   2.No\n"); //Se imprime en pantalla si queremos escoger otra bebida.
 scanf("%i", &otra);  fflush(stdin); //Ayuda a limpiar el buffer de entrada del teclado.
   switch(otra)
{
     case 1: {goto selec; }
     break;
     default:

//

 printf(" \n");
 printf("����ADIOS����\n");
printf(" \n");
 system("pause\n");
 }

}//Termina el programa
