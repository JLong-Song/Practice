int lifeCode(int year,int month,int day){
    int y,m,d,A,B;
    for(y=0;year>0;year=year/10){
        y=y+(year%10);
    }
    for(m=0;month>0;month=month/10){
        m=m+(month%10);
    }
    for(d=0;day>0;day=day/10){
        d=d+(day%10);
    }
    A=y+m+d;
    for(B=0;A>0;A=A/10){
        B=B+(A%10);
    }
    if(B<10)return B;
    else return (B/10)+(B%10);
}
