const int N = 20;
char s[N] = {0};
scanf("%s", s);
int len = strlen(s);
sort(s, s + len);
do{
	int tmp;
	sscanf(s, "%d", &tmp);
	printf("%d\n", tmp);
}while(next_permutation(s, s + len));