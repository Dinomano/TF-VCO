
struct equipe{
    char nome[50];
    char integrantes[10][50];
    int pontos; //O time ganha 0 se perder, 1 se empatar e 3 se ganhar.
};

struct jogo{
    char time1[50];
    char time2[50];
    int resultado; // 0 se empate, 1 time 1 ganhou e 2 time 2 ganhou
};
