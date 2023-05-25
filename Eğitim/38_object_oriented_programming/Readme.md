### Inheritance (Kalıtım)

C++ dilinde kalıtım (inheritance), bir sınıfın başka bir sınıftan özelliklerini ve davranışlarını devralmasını sağlayan bir nesne yönelimli programlama kavramıdır. Kalıtım, sınıflar arasında bir ilişki kurarak kodun yeniden kullanılabilirliğini artırır ve kod organizasyonunu iyileştirir.

##### Temel Sınıf ve Türetilmiş Sınıf: 

Kalıtım ilişkisi, bir temel sınıf (base class) ve ondan türetilmiş sınıflar (derived classes) arasında kurulur. Temel sınıf, diğer sınıflar tarafından genel özellikleri ve davranışları paylaşmak için kullanılır. Türetilmiş sınıflar ise temel sınıftan kalıtılan özelliklere sahip olur ve bu özellikleri genişletebilir veya değiştirebilir. Türetilmiş sınıflar, temel sınıfın veri üyelerine, işlevlerine ve hatta diğer türetilmiş sınıflara erişebilir.

    class Animal {
    protected:
        std::string name;
    public:
        void setName(const std::string& animalName) {
            name = animalName;
        }
        void speak() {
            std::cout << "Animal speaks!" << std::endl;
        }
    };

    class Dog : public Animal {
    public:
        void speak() {
            std::cout << "Dog barks!" << std::endl;
        }
    };

Yukarıdaki örnekte, "Animal" adında bir temel sınıf ve "Dog" adında bir türetilmiş sınıf tanımlanmıştır. "Animal" sınıfı, hayvanların genel özelliklerini temsil ederken, "Dog" sınıfı "Animal" sınıfını kalıtım yoluyla genişletir ve kendi davranışlarını tanımlar.

##### Erişim Belirteçleri: 

C++ dilinde, kalıtım ilişkisinde erişim belirteçleri kullanılır. Erişim belirteçleri, temel sınıftan türetilmiş sınıfa devralınan özelliklerin ve işlevlerin erişim düzeyini kontrol eder. C++'da üç tür erişim belirteci vardır:

- Public: public erişim belirteci, temel sınıftaki public özelliklerin türetilmiş sınıfta public olarak kalmasını sağlar. Bu durumda, türetilmiş sınıfın herkes tarafından erişilebilir özelliklere sahip olması demektir.

- Protected: protected erişim belirteci, temel sınıftaki public ve protected özelliklerin türetilmiş sınıfta protected olarak kalmasını sağlar. Bu durumda, türetilmiş sınıfın kendisi ve türetilmiş sınıftan türetilen diğer sınıflar bu özelliklere erişebilir.

- Private: private erişim belirteci, temel sınıftaki public ve protected özelliklerin türetilmiş sınıfta private olarak kalmasını sağlar. Bu durumda, türetilmiş sınıfın sadece kendi üyeleri tarafından erişilebilir özelliklere sahip olması demektir.

Erişim belirteçleri kullanılarak, sınıfın üyelerinin nasıl erişilebilir olacağı ve hangi düzeyde görünür olacağı kontrol edilir. Bu, veri gizliliği ve sınıfın dışarıya nasıl sunulduğu konusunda esneklik sağlar.

    class Animal {
    protected:
        std::string name;
    public:
        void setName(const std::string& animalName) {
            name = animalName;
        }
        void speak() {
            std::cout << "Animal speaks!" << std::endl;
        }
    };

    class Dog : public Animal {
    public:
        void setDogName(const std::string& dogName) {
            name = dogName;  // Erişim belirteci protected olduğu için doğrudan erişilebilir.
        }
        void bark() {
            std::cout << "Dog barks!" << std::endl;
        }
    };

    int main() {
        Dog dog;
        dog.setDogName("Buddy");
        dog.speak();  // Animal sınıfının public bir işlevi olduğu için doğrudan erişilebilir.
        dog.bark();
        return 0;
    }

Yukarıdaki örnekte, name veri üyesi protected olarak tanımlanmıştır. Bu nedenle, Dog sınıfı doğrudan name özelliğine erişebilir. Aynı şekilde, speak() işlevi de doğrudan erişilebilirken, bark() işlevi Dog sınıfının kendi özelliğidir.

#### Inheritance Türleri:

- Single Inheritance (Tekli Kalıtım): Tekli kalıtım, bir sınıfın sadece bir tane temel sınıftan kalıtım alması durumudur. Bu en basit kalıtım şeklidir.

    class Shape {
    protected:
        int width;
        int height;
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
    };

    class Rectangle : public Shape {
    public:
        int getArea() {
            return width * height;
        }
    };

Yukarıdaki örnekte, Shape adında bir temel sınıf ve Rectangle adında bir türetilmiş sınıf bulunmaktadır. Rectangle sınıfı, Shape sınıfından public erişim belirteciyle kalıtım alır. Böylece, Rectangle sınıfı Shape sınıfının setWidth(), setHeight() işlevlerini ve width, height veri üyelerini kullanabilir.

- Multilevel Inheritance (Çoklu Düzeyde Kalıtım): Çoklu düzeyde kalıtım, bir sınıfın bir diğer türetilmiş sınıftan kalıtım alması durumudur. Böylece, bir sınıf diğer bir sınıftan türetilmiş olabilir.

    class Shape {
    protected:
        int width;
        int height;
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
    };

    class Rectangle : public Shape {
    public:
        int getArea() {
            return width * height;
        }
    };

    class ColoredRectangle : public Rectangle {
    private:
        std::string color;
    public:
        void setColor(const std::string& c) {
            color = c;
        }
        std::string getColor() {
            return color;
        }
    };

Yukarıdaki örnekte, Shape sınıfı Rectangle sınıfına kalıtım verir ve Rectangle sınıfı da ColoredRectangle sınıfına kalıtım verir. Böylece, ColoredRectangle sınıfı, hem Shape sınıfının hem de Rectangle sınıfının özelliklerini ve işlevlerini kullanabilir. Ayrıca, kendi özel özelliklerini (color) ve işlevlerini de ekleyebilir.

- Hierarchical Inheritance (Hiyerarşik Kalıtım): Hiyerarşik kalıtım, bir sınıfın birden fazla türetilmiş sınıfa kalıtım verdiği durumdur. Yani, bir temel sınıf, birden fazla türetilmiş sınıf tarafından kalıtım alabilir.

    class Animal {
    public:
        void eat() {
            std::cout << "Animal is eating." << std::endl;
        }
    };

    class Cat : public Animal {
    public:
        void meow() {
            std::cout << "Cat says meow." << std::endl;
        }
    };

    class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Dog barks." << std::endl;
        }
    };

    class Bird : public Animal {
    public:
        void chirp() {
            std::cout << "Bird chirps." << std::endl;
        }
    };

Yukarıdaki örnekte, Animal sınıfı Cat, Dog ve Bird sınıflarına kalıtım verir. Her bir sınıf, temel sınıfın işlevlerini kullanabilirken kendi özel işlevlerini de ekler. Böylece, farklı hayvan türleri için ayrı sınıflar oluşturulmuş olur.

Kalıtım, kodun yeniden kullanılabilirliğini artıran ve nesne yönelimli programlamada önemli bir kavramdır. Bu örnekler, kalıtımın nasıl kullanıldığını göstermektedir, ancak farklı senaryolarda ve gereksinimlere göre daha karmaşık kalıtım yapıları da oluşturulabilir.