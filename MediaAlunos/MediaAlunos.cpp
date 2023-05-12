#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Portuguese");
	int RA[20];
	float B1[20], B2[20];
	int N = 0, op = 1;
	float na = 0, ne = 0, ndp = 0;
	float sb1 = 0, sb2 = 0, smedia = 0;

	cout << "*******************************************\n";
	cout << "****** PROGRAMA PARA MEDIA DE ALUNOS ******\n";
	cout << "*******************************************\n";

	while (op == 1) {

		cout << "\nDADOS DO " << N + 1 << " ALUNO";
		cout << "\nRA: ";
		cin >> RA[N];
		cout << "\nNota do 1 Bimestre: ";
		cin >> B1[N];
		cout << "\nNota do 2 Bimestre:  ";
		cin >> B2[N];
		N++;


		cout << "\n\n1 - Continuar";
		cout << "\n2 - Encerrar";
		cout << "\nESCOLHA A OPCAO: ";
		cin >> op;
	}

	system("cls");
	cout << "\n RA Nota 1 Nota 2 Media  Situacao";

	for (int i = 0; i < N; i++) {
		float media = (B1[i] + B2[i]) / 2;

		cout << "\n " << RA[i] << " " << B1[i] << " " << B2[i] << "  " << media;

		if (media >= 7.0) {
			cout << " Aprovado";
			na++;
		}
		else if (media <= 4.0) {
			cout << " Exame";
			ne++;
		}
		else {
			cout << " DP";
			ndp++;
		}

		cout << "\n";
		sb1 = sb1 + B1[i];
		sb2 = sb2 + B2[i];
		smedia = smedia + media;
	}

	cout << "\n\n Media do 1 Bimestre: " << sb1 / N;
	cout << "\n Media do 2 Bimestre: " << sb2 / N;
	cout << "\n Media Geral        : " << smedia / N;
	cout << "\n Percentual de Aprovados: " << na / N * 100;
	cout << "\n Percentual de Exames   : " << ne / N * 100;
	cout << "\n Percentual de DPs      : " << ndp / N * 100;

	cout << "\n\n\nProject by Penga\n";
	return 0;

}