
struct data{
    unsigned int id;
    char name[30];
    char nrc[50];
    char email[50];
    char password[50];
    char pOrb[20]; // personal or business
    char loan_s[2]; // loan status
    unsigned int monthly_income;
    unsigned int loan_amount; // ဘယ်လောက်ချေးထားသလဲ
    float loan_rate;
    char acc_s[10]; //account status
    int acc_level;
    unsigned int phNumber;
    unsigned int cur_amount; //current amount
    char address[100];
    int transAmoLimitPerDay; // transAmountLimitPerDay minimize for our project 5min
    struct trans trc[100];

};
