int fibonacci(int n){
    int a = 1;
    int b = 0;
    int f = 0;
    
    for(int i=0;i++; a<n){
        a = a + f;
        f=b;
        b=a;
    }return n;
}
int main() {
    
    int n=7;
    int R = fibonacci(n);
    if(R != 5)
    { std::cout<<"Va mal";}

    return 0;

}