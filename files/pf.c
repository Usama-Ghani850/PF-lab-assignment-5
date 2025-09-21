# include<stdio.h>
int main(){
int lim=5000;
int amo;
int curr;
int num_trans=0;

printf("which country currency did you want to use \n press 1 for pakistan \n press 2 for united kindom  ");
scanf("%d",&curr);
if (curr==1 || curr==2){
    printf("enter the  withdraw amount ");
    scanf("%d",&amo);
    if(amo<lim){
        
        // according to this situation we have to use system clock for time and loop for transaction 
        if (num_trans<=3){
        printf("'succsesful transaction'\n");
        num_trans++;\
        lim=lim-amo;
       printf("'your remaining amount is %d'", lim);
    }
        else{
            printf("suspesious acticity recorded ");
        }
    } else {
        printf("suspiecious ativity recorded");           
    }
}
else
    {
    printf("suspiecious activity recorded");
}
return 0;

}