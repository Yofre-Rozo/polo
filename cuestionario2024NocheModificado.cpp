#include<iostream>  //para 	cout o cin
#include<conio.h>   //para 	getch();
#include<stdlib.h>  //para 	system("PAUSE");
#include<time.h>
using namespace std;
main()
{
	setlocale(LC_CTYPE, "Spanish");
	int Opc, idioma, preg;//sera la opcion de elegir
	int Salir;//indica el momento para salir del programa
	int numeroAleatorio;
	char respuesta,repetir;
	int indiceAleatorio;
	int contap=0,contan=0,contador=0,aleatorio;
	cout <<"\n Seleccione un idioma\n\n1-Español\n2-Ingles\n3-Aleman\n";
	cin>>idioma;	 
	if (idioma==1)
		{ 
		cout<<"Estas en idioma-Español\n";
			do
			{
			contador=contador+1;
			contap=0; contan=0;
			cout<< "Modulos"<<endl;
			cout<< "1)C3 RAP1.CARACTERIZAR LA INFORMACIÓN A RECOLECTAR.\n(Establecer requisitos de la solución)."<<endl;
			cout<< "2)C3 RAP2.INTERPRETAR EL INFORME DE REQUISITOS.\n(Establecer requisitos de la solución)."<<endl;
			cout<< "3)C1 RAP1.RESOLVER PROCESOS LÓGICOS.\n(DESARROLLAR LA SOLUCIÓN DE SOFTWARE)"<<endl;
			cout<< "4)C1 RAP3.CODIFICAR EL SOFTWARE.\n(DESARROLLAR LA SOLUCIÓN DE SOFTWARE)"<<endl;
			cout<< "5)C2 RAP1.CONSTRUIR LA BASE DE DATOS.\n(ADMINISTRAR BASE DE DATOS)."<<endl;
			cout<< "6)C2 RAP2.PROGRAMAR SENTENCIAS SQL.\n(ADMINISTRAR BASE DE DATOS)"<<endl;
			cout<< "7)C1 RAP2.CREAR COMPONENTES FRONT-END\n(DESARROLLAR LA SOLUCIÓN)"<<endl;
			cout<< "8)LENGUAJE DE PROGRAMACION C++"<<endl;
			cout<< "9)Salir"<<endl;
			cout<<"Dame opcion(rango 1-9)"<<endl;
			cin>>Opc;
			switch (Opc) 
				{
				case 1:
					cout<<"CARACTERIZAR LA INFORMACIÓN A RECOLECTAR"<<endl;
					//int aleatorio;
					srand(time(NULL));
					aleatorio=rand()%7;
					switch(aleatorio) 
						{
						case 1:
							cout<<"1-¿Que es programacion?"<<endl;
							cout<<"a)diseñar, depurar, codificar y mantener un codigo"<<endl;
							cout<<"b)Un conjunto de programas"<<endl;
							cout<<"c)Secuencia de operaciones en un determinado orden"<<endl;
							cout<<"d)Se usa para resolver un problema"<<endl;
							cin>>respuesta;
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es ERRONEA"<<endl;
									cout<<"La respuesta es: diseñar, depurar, codificar y mantener un codigo"<<endl;
									contan=contan+1;
								}
						break;	
						case 2:	
							cout<<"2-¿Que es un algoritmo?"<<endl;
							cout<<"a)Es la forma para resolver un problema"<<endl;
							cout<<"b)Un conjunto de criterios para evaluar"<<endl;
							cout<<"c)Una lista de opciones"<<endl;
							cout<<"d)Indica el orden de realizacion"<<endl;
							cin>>respuesta;	
						    if(respuesta=='a')
								{
									cout<<"la respuesta es correcta2"<<endl;
									contap=contap+1;
							    }
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;	
						case 3:
							cout<<"¿3-¿Cuales son las fases del ciclo de vida del Software?"<<endl;
							cout<<"a)Mantenimiento y evolucion, Identificacion de necesidades"<<endl;
							cout<<"b)Validación, analisis y diseño"<<endl;
							cout<<"c)Pruebas y codificacion"<<endl;
							cout<<"d)Todas las anteriores"<<endl;
							cin>>respuesta;	
						    if(respuesta=='d')
							    {
							    	cout<<"la respuesta es correcta3"<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta3"<<endl; 
									contan=contan+1;
							    }
						break; 
						case 4:
					    	cout<<"4-¿Identificacion de Necesidades:¿Cuales son las fases para plantear un problema?"<<endl;
							cout<<"a)Establecer y Listar"<<endl;
							cout<<"b)Validar, Analizar y Diseñar"<<endl;
							cout<<"c)Establecer, Listar, Recabar, Evaluar"<<endl;
							cout<<"d)Ninguna"<<endl;
							cin>>respuesta;
							if(respuesta=='a')
								{
							    	cout<<"la respuesta es correcta"<<endl;	
							    	contap=contap+1;
							    } 
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl;
							    	contan=contan+1;
							    }
						break;    
						case 5:
					    	cout<<"5-¿Que es establecer?"<<endl;
							cout<<"a)Las oportunidades a partir de los criterios que se establezcan"<<endl;
							cout<<"b)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
							cout<<"c)Listar opciones que seran la base de cada oportunidad"<<endl;
							cout<<"d)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
							    	cout<<"la respuesta es correcta"<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl; 
							    	contan=contan+1;	
							    }
						break;    
						case 6:
					    	cout<<"6-¿Que es Listar?"<<endl;
							cout<<"a)Conjunto de criterios para evaluar las oportunidades, si se adecua con requerimiento del cliente"<<endl;
							cout<<"b)Listar opciones que seran la base de cada oportunidad"<<endl;
							cout<<"c)Datos e informacion para cada oportunidad y garantizar una decision"<<endl;
							cout<<"d)Las oportunidades a partir de los criterios que se establezcan"<<endl;
							cin>>respuesta;
							if(respuesta=='b')
								{
							    	cout<<"la respuesta es correcta"<<endl<<endl<<endl;
							    	contap=contap+1;
							    }
							else
								{
							    	cout<<"La respuesta es incorrecta"<<endl<<endl<<endl;
							    	contan=contan+1;	
						    	} 
						break;
					   	default:cout<<"noooooooooooooooooooo";
					   	break;
				    }
				break;					
				case 2: 
					cout<<"INTERPRETAR EL INFORME DE REQUISITOS"<<endl;
					srand(time(NULL));
					aleatorio=rand()%11;
					switch(aleatorio) 
						{
						case 1:	
							cout<<"1-¿Para que sistemas son diseñadas principalmente la mayoría de aplicaciones en  la actualidad?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 2:		 
							cout<<"2-¿Que lenguaje de programacion es comunmente usado para las aplicaciones moviles?"<<endl;
							cout<<"a)Python"<<endl;
							cout<<"b)java"<<endl;
							cout<<"c)C#"<<endl;
							cout<<"d)PHP"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 3:		
							cout<<"3-¿Principalmente para que fueron diseñadas las aplicaciones?"<<endl;
							cout<<"a)Para entretener a las personas"<<endl;
							cout<<"b)Para controlar el sistema operativo de un equipo de computo"<<endl;
							cout<<"c)Para facilitar ciertas tareas complejas y hacer mas sencilla la experiencia informatica de las personas"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 4:		
							cout<<"4-¿Que es una aplicacion movil?"<<endl;
							cout<<"a)Es una aplicacion diseñada para ejecutarse en un dispositivo movil, que puede er un telefono inteligente o tablet"<<endl;
							cout<<"b)Una aplicacion movil es lo mismo que una aplicacion web"<<endl;
							cout<<"c)Es una aplicacion web con gestor de contenidos"<<endl;
							cout<<"d)ninguna de las anteriores"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 5:
							cout<<"5-¿Para que es una aplicacion nativa?"<<endl;
							cout<<"a)Está desarrollada y optimizada específicamente para el sistema operativo determinado y la plataforma de desarrollo del fabricante"<<endl;
							cout<<"b)Sirve para compartir información con otros sistemas operativos "<<endl;
							cout<<"c)Sirven para cargar información en el sistema operativo"<<endl;
							cout<<"d)para  cambiar su contenido, manteniendo el mismo diseño y estilo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 6:	
							cout<<"6-¿las aplicaciones nativas que se usan en celulares se pueden usar en cuantos sistemas operativo?"<<endl;
							cout<<"a)un solo sistema operativo"<<endl;
							cout<<"b)más de 2 sistemas operativos como (Android, iOS y Windows) "<<endl;
							cout<<"c)todos los sistemas operativos."<<endl;
							cout<<"d) la respuesta b y c son correctas."<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 7:	
							cout<<"7-¿Qué tipo de navegador por defecto viene en los dispositivos moviles android?"<<endl;
							cout<<"a)OperaMini"<<endl;
							cout<<"b)Minimo-Mozilla "<<endl;
							cout<<"c)chrome"<<endl;
							cout<<"d)NetFront"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='c')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 8:	
							cout<<"8-¿Qué factor incide en el desarrollo de aplicaciones móviles?"<<endl;
							cout<<"a)Plataforma"<<endl;
							cout<<"b)Sistema Operativo "<<endl;
							cout<<"c)Dispositivo Móvil"<<endl;
							cout<<"d)lenguaje de desarrollo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='a')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 9:	
							cout<<"9-¿Cuales son sistemas operativos de moviles?"<<endl;
							cout<<"a)android"<<endl;
							cout<<"b)windows"<<endl;
							cout<<"c)ios"<<endl;
							cout<<"d)a y c son correctas"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='d')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						case 10:	
							cout<<"10-¿En donde se alojan los aplicativos moviles y su cache?"<<endl;
							cout<<"a)En el dispositivo"<<endl;
							cout<<"b)Aplicativo en la nube cache en el dispositivo"<<endl;
							cout<<"c)Unicamente en la nube"<<endl;
							cout<<"d)Hibridamente mitad nube, mitad dispositivo"<<endl;
							cin>>respuesta;
	 
						    if(respuesta=='b')
								{
							  		cout<<"la respuesta es correcta"<<endl;
							  		contap=contap+1;
						    	}
							else
								{
									cout<<"La respuesta es incorrecta"<<endl; 
									contan=contan+1;
								}
						break;
						default:cout<<"nooooooooommm";
						break;
						}
				break;
				case 3: 
					cout<<"RESOLVER PROCESOS LÓGICOS"<<endl; 
					cout<<"1-¿Cual de las siguientes estructuras de control se usa en c++?"<<endl;
					cout<<"a)cin,cout,if"<<endl;
					cout<<"b)read,write,buy"<<endl;
					cout<<"c)tools,fingers,iqual"<<endl;
					cout<<"d)thing,thought,learn"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2-¿como se dice pantalla en ingles?"<<endl;
					cout<<"a)mouse"<<endl;
					cout<<"b)keyboard"<<endl;
					cout<<"c)screen"<<endl;
					cout<<"d)laptop"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-¿con cual de las siguientes frases se inicia una convresacion en ingles?"<<endl;
					cout<<"a)I am fine"<<endl;
					cout<<"b)it's to late"<<endl;
					cout<<"c)nice to meet you too"<<endl;
					cout<<"d)hi how are you"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"4-¿cual de las siguientes estructuras se usa para establecer tipo cadena en c++?"<<endl;
					cout<<"a)int"<<endl;
					cout<<"b)cout"<<endl;
					cout<<"c)string"<<endl;
					cout<<"d)cin"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-¿como se escribe este numero en ingles 896?"<<endl;
					cout<<"a)eighteen"<<endl;
					cout<<"b)one hundred twenty six"<<endl;
					cout<<"c)fourty five"<<endl;
					cout<<"d)eight hundred ninety six"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}										 
					cout<<"6-¿cuales de los siguientes terminos son indispensables en la programacion?"<<endl;
					cout<<"a)smoke,drink,dance"<<endl;
					cout<<"b)develop,template,toolbar"<<endl;
					cout<<"c)username,password,wifi"<<endl;
					cout<<"d)screen,phone,code"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"7-¿que lenguajes de programacion no son basados en el idioma ingles?"<<endl;
					cout<<"a)phyton,lua,ruby"<<endl;
					cout<<"b)java,c++,phyton"<<endl;
					cout<<"c)c++,php,basic"<<endl;
					cout<<"d)visual basic,swift,ruby"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"8-I from bogota,¿what is my country?"<<endl;
					cout<<"a)Venezuela"<<endl;
					cout<<"b)USA"<<endl;
					cout<<"c)Honduras"<<endl;
					cout<<"d)Colombia"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"9-¿which of these language is for beginners?"<<endl;
					cout<<"a)lpp"<<endl;
					cout<<"b)phyton"<<endl;
					cout<<"c)c++"<<endl;
					cout<<"d)visual basic"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-¿que traduce la siguiente expresion?, how often"<<endl;
					cout<<"a)duracion"<<endl;
					cout<<"b)edad"<<endl;
					cout<<"c)rapidez"<<endl;
					cout<<"d)frecuencia"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}								
				break;
				case 4: cout<< "CODIFICAR EL SOFTWARE."<<endl<<endl;
						cout<< "1-¿cual es el valor de 8942 en binario?"<<endl;
						cout<< "a)10001011101110"<<endl;
						cout<< "b)11001011101011"<<endl;
						cout<< "c)10101011101110"<<endl;
						cout<< "d)11010101010111"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "2-¿cual es el valor del binario 111111?"<<endl;
						cout<< "a)62"<<endl;
						cout<< "b)63"<<endl;
						cout<< "c)64"<<endl;
						cout<< "d)61"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "3-¿cual es el valor en binario de 628?"<<endl;
						cout<< "a)1001011010"<<endl;
						cout<< "b)1111111110"<<endl;
						cout<< "c)1001110100"<<endl;
						cout<< "d)1111100000"<<endl;
						cin>>respuesta;
						
						if(respuesta=='c')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "4-¿cual es el valor en decimal de 11000000111001?"<<endl;
						cout<< "a)123123"<<endl;
						cout<< "b)12345"<<endl;
						cout<< "c)12125"<<endl;
						cout<< "d)12344"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "5-¿cual es el valor en binario de 33?"<<endl;
						cout<< "a)100001"<<endl;
						cout<< "b)101001"<<endl;
						cout<< "c)100100"<<endl;
						cout<< "d)110000"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "6-¿cual es el valor en binario de 42?"<<endl;
						cout<< "a)111010"<<endl;
						cout<< "b)101011"<<endl;
						cout<< "c)110011"<<endl;
						cout<< "d)101010"<<endl;
						cin>>respuesta;
						
						if(respuesta=='d')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "7-¿cual es el valor decimal de 1000010000?"<<endl;
						cout<< "a)529"<<endl;
						cout<< "b)526"<<endl;
						cout<< "c)527"<<endl;
						cout<< "d)528"<<endl;
						cin>>respuesta;
						
						if(respuesta=='d')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "8-¿cual es el valor en decimal de 110011010100?"<<endl;
						cout<< "a)4823"<<endl;
						cout<< "b)3284"<<endl;
						cout<< "c)8234"<<endl;
						cout<< "d)2348"<<endl;
						cin>>respuesta;
						
						if(respuesta=='b')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}
						cout<< "9-¿cual es el valor en binario de 62?"<<endl;
						cout<< "a)111110"<<endl;
						cout<< "b)101111"<<endl;
						cout<< "c)110111"<<endl;
						cout<< "d)111011"<<endl;
						cin>>respuesta;
						
						if(respuesta=='a')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}			
						cout<< "10-¿que es un numero binario?"<<endl;
						cout<< "a)una interpretacion de textos transformada en 1-0"<<endl;
						cout<< "b)son numeros  que representan constantes positivos y negativos"<<endl;
						cout<< "c)son un arreglo de dos caracteres, 1 y 0"<<endl;
						cout<< "d)son el idioma del internet"<<endl;
						cin>>respuesta;
						
						if(respuesta=='c')
							{
						  		cout<<"la respuesta es correcta"<<endl;
						  		contap=contap+1;
					    	}
					    else 
					    	{
					    		cout<<"la respuesta es incorrecta"<<endl;
					    		contan=contan-1;
							}	
			break;		
			case 5:
					cout<<"CONSTRUIR LA BASE DE DATOS "<<endl; 
					cout<<"1-¿Que es Mantenimiento de equipo de computo basico?"<<endl;
					cout<<"a)procedimiento de limpieza  y sustitucion de pieza "<<endl;
					cout<<"b)procedimiento para mantener y programar aplicaciones "<<endl;
					cout<<"c)programa que limpia todo tu pc "<<endl;
					cout<<"d)Todas las anteriores "<<endl;
					cin>>respuesta;
				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta1"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl;
							contan=contan+1;
						}	
							cout<<"2-¿Que herramientas se utilizan para el mantenimiento preventivo ?"<<endl;
							cout<<"a)Espuma limpiadora "<<endl;
							cout<<"b)Desarmadores y Pulsera antiestatica "<<endl;
							cout<<"c)Aire comprimido,borrador y brocha "<<endl;
							cout<<"d)Todas las anteriores"<<endl;
							cin>>respuesta;	
				    if(respuesta=='d')
						{
							cout<<"la respuesta es correcta"<<endl;
							contap=contap+1;
					    }
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
							cout<<"¿3-¿Cual es la manera mas eficas para hacer un mantenimiento ?"<<endl;
							cout<<"a)desconectar el teclado y el mouse "<<endl;
							cout<<"b)salvar los archivos importantes e instalar windows nuevamente"<<endl;
							cout<<"c)limpiar la parte externa"<<endl;
							cout<<"d)Todas son erroneas "<<endl;
							cin>>respuesta;	
				    if(respuesta=='b')
					    {
					    	cout<<"la respuesta es correcta3"<<endl;
					    	contap=contap+1;
					    }
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
					    }
					    	cout<<"4-¿cada cuanto crees que se hace un mantenimiento preventivo?"<<endl;
							cout<<"a)cada 10 años"<<endl;
							cout<<"b)cada que el ordenador presenta fallas "<<endl;
							cout<<"c)cuando se considere necesario para evitar posibles daños"<<endl;
							cout<<"d)cada 3 meses de antelacion que instales programas nuevos "<<endl;
							cin>>respuesta;
					if(respuesta=='c')
						{
					    	cout<<"la respuesta es correcta"<<endl;	
					    	contap=contap+1;
					    } 
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl;
					    	contan=contan+1;
					    }
					    cout<<"5-¿que debo utilizar como refigerante?"<<endl;
							cout<<"a)pasta termica "<<endl;
							cout<<"b)crema de leche "<<endl;
							cout<<"c)crema dental "<<endl;
							cout<<"d)masa refigerante"<<endl;
							cin>>respuesta;
					if(respuesta=='a')
						{
					    	cout<<"la respuesta es correcta"<<endl;
					    	contap=contap+1;
					    }
					else
						{
					    	cout<<"La respuesta es incorrecta"<<endl; 
					    	contan=contan+1;	
					    }
			break;
			case 6:
					cout<<"PROGRAMAR SENTENCIAS SQL. "<<endl; 
					cout<<"1-¿Cuáles son los pilares de la programación orientada a objetos?"<<endl;
					cout<<"a)abstracción, encapsulamiento, polimorfismo y herencia."<<endl;
					cout<<"b)herencia, clases, subclase, encapsulamiento "<<endl;
					cout<<"c)polimorfismo, herencia"<<endl;
					cout<<"d)datos, funcionalidades, polimorfismo"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2-¿Qué significado en (poo) paradigma?"<<endl;
					cout<<"a)Código de programación con una estructura específica"<<endl;
					cout<<"b)Base de datos del usuario"<<endl;
					cout<<"c)Estilo diferente de programar del programador"<<endl;
					cout<<"d)Restricción de datos al usuario"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-¿Que es una superclase en (poo)?"<<endl;
					cout<<"a)Dependencia del programa"<<endl;
					cout<<"b)Creación de nuevas clases"<<endl;
					cout<<"c)En donde se insertan los datos de los usuarios"<<endl;
					cout<<"d)La clase cuyas características se heredan"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"4-¿Que funcionalidad en programación orientada a objetos?"<<endl;
					cout<<"a)Pedir todos de usuario "<<endl;
					cout<<"b)Ordenes programadas en las clases"<<endl;
					cout<<"c)Seguridad del programa"<<endl;
					cout<<"d)Todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-¿Datos = Atributos?"<<endl;
					cout<<"a)Falso"<<endl;
					cout<<"b)Verdadero"<<endl;
					cout<<"c)no se "<<endl;
					cout<<"d)ninguno"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"6-¿Para que nos sirve una clase en poo?"<<endl;
					cout<<"a)Por si sola no nos sirve de nada"<<endl;
					cout<<"b)Para definir un objeto "<<endl;
					cout<<"c)Para aprender"<<endl;
					cout<<"d)Ninguna"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"7-¿Que pilar del poo permite todo lo referente a que un objeto quede aislado dentro de este?"<<endl;
					cout<<"a)Encapsulacion"<<endl;
					cout<<"b)Polimorfismo "<<endl;
					cout<<"c)Abstraccion"<<endl;
					cout<<"d)Herencia"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"8- Polimorfismo se refiere a: "<<endl;
					cout<<"a)Poder modificar algunos datos heredados"<<endl;
					cout<<"b)Representacion de caracteristicas de entidades hacia el mundo exterior, pero ocultando la complejidad"<<endl;
					cout<<"c)Varios objetos de diferentes clases, pero con una base común, se pueden usar de manera indistintal"<<endl;
					cout<<"d)Todas las anteriores"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"9-¿Cual es el concepto verdadero de atributo?"<<endl;
					cout<<"a)Consigue clasificar los tipos de datos (abstracciones) por variedad (ES-UN), acercando un poco más el mundo de la programación al modo de razonar humano, por ejemplo, diremos que Un perro ES_UN animal."<<endl;
					cout<<"b)definen el comportamiento de un objeto: las acciones que puede realizar en función de los eventos que ocurran en su entorno y de su estado actu"<<endl;
					cout<<"c)Es un elemento tangible (ocupa memoria) generado a partir de una definición de clase."<<endl;
					cout<<"d)Se define como la capacidad de una entidad de referenciar distintos elementos en distintos instantes de tiempo."<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-¿cual es la herramientas que permite modelar relaciones entre diferentes entidades?"<<endl;
					cout<<"a)Herencia"<<endl;
					cout<<"b)Encapsulamiento"<<endl;
					cout<<"c)Diagrama de clases"<<endl;
					cout<<"d)Funciones"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
			break;
			case 7: 
					cout<<"CREAR COMPONENTES FRONT-END"<<endl; 
					cout<<"1-¿ 1. Cuál es la política de licenciamiento y propiedad intelectual del software? "<<endl;
					cout<<"a)el software no tiene política de licenciamiento ni de propiedad "<<endl;
					cout<<"b)Concesión de la autorización legal para la fabricación, uso y/o explotación comercial de tecnologías y conocimientos protegidos mediante derechos de propiedad industrial e intelectual"<<endl;
					cout<<"c)Define los términos y condiciones"<<endl;
					cout<<"d)actualizaciones que tenga pendiente el software "<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"		2-¿Cómo se gestionarán los riesgos identificados durante el desarrollo del software?"<<endl;
					cout<<"a)Plan de gestión de riesgos que identifique, evalúe y mitigue los riesgos potenciales que podrían afectar el éxito del proyecto"<<endl;
					cout<<"b)desarrollo de tareas especificas"<<endl;
					cout<<"c)Con tareas operativas diarias y corrigiendo sus errores"<<endl;
					cout<<"d)Con un antivirus "<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"		3-¿Qué procesos se implementarán para la colaboración y comunicación entre el equipo de desarrollo y el cliente?"<<endl;
					cout<<"a)Simplemente se crea el programa y se le muestra al cliente, el decisde si lo toma o lo deja  "<<endl;
					cout<<"b)No dejar de hacer un seguimiento adecuado de las discusiones, decisiones y acciones acordadas durante las interacciones entre el equipo de desarrollo y el cliente "<<endl;
					cout<<"c)Simplemente informar al cliente de como va el programa, puede ser llamada o mensaje de texto  "<<endl;
					cout<<"d)reuniones regulares de revisión de avance, demostraciones de software y canales de comunicación abiertos para garantizar una colaboración efectiva y una comunicación clara entre el equipo de desarrollo y el cliente"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
							cout<<"		4-¿que es el Front-end del software?"<<endl;
					cout<<"a)El front-end se enfoca en el mantenimiento y administración de los servidores de la aplicación "<<endl;
					cout<<"b)una aplicación para interactuar  "<<endl;
					cout<<"c)na aplicación informática o un sistema que interactúa directamente con los usuarios. Es la capa visible y accesible para los usuarios finales, donde pueden interactuar con la aplicación y ver los resultados de sus acciones"<<endl;
					cout<<"d)programa informatico que aprovecha errores para mejorar su desarrollo"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"5-¿Cómo se manejarán los comentarios y sugerencias de los usuarios después del lanzamiento del software?"<<endl;
					cout<<"a)Encuestas y cuestionarios "<<endl;
					cout<<"b)No prestar atención a comentarios del cliente o personas "<<endl;
					cout<<"c)Priorización y seguimiento de comentarios "<<endl;
					cout<<"d)respuesta a y c "<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"6-¿Qué es el enrutamiento en el contexto del desarrollo front-end y por qué es importante para las aplicaciones web de una sola página (SPA)?"<<endl;
					cout<<"a)El enrutamiento front-end guía al usuario entre secciones de una aplicación web sin recargar la página completa, es esencial para las SPAs, permitiendo una navegación fluida al cargar componentes según la URL actual. "<<endl;
					cout<<"b)El enrutamiento en el desarrollo front-end se refiere a la optimización del rendimiento de las aplicaciones web y no tiene relación con la navegación entre diferentes vistas"<<endl;
					cout<<"c)El enrutamiento en el desarrollo front-end es simplemente la asignación de URL a diferentes recursos en una aplicación web y no tiene impacto en la experiencia del usuario.."<<endl;
					cout<<"d)l enrutamiento en el desarrollo front-end es un concepto obsoleto y no es relevante para las aplicaciones web modernas."<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"7-¿Cuál es el propósito de los selectores de CSS y cómo se pueden utilizar para aplicar estilos específicos a los elementos HTML?"<<endl;
					cout<<"a)Los selectores de CSS eligen elementos HTML y aplican estilos. Pueden ser por tipo, clase, ID, atributos o relaciones. Por ejemplo, p selecciona todos los párrafos y aplica estilos definidos en reglas CSS."<<endl;
					cout<<"b)Los selectores de CSS se utilizan para la lógica del lado del cliente y no tienen relación con la aplicación de estilos a elementos HTML."<<endl;
					cout<<"c) Los selectores de CSS se utilizan para la manipulación de datos en JavaScript y no tienen relación con la aplicación de estilos a elementos HTML."<<endl;
					cout<<"d)Los selectores de CSS son exclusivos de lenguajes de programación de servidor y no están relacionados con la aplicación de estilos en el front-end. "<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"8-¿Cuál es la diferencia entre un componente funcional y un componente de clase en React.js?"<<endl;
					cout<<"a)Los componentes funcionales y los componentes de clase en React.js son idénticos en su funcionamiento y uso, solo difieren en la sintaxis de su declaración. "<<endl;
					cout<<"b)Los componentes funcionales son funciones de JavaScript que devuelven JSX para representar la interfaz de usuario, mientras que los componentes de clase son clases de JavaScript que extienden React.Component y tienen estado interno y métodos de ciclo de vida. Aunque ambos tipos pueden realizar las mismas tareas, los funcionales son más simples, tienen mejor rendimiento y son preferidos para componentes sin estado o métodos de ciclo de vida"<<endl;
					cout<<"c)Los componentes funcionales en React.js son más antiguos y están en desuso, mientras que los componentes de clase son la forma moderna y recomendada de definir componentes en React.js."<<endl;
					cout<<"d)Los componentes funcionales en React.js solo se utilizan para representar datos estáticos, mientras que los componentes de clase son necesarios para la manipulación dinámica del estado y la lógica de la aplicación"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"9-Qué es el concepto de estado en React.js y cómo se gestiona dentro de los componentes"<<endl;
					cout<<"a)El estado en React.js se refiere a la ubicación física del componente en el árbol de componentes y se gestiona mediante el uso de propiedades de React como props"<<endl;
					cout<<"b)El estado en React.js es un concepto obsoleto y no se utiliza en el desarrollo moderno de aplicaciones web. "<<endl;
					cout<<"c)El estado en React.js es un objeto JavaScript que almacena información relevante para un componente y puede cambiar con el tiempo, afectando la interfaz de usuario. Se gestiona con setState(), y React.js actualiza automáticamente la interfaz cuando el estado cambia. "<<endl;
					cout<<"d)El estado en React.js se refiere a la capacidad de un componente para almacenar datos de manera temporal, pero no tiene relación con la actualización de la interfaz de usuario."<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
					cout<<"10-¿Qué son las propiedades (props) en React.js y cómo se utilizan para pasar datos entre componentes?"<<endl;
					cout<<"a)Las propiedades (props) en React.js son variables globales que se pueden acceder desde cualquier componente en la aplicación"<<endl;
					cout<<"b)Las propiedades (props) en React.js son un mecanismo para pasar datos de un componente hijo a un componente padre, lo que permite la comunicación inversa entre los componentes. "<<endl;
					cout<<"c)Las propiedades (props) en React.js son exclusivas de los componentes de clase y no se pueden utilizar en componentes funcionales. "<<endl;
					cout<<"d)Las props en React.js son objetos JavaScript para pasar datos de un componente padre a uno hijo, se usan como atributos HTML en JSX y se acceden en el componente hijo mediante this.props. Permiten crear componentes reutilizables y transferir datos entre diferentes partes de la aplicación"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}
			break;
			case 8: 
				cout<<"LENGUAJE DE PROGRAMACION C++"<<endl; 
					cout<<"1-¿Que es C++?"<<endl;
					cout<<"a)Lenguaje de señas"<<endl;
					cout<<"b)Lenguaje de programación considerado como uno de los de mayor nivel en cuanto a posibilidades en el mundo de la manipulación de objetos."<<endl;
					cout<<"c)Lenguaje de programacion para realizar pausas activas"<<endl;
					cout<<"d)a y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"2.¿Que es una base de datos en C++?"<<endl;
					cout<<"a)Alternativa para almacenar y procesar datos a gran escala. "<<endl;
					cout<<"b)Es un archivo que contiene datos"<<endl;
					cout<<"c)Es un disco duro"<<endl;
					cout<<"d)Es un espacio en la nube de almacenamiento"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"3-¿Como funciona el cout y el cin?"<<endl;
					cout<<"a)El cout sirve para cortar y el cin para pegar"<<endl;
					cout<<"b)El cin se utiliza para introducir datos con el operador"<<endl;
					cout<<"c)El cout permite mostrar por pantalla cualquier tipo de dato"<<endl;
					cout<<"d)b y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"4.¿Para que se utilizan las bibliotecas en C++?"<<endl;
					cout<<"a)Sitio para investigar,aprender y leer "<<endl;
					cout<<"b)Para guardar informacion"<<endl;
					cout<<"c)Contienen el código objeto de muchos programas que permiten hacer cosas comunes, como leer el teclado, escribir en la pantalla,etc"<<endl;
					cout<<"d)b y c son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"5-¿cual es la funcion que cumple el if/else?"<<endl;
					cout<<"a)if condición define la condición que determina qué valor se asigna."<<endl;
					cout<<"b)Else expresión define el valor que se asigna si la condición es false. ."<<endl;
					cout<<"c)se utiliza para introducir datos con el operador"<<endl;
					cout<<"d)a y b son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='d')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	 
					cout<<"6.¿Que funcion cumple el char?"<<endl;
					cout<<"a)Se usa para abrir un caso"<<endl;
					cout<<"b)Se usa para almacenar el valor entero de un miembro del juego de caracteres que se puede representar."<<endl;
					cout<<"c)Es un lenguaje de programacion"<<endl;
					cout<<"d)Es un archivo"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"7.¿Para que incluimos el <iostream>?"<<endl;
					cout<<"a)Se usa para que el cout y el cin funcionen"<<endl;
					cout<<"b)Se usa para almacenar un numero"<<endl;
					cout<<"c)Para que lea el programa"<<endl;
					cout<<"d)Para agregar un color a los caracteres"<<endl;
					cin>>respuesta;

				    if(respuesta=='a')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"8.¿Que funcion cumple el endl?"<<endl;
					cout<<"a)Se usa para ejecutar el programa"<<endl;
					cout<<"b)Se usa para compilar el programa"<<endl;
					cout<<"c)Se usa oara acabar la linea y pasar a la siguiente"<<endl;
					cout<<"d)Se usa para terminar el programa"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"9.¿Que funcion cumple el using namespace std?"<<endl;
					cout<<"a)Se usa para abrir un caso"<<endl;
					cout<<"b)Permite tener un alcance directo a todas las funciones declaradas en un espacio de nombres"<<endl;
					cout<<"c)nombre de espacio"<<endl;
					cout<<"d)saturacion de archivos"<<endl;
					cin>>respuesta;

				    if(respuesta=='b')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}	
					cout<<"10.¿Con que funcion declaramos un entero?"<<endl;
					cout<<"a)todas las anteriores"<<endl;
					cout<<"b)con la funcion else"<<endl;
					cout<<"c)int"<<endl;
					cout<<"d)a y b son correctas"<<endl;
					cin>>respuesta;

				    if(respuesta=='c')
						{
					  		cout<<"la respuesta es correcta"<<endl;
					  		contap=contap+1;
				    	}
					else
						{
							cout<<"La respuesta es incorrecta"<<endl; 
							contan=contan+1;
						}						
			break;
			case 9:		cout<<"Algoritmia"<<endl;	 
			break;
			case 11:	cout<<"otrassssss"<<endl;
			break;																		
			case 10: 	cout<< "10)Salir"<<endl;
						exit(0);
			break;
			default:cout<<endl<<endl<<"No hay opciom"<<endl<<endl;
			break;
					//system ("pause");	//getch();	

				}	
			cout<<"  Las respuestas correctas fueron: "<<contap<<endl;
			cout<<"Las respuestas incorrectas fueron: "<<contan<<endl;
			if(contap>=5)
				{
					cout<<"felicitaciones aprobaste el examen"<<endl<<endl;
				}
			else
				{
				if(contador==2)
					{
						repetir='n';
						cout<<"La cantidad de intentos ha terminado tu calificacion es: "<<contap<<" NO aprobaste el examen"<<endl<<endl;
					}
				else
					{
					if(contador<2)
						{
							cout<<"deseas repetir la prueba? s/n"<<endl<<endl;
							cin>>repetir;
						}
					}
				}	
			}
		while((contap<5) && (repetir=='s'));
		}					
	else
		{
		if(idioma==2)
			{
				cout<<"Estas en idioma- Ingles "<<endl;
			}
		else
			{
			if(idioma==3)
				{
					cout<<"Estas en idioma- Aleman "<<endl;
				}	
			else
				{
					cout<<"Estas en idioma- desconocido "<<endl;	
				}
			}
		}
}
