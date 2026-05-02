#include<iostream>
using namespace std;

int main()
{
	int opcion, num, i, cantidad, aciertos = 0, a, b, respuesta;
	char opcion2, opcion3;
	float porcentaje;
	bool seguir = true;

	srand(time(0));
	
	while (seguir)
	{

		system("cls");

		cout << "======BRAIN: Juega a Multiplicar======" << endl;
		cout << "--------------------------------------" << endl;
		cout << "Bienvenido a Brain, un porgrama interactivo hecho para aprender y practicar las tablas de multiplicar." << endl;
		cout << "Podras visualizar cualquier tabla del 1 al 12 o ..." << endl;
		cout << "poner a prueba tus conocimeintos con un desafio de preguntas aleatorias." << endl;
		cout << "Mejora tus habilidades matematicas mientras te diviertes" << endl;
		cout << " " << endl;
		cout << "1. Mostrar Tabla de Multiplicar" << endl;
		cout << "2. Desafio de Tabla de Multiplicar" << endl;
		cout << "3. Salir" << endl;
		cout << " " << endl;
		cout << "Seleccione una opcion: "; cin >> opcion;

		if (opcion == 1)
		{
			cout << "Escoge un numero para ver su tabla de multiplicacion: "; cin >> num;
			for (i = 0; i <= 12; i++)
			{
				cout << num << " x " << i << " = " << num * i << endl;
			}
			system("pause");
	
		}
		else if (opcion == 2)
		{
			do
				{
					cout << "Iniciando juego..." << endl;
					cout << "Cuantas preguntas deseas (5-10): "; cin >> cantidad;

					while (cantidad < 5 || cantidad > 10)
					{
						cout << "Ingresa un numero entre 5 y 10: "; cin >> cantidad;
					}

					for (i = 1; i <= cantidad; i++)
					{
						a = rand() % 12 + 1;
						b = rand() % 12 + 1;

						cout << "Pregunta " << i << ":" << a << "x" << b << "="; cin >> respuesta;

						if (respuesta == a * b)
						{
							cout << "Correcto" << endl; aciertos++;
						}

						else
						{
							cout << "Incorrecto. La respuesta es: " << a + b << endl;
						}

					}

					porcentaje = (aciertos * 100) / cantidad;

					cout << "Aciertos: " << aciertos;
					cout << " ";
					cout << "de";
					cout << " ";
					cout << cantidad << endl;


					if (porcentaje > 65)
					{
						cout << "Felicitaciones" << endl;
					}
					else if (porcentaje >= 50)
					{
						cout << "Vas por buen camino" << endl;
					}

					else
					{
						cout << "Debes practicar mas" << endl;
					}

					cout << "Deseas seguir practicancdo (S/N): "; cin >> opcion3;

			} while (opcion3 == 'S');

			system("pause");

		}
		else if (opcion == 3)
		{
			cout << "Seguro que quiere salir (S/N): "; cin >> opcion2;
			
			if (opcion2 == 'S')
			{
				seguir = false;
			}
			else if (opcion2 == 'N')
			{
				cout << " ";
			}
		}
		else
		{
			cout << "Opcion no valida" << endl;
			system("pause");
		}
	}
}

