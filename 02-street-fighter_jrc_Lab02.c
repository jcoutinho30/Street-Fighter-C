#include <stdio.h>

int main (void){
    
    //Inicializando variáveis, a contagem de golpes do personagens necessita ser zerada previamente.
    int golpe;
    int golpe_ken = 0; 
    int golpe_ryu = 0;
    int hp_ryu, hp_ken;

    //Entrada de valores para os HPs de cada personagem.
    scanf("%d", &hp_ryu);
    scanf("%d", &hp_ken);

    //Início de laço que vai compreender toda a luta.
    while (hp_ryu > 0 && hp_ken > 0)
    {
        scanf("%d", &golpe);
            
            //Caso em que o golpe é do Ken.
            if(golpe < 0)
            {
                hp_ryu = hp_ryu + golpe;
                golpe_ken++;
                
                //Caso em que o golpe do Ken é fatal.
                if(hp_ryu <= 0)
                    {
                    printf("KEN APLICOU UM GOLPE: %d\n", -golpe);
                    printf("HP RYU = 0\n");
                    printf("HP KEN = %d\n", hp_ken);  
                    printf("LUTADOR VENCEDOR: KEN\n");
                    printf("GOLPES RYU = %d\n", golpe_ryu);
                    printf("GOLPES KEN = %d\n", golpe_ken);       
                    break;           
                    }

                //Caso em que o golpe do Ken não é fatal.
                else
                {    
                printf("KEN APLICOU UM GOLPE: %d\n", -golpe);
                printf("HP RYU = %d\n", hp_ryu);
                printf("HP KEN = %d\n", hp_ken);
                }
            }
            
            //Caso em que o Golpe é do Ryu.
            else
            {
                hp_ken = hp_ken - golpe;
                golpe_ryu++;
                    
                    //Golpe do Ryu é fatal.
                    if(hp_ken <= 0)
                    {
                    printf("RYU APLICOU UM GOLPE: %d\n", golpe);
                    printf("HP RYU = %d\n", hp_ryu);
                    printf("HP KEN = 0\n");    
                    printf("LUTADOR VENCEDOR: RYU\n");
                    printf("GOLPES RYU = %d\n", golpe_ryu);
                    printf("GOLPES KEN = %d\n", golpe_ken);
                    break;
                    }
                    
                    //Golpe do Ryu não é fatal.
                    else
                    {
                    printf("RYU APLICOU UM GOLPE: %d\n", golpe);
                    printf("HP RYU = %d\n", hp_ryu);
                    printf("HP KEN = %d\n", hp_ken);  
                    }
            }


    }

}

