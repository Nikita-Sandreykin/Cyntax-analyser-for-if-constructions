#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int matrix[25][14] =
{
	24, 1,  5, 12, 24, 24, 24, 24, 24, 15, 21, 24, 23, 25, // 0
	2, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 1
	24, 24, 24, 24, 24, 24, 24, 24, 24, 3, 24, 24, 23, 25, // 2
	24, 24, 24, 4, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 3
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 4
	24, 24, 24, 6, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 5
	24, 24, 24, 24, 7, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 6
	8, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 7
	24, 24, 24, 24, 24, 24, 24, 24, 9, 24, 24, 24, 23, 25, // 8
	24, 24, 24, 24, 24, 24, 10, 24, 24, 24, 24, 24, 23, 25, // 9
	24, 24, 24, 24, 24, 24, 24, 11, 24, 24, 24, 24, 23, 25, // 10
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 11
	24, 24, 24, 24, 24, 13, 24, 24, 24, 24, 24, 24, 23, 25, // 12
	24, 24, 14, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 13
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 14
	24, 24, 24, 16, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 15
	24, 24, 24, 24, 24, 24, 17, 24, 24, 24, 24, 24, 23, 25, // 16
	24, 24, 24, 18, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 17
	24, 19, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 18
	24, 24, 24, 24, 24, 24, 24, 20, 24, 24, 24, 24, 23, 25, // 19
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 20
	22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 21, 22, 23, 25, // 21
	22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 23, 25, // 22
	24, 1, 5, 12, 24, 24, 24, 24, 24, 15, 21, 24, 23, 25, // 23
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 25, // 24
};
int matrix2[30][12]
{
	1, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 0, //0
	29, 29, 29, 29, 29, 2, 29, 29, 29, 2, 29, 1, //1
	29, 29, 29, 29, 29, 29, 29, 3, 29, 29, 29, 2, //2
	29, 29, 29, 29, 29, 4, 29, 29, 29, 4, 29, 3, //3
	29, 29, 29, 29, 5, 29, 29, 3, 29, 29, 29, 4, //4
	29, 29, 29, 29, 29, 6, 29, 29, 29, 29, 29, 5, //5
	29, 29, 29, 29, 29, 29, 29, 29, 29, 7, 29, 6, //6
	29, 29, 29, 29, 29, 29, 29, 29, 8, 29, 29, 7, //7
	29, 29, 29, 29, 29, 9, 29, 29, 29, 9, 29, 8, //8
	29, 29, 29, 29, 29, 29, 29, 10, 29, 29, 29, 9, //9
	29, 29, 29, 29, 29, 11, 29, 29, 29, 11, 29, 10, //10
	29, 12, 30, 29, 29, 29, 29, 10, 29, 29, 29, 11, //11
	29, 29, 29, 22, 13, 29, 29, 29, 29, 29, 29, 12, //12
	29, 29, 29, 29, 29, 14, 29, 29, 29, 29, 29, 13, //13
	29, 29, 29, 29, 29, 29, 29, 29, 29, 15, 29, 14, //14
	29, 29, 29, 29, 29, 29, 29, 29, 16, 29, 29, 15, //15
	29, 29, 29, 29, 29, 17, 29, 29, 29, 17, 29, 16, //16
	29, 29, 29, 29, 29, 29, 29, 18, 29, 29, 29, 17, //17
	29, 29, 29, 29, 29, 19, 29, 29, 29, 19, 29, 18, //18
	29, 29, 29, 29, 29, 29, 29, 18, 29, 29, 20, 19, //19
	29, 21, 29, 29, 29, 29, 29, 29, 29, 29, 29, 20, //20
	29, 29, 30, 22, 29, 29, 29, 29, 29, 29, 29, 21, //21
	29, 29, 29, 29, 29, 29, 29, 29, 29, 23, 29, 22, //22
	29, 29, 29, 29, 29, 29, 29, 29, 24, 29, 29, 23, //23
	29, 29, 29, 29, 29, 25, 29, 29, 29, 25, 29, 24, //24
	29, 29, 29, 29, 29, 29, 29, 26, 29, 29, 29, 25, //25
	29, 29, 29, 29, 29, 27, 29, 29, 29, 27, 29, 26, //26
	29, 29, 29, 29, 29, 29, 29, 26, 29, 29, 28, 27, //27
	29, 29, 30, 29, 29, 29, 29, 29, 29, 29, 29, 28, //28
	29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29 //29
};
char current_lex;
int get_syn_matrix_col()
{
	if (current_lex == 'U') return 0;
	if (current_lex == 'I') return 1;
	if (current_lex == 'O') return 2;
	if (current_lex == 'L') return 3;
	if (current_lex == 'E') return 4;
	if (current_lex == 'V') return 5;
	if (current_lex == 'W') return 6;
	if (current_lex == 'A') return 7;
	if (current_lex == 'C') return 8;
	if (current_lex == 'Y') return 9;
	if (current_lex == 'J') return 10;
	if (current_lex == 'Z') return 11;
}
int lexem_syn;
void lexem_analysis_syn()
{
	if (lexem_syn != 30) lexem_syn = matrix2[lexem_syn][get_syn_matrix_col()];
	else lexem_syn = matrix2[0][get_syn_matrix_col()];
}
char* text;
char* lexem_list;
int size_of_list;
int lexem;
vector<char> analys_word;
vector<char> syn_lex;
vector<char> word;
vector<int> fin;
vector<int> position;
char current_char;
int GetMatrixCol()
{
	if (current_char == 'a') return 0;
	if (current_char == 'c') return 1;
	if (current_char == 'd') return 2;
	if (current_char == 'e') return 3;
	if (current_char == 'f') return 4;
	if (current_char == 'n') return 5;
	if (current_char == 'l') return 6;
	if (current_char == 't') return 7;
	if (current_char == 'u') return 8;
	if (current_char == 's') return 9;
	if ('0' <= current_char && current_char <= '9') return 10;
	if (current_char == '<' || current_char == '>' || current_char == '=' || current_char == '-' || current_char == '+' || current_char == '[' || current_char == ']') return 12;
	if (current_char == ' ' || current_char == '\n' || current_char == '\r' || current_char == 10) return 13;
	return 11;
}
void lexem_analysis()
{
	if (lexem != 25) lexem = matrix[lexem][GetMatrixCol()];
	else lexem = matrix[0][GetMatrixCol()];
}
void analysis()
{
	for (int i = 0; i < size_of_list + 1; i++)
	{
		if (lexem_list[i] != 'Z' && lexem_list[i] != 'X' && text[i] != -51)
		{
			analys_word.push_back(lexem_list[i]);
			word.push_back(text[i]);
		}
		else
		{
			if (analys_word.size() != 0)
			{
				if (analys_word[analys_word.size() - 1] == 'O')
				{
					syn_lex.push_back('O');
					position.push_back(analys_word.size());
				}
				if (analys_word[analys_word.size() - 1] == 'L')
				{
					syn_lex.push_back('L');
					position.push_back(analys_word.size());
				}
				if (analys_word[analys_word.size() - 1] == 'U')
				{
					syn_lex.push_back('U');
					position.push_back(analys_word.size());
				}
				if (analys_word[analys_word.size() - 1] == 'E')
				{
					syn_lex.push_back('E');
					position.push_back(analys_word.size());
				}
				if (analys_word[analys_word.size() - 1] == 'V')
				{
					syn_lex.push_back('V');
					position.push_back(analys_word.size());
				}
				if (analys_word[analys_word.size() - 1] == 'W')
				{
					syn_lex.push_back('W');
					position.push_back(analys_word.size());
				}
				if (analys_word[analys_word.size() - 1] == 'Y')
				{
					syn_lex.push_back('Y');
					position.push_back(analys_word.size());
				}
				analys_word.clear();
				word.clear();
			}
			if (lexem_list[i] == 'X')
			{
				if (text[i] == '-' || text[i] == '+') { syn_lex.push_back('A'); position.push_back(1); }
				if (text[i] == '=')
				{
					syn_lex.push_back('C'); position.push_back(1);
				}
				if (text[i] == '[') { syn_lex.push_back('I'); position.push_back(1); }
				if (text[i] == ']') { syn_lex.push_back('J'); position.push_back(1); }
			}
			if (lexem_list[i] == 'Z') { syn_lex.push_back('Z'); position.push_back(1); }

		}
	}
}
char converting_lexem()
{
	char lex;
	lex = lexem + 'A'; //E, L, O, U - лексемы для ключевых слов; V - лексема констант; W - лексема ошибочного индентификатора; X - лексема символов; Y - лексема идентефикаторов; Z - лексема перехода;
	return lex;
}
void automatic_syn()
{
	lexem_syn = 0;
	for (int i = 0; i < syn_lex.size(); i++)
	{
		current_lex = syn_lex[i];
		lexem_analysis_syn();
		fin.push_back(lexem_syn);
	}
}
void automatic()
{
	int i = 0;
	lexem = 0;
	while (i < size_of_list)
	{
		current_char = text[i];
		lexem_analysis();
		lexem_list[i] = converting_lexem();
		i++;
	}
	analysis();
	automatic_syn();
}



