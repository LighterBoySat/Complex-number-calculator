#include <iostream>
#include <cmath>

#define PI 3.14159265

/*
______818¶811118¶¶¶81_8111111__11¶¶1¶8____111
8111_181¶1____8¶¶¶¶¶¶¶¶¶¶¶¶¶811_____1888_____
1¶¶18181____1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1111_____8¶_____
1¶¶1181___1¶¶¶¶¶¶¶¶¶¶¶¶8818¶¶¶88111____188¶88
111111___18¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1__18881111____1¶8¶
18¶8111_118118¶¶¶¶¶¶8¶¶¶8888___1111111____1¶8
888111__8811881118811_11811181__11_11___1____
___81__¶¶1181111_11188___81__88___1111___11__
___81_1¶1181______111881__11__181____11____11
__88__¶¶1111_________1181__11___81__1_11____1
_181_1¶¶811___1_________881_1____11____11_1__
_¶11_¶¶¶81_1______________11_1____1_____11_1_
1¶811¶¶¶¶1__1_________________1_________1_111
88¶18¶¶¶8111_1_________________1____1___1__11
¶¶¶_¶¶¶¶11______________________11___8__11_11
8¶8_¶¶¶1_________________________8¶8__1__8_1_
¶¶11¶¶¶¶¶¶¶¶¶¶¶811______1118¶¶¶81_1¶1_1__11_1
¶¶1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶81__1888¶¶¶111_1¶__1_1811
¶¶1¶¶¶¶¶¶¶¶¶¶¶¶1¶¶¶¶¶_____18_1¶¶81¶¶¶¶__1_881
¶¶1¶¶¶¶¶¶¶¶1881__18¶1______1__11___1¶¶__111¶8
¶88¶¶¶118¶8111____111_______________1¶1_11188
¶18¶¶¶1__111_____11¶1________________11118118
8_¶¶¶¶81_________18¶1_________________8118818
81¶¶¶¶¶811_______8¶1__________________11_8811
81¶¶¶¶¶¶11111___18¶¶1_________________811_¶_1
818¶¶¶¶¶¶11111__1¶¶¶¶8118¶____________811_81_
¶18¶¶¶¶¶¶8811___1¶¶¶¶¶¶__1____________818_81_
¶88¶¶¶¶¶¶¶¶81_1118¶¶1181______________188181_
¶88¶¶¶¶¶¶¶¶¶8111118___1_______________88118__
¶¶8¶¶¶¶¶¶¶¶¶8¶¶¶¶¶¶¶¶11111_1181_______8¶1881_
¶¶¶8¶¶¶¶¶¶¶¶8118¶¶¶1111___1___1_______¶¶1881_
88¶¶¶¶¶¶¶¶¶¶81_118888¶8811_____1_____8¶81¶11_
¶¶8¶¶¶¶¶¶¶¶¶¶¶81111118811_____1111111¶¶888111
¶¶88¶¶¶¶¶¶¶¶¶¶¶11111_________1118¶11181881__1
¶¶¶1¶88¶¶¶¶¶¶¶¶88111_181__11118¶¶8111_181___1
¶¶¶1¶¶8¶¶¶¶¶¶¶¶¶¶811_11111_118¶81__1___811__8
11818¶8_8¶¶¶¶¶¶¶¶¶¶¶¶8¶¶8¶¶¶811____11__11_111
_____811_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶811_______1__8__11__
11___181__8¶¶¶¶¶¶¶¶¶¶¶811_____________¶8111__
_____111___1¶¶8¶¶¶88881111____________¶¶818__
_____1¶_1____181111111111_____________¶¶118__
__1__1¶1_1_____11111_________________1¶¶_1118

            ╔╦╗   ╔╗  ╔═╗ ╔╗  ╔╗
            ║═╬╦╦╦╣╚╗ ║╠╬═╣╚╦═╬╬═╗
            ║║║║║╔╣╔╣ ║╠╣╬║╬║╬║║║║
            ╚╩╩╚╩╩═╩╝ ╚═╝╚═╩═╩═╩╩╩
*/

class Complex{
    public:
        double Re;             // действительня часть
        double Im;             // мнимая часть
       
// Начало конструкторов для разных ситуаций

        Complex(double Re, double Im){   
            this->Re = Re;
            this->Im = Im;
        }

        Complex(double Im){
            this->Im = Im;
        }

        Complex(){
            this->Re = 0;
            this->Im = 0;                                              
        }
        
// Конец конструкторов для разных ситуаций


// Перегрузки операторов

        bool operator == (Complex& x){
            return (this->Re == x.Re && this->Im == x.Im) ? true : false;
        }

        Complex operator = (Complex& x){
            return Complex(this->Re = x.Re, this->Im = x.Im);
        }

        Complex operator - (Complex& x){
            return Complex(this->Re - x.Re, this->Im - x.Im);
        }

        Complex operator + (Complex& x){
            return Complex(this->Re + x.Re, this->Im + x.Im);
        }

        Complex operator + (double x){
            return Complex(this->Re + x);
        }

        Complex operator - (double x){
            return Complex(this->Re - x);
        }

        void operator += (Complex& x){
            this->Re += x.Re;
            this->Im += x.Im;
        }

        void operator -= (Complex& x){
            this->Re -= x.Re;
            this->Im -= x.Im;
        }

        void operator += (double x){
             this->Re += x;
        }

        void operator -= (double x){
            this->Re -= x;
        }

        Complex operator * (double x){
            return Complex(this->Re * x, this->Im *= x);
        }

        void operator *= (double x){
            this->Re *= x;
            this->Im *= x;
        }

        Complex operator / (double x){
            return Complex(this->Re / x, this->Im / x);
        }

        void operator /= (double x){
            this->Re /= x;
            this->Im /= x;
        }

        Complex operator * (Complex& x){
            double tmp = this->Re;
            this->Re = this->Re * x.Re - this->Im * x.Im;
            this->Im = tmp * x.Im + x.Im * this->Im;
        }

        void operator *= (Complex& x){
            double tmp = this->Re;
            this->Re = this->Re * x.Re - this->Im * x.Im;
            this->Im = tmp * x.Im + x.Im * this->Im;
        }

        Complex operator / (Complex& x){
            double tmp = this->Re;
            return((this->Re * x.Re + this->Im * x.Im) / (x.Re * x.Re + x.Im * x.Im), (this->Im * x.Re - tmp * x.Im) / (x.Re * x.Re + x.Im * x.Im));
        }

        void operator /= (Complex& x){
            double tmp = this->Re;
            this->Re = (this->Re * x.Re + this->Im * x.Im) / (x.Re * x.Re + x.Im * x.Im);
            this->Im = (this->Im * x.Re - tmp * x.Im) / (x.Re * x.Re + x.Im * x.Im);
        }

// Операторы перегрузили


// Формула Муавра и подготовка к ней

        double return_abs(){
            return sqrt(this->Re * this->Re + this->Im * this->Im);
        }

        Complex Muavr(uint64_t stepen){
            return Complex((pow(return_abs(), stepen) * cos(atan(this->Im / this->Re) * stepen)), (pow(return_abs(), stepen) * sin(atan(this->Im / this->Re) * stepen)));
        }

// Окончание формулы Муавра
      
};