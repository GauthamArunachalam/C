int main(){
    int maths,chemistry;
    scanf("%d %d",&maths,&chemistry);
    if(maths>=50 && chemistry>=40 && maths+chemistry>=100){
    printf("pass");
}else{
    printf("fail");
}
}
