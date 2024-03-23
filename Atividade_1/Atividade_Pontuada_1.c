#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto {
    
    int meses[4];
    float tr;
    float lr;
    float ea;
    float vmd;
    float eMinimo;
    float eMax;
    char tomadaDecisao[200];
    
};

int main(){
    
    //variaveis
    
    setlocale(LC_ALL, "portuguese");
    struct produto produtos[5];
    int i; 
    int j;
    int soma = 0;
    
    //usuario
    
    for(i = 0; i < 5; i++){
          printf("===== %dº PRODUTO =====\n", i + 1);
        
        for(j = 0; j < 4; j++){
            
        printf("Informe o valor de vendas do %dº mês: ", j + 1);
        scanf("%d", &produtos[i].meses[j]);
        
        soma += produtos[i].meses[j];
        
        }
        
        printf("Informe o TR: ");
        scanf("%f", &produtos[i].tr);
        
        printf("Informe o LR: ");
        scanf("%f", &produtos[i].lr);
        
        printf("Informe o EA: ");
        scanf("%f", &produtos[i].ea);
        
        produtos[i].vmd = (soma/4)/25;
        produtos[i].eMinimo = produtos[i].tr * produtos[i].vmd;
        produtos[i].eMax = produtos[i].lr + produtos[i].eMinimo;
        
        if(produtos[i].ea > produtos[i].eMinimo){
            strcpy(produtos[i].tomadaDecisao, "Não comprar");
        } else {
            strcpy(produtos[i].tomadaDecisao, "Comprar");
        }
        
        soma = 0;
    }

    //mostrar
    
    for(i = 0; i < 5; i++){
        
        printf("===== %dº PRODUTO =====\n", i + 1);
        
        for(j = 0; j < 4; j++){
            
        printf("Valor de vendas do %dº mês: %d\n", j + 1, produtos[i].meses[j]);
        
        }
        
        printf("TR: %.2f\n", produtos[i].tr);
        
        printf("LR: %.2f\n", produtos[i].lr);
    
        printf("EA: %.2f\n", produtos[i].ea);
        
        printf("VMD: %.2f\n", produtos[i].vmd);
        
        printf("E. Minimio: %.2f\n", produtos[i].eMinimo);
        
        printf("E. Max: %.2f\n", produtos[i].eMax);
        
        printf("Tomada decisÃ£o: %s\n", produtos[i].tomadaDecisao);
        
    }
    getchar();
    return 0;
}