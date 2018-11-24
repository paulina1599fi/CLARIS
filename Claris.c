#include<stdio.h>
#include<math.h>
int a,i,j,k,i2,j2,k2,i3,j3,k3,i4,j4,k4,i5,j5,k5,punto,cruz, mixto, pote, Ce, raiz,sus;
double es;
long va,vb,vc,vd;


void main ()
	{
		printf("\n\t\t\t\t GARCIA VENTURA KARLA PAULINA\n\t\t\t\t CALCLCULO Y GEOMETRIA ANALITICA\n\t\t\t\t PROF. SALGADO RODRIGUEZ J. FRANCISCO\n\t\t\t\t GRUPO: 1105");
		printf("\n\n\tBienvenido Ing. Salgado, mi nombre es Claris y soy un programa creado por su alumna Paulina Garcia  ");
		printf("\n\n\n\tPuedo hacer los siguientes calculos para sus vectores: \n");
		printf("\t 1. Adicion\n");
		printf("\t 2. Sustraccion\n");
		printf("\t 3. Producto escalar(punto)\n");
		printf("\t 4. Producto vectorial (cruz)\n");
		printf("\t 5. Producto mixto\n");
		printf("\t 6. Componente escalar\n");
		printf("\t 7. Salir\n\n");
		printf("\t Seleccione la opcion que desee calcular Ingeniero, y en un momento le dare su resultado: ");
		scanf("%d", &a);

					switch (a) 
					{
						case 1:
							printf("\n\n\t\t\t\t\t\tADICION DE VECTORES\n");
							printf("\n\t Sean los vectores a=(a1,a2,...,an) y b=(b1,b2,...,bn), el vector a+b se obtiene sumando de forma ordenada cada una de las componentes de los vectores a y b.\n");
							printf("\n\t\tDe el vector a (a1,a2,a3)\n",  &va);
							printf("\t\ti="); scanf("%d", &i);
							printf("\t\tj="); scanf("%d", &j);
							printf("\t\tk="); scanf("%d", &k);
							
							printf("\n\t\tDe el vector b (b1,b2,b3)\n",  &vb);
							printf("\t\ti2="); scanf("%d", &i2);
							printf("\t\tj2="); scanf("%d", &j2);
							printf("\t\tk2="); scanf("%d", &k2);
							
							i3=i+i2;
							j3=j+j2;
							k3=k+k2;
							
							printf("\n\t\tLa adicion de tus dos vectores es es: (%ld,%ld,%ld)", i3,j3,k3); 
							
							break;
						case 2:
							printf("\n\n\t\t\t\t\t\tSUSTRACCION DE VECTORES\n");
							printf("\n\t Sean los vectores a=(a1,a2,...,an) y b=(b1,b2,...,bn), el vector a+b se obtiene restando de forma ordenada cada una de las componentes de los vectores a y b.\n");
							printf("\n\t\tDe el vector a (a1,a2,a3)\n",  &va);
							printf("\t\ti="); scanf("%d", &i);
							printf("\t\tj="); scanf("%d", &j);
							printf("\t\tk="); scanf("%d", &k);
							
							printf("\n\t\tDa el vector b (b1,b2,b3)\n",  &vb);
							printf("\t\ti2="); scanf("%d", &i2);
							printf("\t\tj2="); scanf("%d", &j2);
							printf("\t\tk2="); scanf("%d", &k2);
							
							i3=i-i2;
							j3=j-j2;
							k3=k-k2;
							sus=(i3,j3,k3); 
							printf("\n\t\tLa sustraccion de tus dos vectores es: (%ld,%ld,%ld)", i3,j3,k3); 
							
							break;
			            case 3:
			            	printf("\n\n\t\t\t\t\t\tPRODUCTO ESCALAR\n");
							printf("\n\tEl producto escalar de dos vectores se puede construir, tomando la componente de un vector en la dirección del otro vector y multiplicandola por la magnitud del otro vector.\n");
			            	printf("\n\t\tDe el vector a (a1,a2,a3)\n",  &va);
							printf("\t\ti="); scanf("%d", &i);
							printf("\t\tj="); scanf("%d", &j);
							printf("\t\tk="); scanf("%d", &k);
							
							printf("\n\t\tDe el vector b (b1,b2,b3)\n",  &vb);
							printf("\t\ti2="); scanf("%d", &i2);
							printf("\t\tj2="); scanf("%d", &j2);
							printf("\t\tk2="); scanf("%d", &k2);
						
							punto=i*i2+j*j2+k*k2;
														
							printf("\n\t\tEl producto escalar es: %d", punto);
			            
						case 4:
							printf("\n\n\t\t\t\t\t\tPRODUCTO VECTORIAL\n");
							printf("\n\tLa magnitud del producto vectorial de dos vectores es el resultado de multiplicar las magnitudes de cada vector y por el seno del ángulo que forman ambos vectores (< 180 grados) entre ellos. Tambien se obtiene un tercer vector ortogonal a los vectores a y b.\n ");
							printf("\n\t\tDe el vector a (a1,a2,a3)\n",  &va);
							printf("\t\ti="); scanf("%d", &i);
							printf("\t\tj="); scanf("%d", &j);
							printf("\t\tk="); scanf("%d", &k);
							
							printf("\n\t\tDe el vector b (b1,b2,b3)\n",  &vb);
							printf("\t\ti2="); scanf("%d", &i2);
							printf("\t\tj2="); scanf("%d", &j2);
							printf("\t\tk2="); scanf("%d", &k2);
							
							i3=(j*k2-k*j2);
							j3=-(i*k2-k*i2);
							k3=+(i*j2-j*i2);
							
							printf("\n\t\tEL producto vectorial de los vectores es (%di %dj %dk)", i3,j3,k3);

							break;
						
						case 5:
							printf("\n\n\t\t\t\t\t\tPRODUCTO MIXTO\n");
							printf("Dados tres vectores cualesquiera a b y c el punto mixto se define como el escalar. El producto mixto sirve para calcular el volumen de un paralelepipedo.\n");
							printf("\n\t\tDe el vector a (a1,a2,a3)\n",  &va);
							printf("\n\t\ti="); scanf("%d", &i);
							printf("\n\t\tj="); scanf("%d", &j);
							printf("\n\t\tk="); scanf("%d", &k);
							
							printf("\n\t\tDe el vector b (b1,b2,b3)\n",  &vb);
							printf("\n\t\ti2="); scanf("%d", &i2);
							printf("\n\t\tj2="); scanf("%d", &j2);
							printf("\n\t\tk2="); scanf("%d", &k2);
							
							printf("\n\t\tDe el vector c (c1,c2,c3)\n",  &vc);
							printf("\n\t\ti="); scanf("%d", &i4);
							printf("\n\t\tj="); scanf("%d", &j4);
							printf("\n\t\tk="); scanf("%d", &k4);
							
							i3=(j*k2-k*j2);
							j3=-(i*k2-k*i2);
							k3=+(i*j2-j*i2);
							
							mixto =i3*i4+j3*j4+k3*k4;
							
							printf("\nProducto mixto es: %d", mixto);
							
							break;

							
							
						default:
							printf("\n\t\t\t\ VUELVA PRONTO ING. SALGADO");
				
				
				}

return 1;

}
