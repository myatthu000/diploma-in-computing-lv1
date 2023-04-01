
//
// Created by National Cyber City on 2/6/2023.
//


#include "stdio.h"
#include "zoom_online_bank.h"

int main(){
    space_counter();
    loadingAllDataFromFile();
    printingAllData();
    //welcome();

    current_data_toTransfer(3000);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    receive_limit_funcion(999);


    unsigned int total = calculate_amounts_same_days(0);
    printf("\n-->1Total: %u\n",total);
//
    get_limit_amount(0);
    printf("\n-->2Trans limit for get limit amount fun : %d \n",trans_limit);

    receive_limit_amount(4);
    printf("\n-->3Trans limit for receive limit amount fun : %d \n",receive_limit);

//    get_time();
//    printf("current edited time :%s",Ctime[0].c_time);

//    integer_to_char(1000);

    return 0;
}

