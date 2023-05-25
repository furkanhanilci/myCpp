## C++ ile OOP - Overloading

#### Overloading Nedir?

Overloading temelde elde bulunan bir metot için baz alarak anlatırsak, aynı sayıda parametreye sahip olmasına rağmen farklı veri tipleriyle parametrelerin alınmasıdır. Bu kavramın daha net anlaşılabilmesi için ana başlıklar çerçevesinde verilen örnekleri detaylıca inceleyelim.

##### Function Overloading

Bir sınıf içerisinde herhangi bir metot (fonksiyon) oluşturduğumuzu varsayalım. Metot içerisine gelen veri ondalıklı bir sayı ise 2 ile çarpan, tam bir sayı ise 3 ile çarpan bir metot oluşturmamız gerekiyor. Bunu nasıl yapabiliriz?


            class Sinif {
                public:
                    double F1(int a) {
                        return a*3;
                    }
                    double F1(double a) {
                        return a*2;
                    }
            };

            int main(){
                Sinif X;
                cout << X.F1(10);
                
                Sinif Y;
                cout << Y.F1(10.5);
            }

Görüldüğü üzere aynı isme, aynı veri tipine sahip iki metot oluşturduk fakat aldıkları parametrelerin veri tipleri birinde int, diğerinde double. Bu sayede gönderilen verilerden de dönen sonuçlar farklı olacaktır:

                X.F1(10) = 30
                Y.F1(10.5) = 21

##### Constructor Overloading

            class Sinif {
                public:
                    int x;
                    Sinif(int a) {
                        x = 3*a;
                    }
                    Sinif(double a) {
                        x = 2*a;
                    }
            };

            int main(){
                Sinif M(10);
                cout << "Constructor (INT): " << M.x;
                
                Sinif S(10.5);
                cout << "\nConstructor (DOUBLE): " << S.x;
            }

ve yine çıktısı şöyle olcaktır:

                Constructor (INT) 30
                Constructor (DOUBLE): 21


##### Operator Overloading

Operatör olarak geçen ifade aslında +,-,*,/ ifadelerini temsil etmektedir. Bu ifadeleri bir operator olarak tanımlayarak işleme alabiliriz. Bir örnek üzerinden inceleyelim:

            class Sinif {
                public:
                    int x;
                    int y;
                    Sinif(int a, int b) {
                        x = a;
                        y = b;
                    }
                    Sinif operator - (){
                        return Sinif(-x, -y); 
                    }
            };

            int main(){
                Sinif M(10,20);
                Sinif S = -M;
                
                cout << "M Fonksiyonu (x): " << M.x;
                cout << "\nM Fonksiyonu (y): " << M.y;
                cout << "\nS Fonksiyonu (x): " << S.x;
                cout << "\nS Fonksiyonu (y): " << S.y;
            }

Bu kod blogumuzda Sinif clasında yer alan operator alanına göz atarsak, yine aynı class'ta yer alan birinci parametreye gönderme yapılmış. Yani gelen 2 değer x ve y'ye atanmış ve geri döndürülmüş. Bu da demek oluyor ki operator - olarak belirlediğimiz alan bize eksi verileri döndürecek. O zaman main alanına gelerek M ve S adında iki tane sınıf oluşturuyoruz ve M sınıfımızın x ve y değerlerini constructor yardımı ile sırasıyla 10 ve 20 yapıyoruz. Fakat S sınıfına geldiğimizde -M sınıfını gönderiyoruz. Bu durumda operator - işleme giriyor ve sonucunda bize eksili olarak x ve y değerlerini S sınıfına atamış oluyor. En alt kısımda çıktıyı verdiriyoruz ve işte çıktısı:

                M Fonksiyonu (x): 10
                M Fonksiyonu (y): 20
                S Fonksiyonu (x): -10
                S Fonksiyonu (y): -20

