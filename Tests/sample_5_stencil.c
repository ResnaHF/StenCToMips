int main() 
{
	stencil gx{1,3} = {{ 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }}; 

	int tab[5][5][5] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
						{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
						{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
						{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
						{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};


	printf("-------\n");

	printi(gx $ tab[2][2][2]);
	printf("\n");

	int tab2[5] = { 42, 21, 7, 314, 127 };
	int somme, moyenne;
	stencil s{2,1} = { 1, 1, 1, 1, 1 };
	somme = tab2[2] $ s;
	moyenne = (s $ tab2[2]) / 5;

	printi(somme);
	printf("\n");
	printi(moyenne);
	printf("\n");

	return 0;
}
