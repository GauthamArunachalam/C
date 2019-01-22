/*Employee Database*/
int basicPayCalc(int basic);
int hraCalc(int basic);
int daCalc(int basic);
int taCalc(int basic);
int salTot(int basic,int hra,int da,int ta);
int gradu(int year,int sal);
struct Salary{
    int prevSalary;
    int basic;
    int hra;
    int ta;
    int da;
    int tot;
    int graduity;
};
struct Employee{
    char name[100];
    int age;
    char gender[20];
    char qualification[100];
    char designation[100];
    int yearsOfExpirence;
    char contactNo[10];
    char email[100];
    char address[100];
    char marital[20];
    char dateOfJoin[100];
    char cabs[15];
    char leave[100];
    char additionExpends[100];
    struct Salary s;
};
int main(){
    int n;
    printf("\n\n\t Employee Details");
    printf("\n\t Enter the no. of employees: ");
    scanf("%d",&n);
    struct Employee e[n+1];
    for(int i=1;i<=n;i++){
        printf("\n\tEnter name: ");
        scanf("%s",e[i].name);
        printf("\n\tEnter the age: ");
        scanf("%d",&e[i].age);
        printf("\n\tEnter the gender: ");
        scanf("%s",e[i].gender);
        printf("\n\tEnter the Qualification: ");
        scanf("%s",e[i].qualification);
        printf("\n\tEnter desination: ");
        scanf("%s",e[i].designation);
        printf("\n\tEnter the years of expirence: ");
        scanf("%d",&e[i].yearsOfExpirence);
        printf("\n\tEnter the contact no.: ");
        scanf("%s",e[i].contactNo);
        printf("\n\tEnter the email: ");
        scanf("%s",e[i].email);
        printf("\n\tEnter the address: ");
        scanf("%s",e[i].address);
        printf("\n\tEnter the marital status: ");
        scanf("%s",e[i].marital);
        printf("\n\tEnter the date of joining: ");
        scanf("%s",e[i].dateOfJoin);
        printf("\n\tEnter the previous salary: ");
        scanf("%d",&e[i].s.prevSalary);
        strcpy(e[i].cabs,"free");
        if(strcmp(e[i].gender,"female")==0 && strcmp(e[i].marital,"married")==0){
            strcpy(e[i].leave,"6 Months maternity leave");
            strcpy(e[i].additionExpends,"1.5 lakhs medical expense");
        }else if(strcmp(e[i].gender,"male")==0 && strcmp(e[i].marital,"married")==0){
            strcpy(e[i].leave,"15 Months paternity leave");
            strcpy(e[i].additionExpends,"80000 educational expense");
        }else{
            strcpy(e[i].leave,"Not Available");
            strcpy(e[i].additionExpends,"Not Available");
        }
        e[i].s.basic=basicPayCalc(e[i].s.prevSalary);
        e[i].s.hra=hraCalc(e[i].s.basic);
        e[i].s.da=daCalc(e[i].s.basic);
        e[i].s.ta=taCalc(e[i].s.basic);
        e[i].s.tot=salTot(e[i].s.basic,e[i].s.hra,e[i].s.da,e[i].s.ta);
        e[i].s.graduity=gradu(e[i].dateOfJoin,e[i].s.tot);
    }
   printf("\n\n");
    for(int i=1;i<=n;i++){
        printf("\n\tName: %s",e[i].name);
        printf("\n\tAge: %d",e[i].age);
        printf("\n\tGender: %s",e[i].gender);
        printf("\n\tQualification: %s",e[i].qualification);
        printf("\n\tDesignation: %s",e[i].designation);
        printf("\n\tExpirence: %d",e[i].yearsOfExpirence);
        printf("\n\tcontact no.: %s",e[i].contactNo);
        printf("\n\temail: %s",e[i].email);
        printf("\n\taddress: %s",e[i].address);
        printf("\n\tmarital status: %s",e[i].marital);
        printf("\n\tdate of joining: %s",e[i].dateOfJoin);
        printf("\n\tprevious salary: %d",e[i].s.prevSalary);
        printf("\n\tCabs: %s",e[i].cabs);
        printf("\n\tLeave: %s",e[i].leave);
        printf("\n\tAdditional Expense: %s",e[i].additionExpends);
        printf("\n\tBasic Pay : %d",e[i].s.basic);
        printf("\n\tHRA : %d",e[i].s.hra);
        printf("\n\tDA : %d",e[i].s.da);
        printf("\n\tTA : %d",e[i].s.ta);
        printf("\n\tTotal : %d",e[i].s.tot);
        printf("\n\tGraduity : %d",e[i].s.graduity);
        printf("\n\n");
    }
}
int basicPayCalc(int basic){
    basic=basic/12;
    float basic1=(float)basic+(float)(basic)*0.3;
    basic=(int)basic1;
    return basic;
}
int hraCalc(int basic){
    float bas = (float)basic+(float)basic*0.15;
    basic=(int)bas;
    return basic;
}
int daCalc(int basic){
    float bas=(float)basic+(float)basic*0.08;
    basic=(int)bas;
    return basic;
}
int taCalc(int basic){
    float bas=(float)basic+(float)basic*0.1;
    basic=(int)bas;
    return basic;
}
int salTot(int basic,int hra,int da,int ta){
    return basic+hra+da+ta;
}
int gradu(int dateOfJoin,int sal){
    int ans=dateOfJoin-2018;
    ans = ans * 200;
    if(ans>750){
        float a = (float)sal * 0.15;
        ans=(int)a;
        return a;
    }else{
        return 0;
    }
}