int main()
{
	ifstream ifs("input.txt");
	ifs.seekg(0, ios::end);
	int length = ifs.tellg();
	text = new char[length];
	lexem_list = new char[length];
	ifs.seekg(0, ios::beg);
	ifs.read(&text[0], length);
	ifs.close();
	cout << endl;
	size_of_list = length;
	automatic();
	int i;
	int pos = 0;
	for (i = 0; i < fin.size(); i++)
	{
		if (fin[i] == 29)
		{
			break;
		}
	}
	bool c = 1;
	for (int i = 0; i < fin.size(); i++) { if (fin[i] == 29) c = 0; }
	if (c) cout << "correct" << endl;
	for (int k = 0; k < i; k++)
	{
		pos += position[k];
	}
	if (i != 0 && i != -1)
	{
		switch (fin[i - 1])
		{
		case 1:
			cout << "Expected : operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 2:
			cout << "Expected : ariphmetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 3:
			cout << "Expected : operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 4:
			cout << "Expected : case or ariphmetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 5:
			cout << "Expected : constant" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 6:
			cout << "Expected : identificator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 7:
			cout << "Expected : = " << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 8:
			cout << "Expected : operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 9:
			cout << "Expected : ariphmetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 10:
			cout << "Expected : operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 11:
			cout << "Expected : [ or ariphmetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 12:
			cout << "Expected : case" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 13:
			cout << "Expected : constant" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 14:
			cout << "Expected : identificator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 15:
			cout << "Expected : = " << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 16:
			cout << "Expected : operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 17:
			cout << "Expected : ariphmetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 18:
			cout << "Expected : operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 19:
			cout << "Expected : ] or ariphmetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 20:
			cout << "Expected : [ or ariphmetic operator";
			cout << "Position: " << pos + 1 << endl;
			break;
		case 21:
			cout << "Expected : default" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 22:
			cout << "Expected : identificator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 23:
			cout << "Expected : =" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 24:
			cout << "Expected operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 25:
			cout << "Expected ariphetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 26:
			cout << "Expected operand" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 27:
			cout << "Expected ] or ariphetic operator" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		case 28:
			cout << "Expected end" << endl;
			cout << "Position: " << pos + 1 << endl;
			break;
		}
	}
	if (i == 0) { cout << "Position = 1" << endl; cout << "Expected : select"; }
	if (i == -1) { cout << "Correct!" << endl; }
	cout << endl;
	delete[] text;
	delete[] lexem_list;
	system("pause");
}