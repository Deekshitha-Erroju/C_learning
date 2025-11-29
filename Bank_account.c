#include<stdio.h>
#include<string.h>
 typedef struct {
    int id;
   char acname[50];
   float balance;
}account;
account a[100];
int nid=1001;
int noofacc;

void loadacc();
void saveacc();
void creatacc();
void deposit();
void withdraw();
void viewacc();
void showallacc();
int  findaccbyindex(int);
int main(){
    int c;
     loadacc();
    printf("-----------------------------------BANK ACCOUNT MANAGER-------------------------------------");
    
    printf("1. creat account\n");
    printf("2. deposit money\n");
    printf("3. withdraw money\n");
    printf("4. view account\n");
    printf("5. show all accounts\n");
    printf("6. save and exit\n");
    scanf("%d",&c);
    if(c>6) printf("enter a valid number");
    switch(c){
     case 1: creatacc();
             break;
     case 2: deposit();
             break;
     case 3: withdraw();
             break;        
     case 4: viewacc();
             break;       
     case 5: showacc();
             break;
     case 6: saveacc();
             printf("data saved..... exiting\n");
             break;           
    }
}
    int findaccbyindex(int id){
        for(int i=0;i<noofacc;i++){
            if(account[i].id==id){
                return i;
            }
        }
        return -1;
    } 
    void loadacc(){
        FILE*fp= fopen(bankaccount.txt,"r");
        if(fp==NULL) printf("start from begining");
    }
    void saveacc() {
    FILE*fp = fopen(bankaccont.txt, "w");
    if (fp == NULL) {
        printf("Error: could not open file for saving.\n");
        return;
    }

    for (int i = 0;i<noofacc;i++) {
        fprintf(fp, "%d|%s|%.2lf\n", account[i].id, account[i].aname, account[i].balance);
    }

    fclose(fp);
}
    void creatacc(){
    char name[50];
    printf(" enter the details");
    scanf("%d %lf",&account[noofacc].id,account[noofacc].balance);
    printf("enter")
    scanf("%c",aname);
    strncpy(account[noofacc].aname,name[50]);
     if (id >= noofacc) {
            noofacc= id + 1;
        }
    }








