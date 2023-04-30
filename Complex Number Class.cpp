/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
    // Complete this class
    private:
    int r,m;
    public:
    ComplexNumbers(int r,int m){
        this->r=r;
        this->m=m;
    }
    void print(){
       cout<<r<<" + i"<<m;
    }
    void plus(ComplexNumbers &obj){
        int a=this->r+obj.r;
        int b=this->m+obj.m;
        this->r=a;
        this->m=b;
        return;
    }
    void multiply(ComplexNumbers &obj){
        int a=this->r*(obj.r)-this->m*(obj.m);
        int b=this->r*(obj.m)+this->m*(obj.r);
        this->r=a;
        this->m=b;
        return ;
    }
};
