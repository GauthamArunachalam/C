int main(){
    char loginId[100];
    char password[100];
    int flag=1;
    while(1){
        printf("\n\n\t Login");
        printf("\n\tEnter the Login ID: ");
        scanf("%s",loginId);
        scanf("\n\t Enter the password: ");
        scanf("%s",password);
        if(loginId.strcmp("12345")==0 && password.strcmp("gautham")){
            printf("\n\t Successfully Logged In");
            break;
        }
    }
}
