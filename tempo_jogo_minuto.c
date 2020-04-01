#include<stdio.h>

int main(){
    int hInicio=0, hFim=0, mInicio=0, mFim=0, hDuracao=0, mDuracao=0;

    scanf("%d %d %d %d",&hInicio, &mInicio, &hFim, &mFim);

    if(hInicio == hFim && mInicio == mFim){
        
        hDuracao = 24 + hFim - hInicio;
        mDuracao = mFim - mInicio;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }   
    else if(hInicio == hFim && mInicio < mFim){
        
        hDuracao = hFim - hInicio;
        mDuracao = mFim - mInicio;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio == hFim && mInicio > mFim){
        
        hDuracao = hFim - hInicio + 24 -1;
        mDuracao = mFim - mInicio + 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio < hFim && mInicio == mFim){
        
        hDuracao = hFim - hInicio;
        mDuracao = mFim - mInicio;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio > hFim && mInicio == mFim){
        
        hDuracao = (hFim - hInicio) + 24;
        mDuracao = mFim - mInicio;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio > hFim && mInicio > mFim){
        
        hDuracao = (hFim - hInicio) + 24 -1;
        mDuracao = (mFim - mInicio)+ 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio < hFim && mInicio < mFim){
        
        hDuracao = hFim - hInicio;
        mDuracao = mFim - mInicio;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio > hFim && mInicio < mFim){
        
        hDuracao = (hFim - hInicio)+24;
        mDuracao = mFim - mInicio;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }
    else if(hInicio < hFim && mInicio > mFim){
        
        hDuracao = (hFim - hInicio)-1;
        mDuracao = (mFim - mInicio)+60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuracao, mDuracao);
    }    
    
    return 0;
}