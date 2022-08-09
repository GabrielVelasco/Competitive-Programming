#include <stdio.h>

#define minEm24h 1440

int main(){
    int hi, mi, hf, mf, ti, tf;
    int h_ans, m_ans, ans;
    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
    ti = (hi * 60) + mi; // converte tudo para minutos com origem em 0 horas
    tf = (hf * 60) + mf; // qnts minutos se passaram de 0h até hi/hf : mi/mf
    if(hi == hf == mi == mf)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(ti > tf){ // quase um ciclo no relogio de 24h, hi esta a frente de hf
                      // "voltou no tempo"
        tf = (ti - tf);

        ans = minEm24h - tf; // tempo total decorido em minutos
        h_ans = ans / 60; // qts hrs tem nesses minutos passados
        m_ans = ans % 60; // o que sobra sao os minutos

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_ans, m_ans);
    
    }else{ // ti < tf // tempo correu normalmente, foi "pra frente"
        ti = (hi * 60) + mi;
        tf = (hf * 60) + mf;
        ans = tf - ti;
        h_ans = ans / 60;
        m_ans = ans % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_ans, m_ans);
    }

    return 0;
}