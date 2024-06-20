/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
class complex_num{
    
    // Write your code here
    private:
    double real,img;

    public:
        // complex_num(double = 0.0, double = 0.0);
complex_num(double r=0.0, double i=0.0)
    {
        real = r;
        img = i;
    }

complex_num operator +(complex_num w){
    complex_num z;
    z.real = real+w.real;
    z.img = img+w.img;
    // Write your code here
    return z;
}

complex_num operator -(complex_num w){
    complex_num z;
    // Write your code here
        z.real = real-w.real;
    z.img = img-w.img;
    return z;
}

complex_num operator *(complex_num w){
    complex_num z;
    // Write your code here
    z.real = (real*w.real) - (img*w.img);
    z.img = (real*w.img)+(img*w.img);
    return z;
}

complex_num operator /(complex_num w){
    complex_num z;
    z.real =((real*w.real) + (img*w.img))/((w.real*w.real) + (w.img*w.img));
    z.img = ((img*w.img)- (real*w.img))/((w.real*w.real) + (w.img*w.img));
    // Write your code here
    return z;
}

void print(std::ostream &os){
    // Write your code here
    os<<std::showpos<<real<<std::showpos<<img<<"i";
    os.flush();
}
};


// Main function
int main(){
    // Create two complex numbers z and w
    complex_num z(10.0,5.0); 
    complex_num w(-2.0);

    // Print both complex numbers
    std::cout << "    z = ";
    z.print(std::cout);
    std::cout << std::endl;
    std::cout << "    w = ";
    w.print(std::cout);
    std::cout << std::endl << std::endl;

    complex_num v;
    
    // Addition
    std::cout << "z + w = ";
    v = z + w;   
    v.print(std::cout);
    std::cout << std::endl;

    // Subtraction
    std::cout << "z - w = ";
    v = z - w;   
    v.print(std::cout);
    std::cout << std::endl;
    
    // Multiplication
    std::cout << "z * w = ";
    v = z * w;   
    v.print(std::cout);
    std::cout << std::endl;
    
    // Division
    std::cout << "z / w = ";
    v = z / w;   
    v.print(std::cout);

    std::cout << std::endl << std::endl << std::flush;
    return 0;
}
