double area(double radius){
    return pow(radius,2)*3.1416;
    //Calculate the area of pasture
}
double area(double length,double width){
    return length*width;
    //Calculate the area of farmland
}
double area(double edge1,double edge2,double edge3){
    int a=(edge1+edge2+edge3)/2,b;
    b=a*(a-edge1)*(a-edge2)*(a-edge3);
    return pow(b,0.5);
    //Calculate the area of hotel
}
