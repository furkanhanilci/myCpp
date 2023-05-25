### Static Data Members

C++'da static veri üyeleri (static data members), sınıfın tüm nesneleri tarafından paylaşılan veri üyeleridir. Bu, her nesnenin ayrı ayrı bellek alanına sahip olması yerine, static veri üyesinin yalnızca bir kopyasının sınıfın kendisiyle ilişkilendirildiği anlamına gelir.

    class MyClass {
        static int count;
    };

Yukarıdaki örnekte, "count" adında bir static int veri üyesi tanımlanmıştır. Bu, MyClass sınıfının bir parçasıdır ve MyClass nesneleri tarafından paylaşılır.

Static veri üyelerinin özellikleri şunlardır:

- Paylaşılan Bellek Alanı: Static veri üyeleri, sınıfın tüm nesneleri arasında paylaşılan bir bellek alanında bulunur. Bu nedenle, bellekte yalnızca bir kopyası vardır.

    class Example {
        static int count;
    };

    int Example::count = 0;

Yukarıdaki örnekte, "count" adında bir static int veri üyesi tanımlanmıştır. Tüm Example nesneleri tarafından paylaşılır ve bellekte yalnızca bir kopyası bulunur.

- Sınıf Düzeyinde Erişim: Static veri üyelerine, sınıf adıyla erişilebilir. Yani, MyClass::count şeklinde erişim sağlanabilir. Bir nesne oluşturmadan veya bir nesne üzerinden erişmek gerekmez.

    class Example {
        static int count;

    public:
        static void incrementCount() {
            count++;
        }
    };

Yukarıdaki örnekte, "incrementCount()" adında bir static fonksiyon tanımlanmıştır. Bu fonksiyon, Example sınıfının tüm nesneleri üzerinden çağrılabilir ve static veri üyesi "count" üzerinde işlem yapabilir.

- Ön Tanımlı Başlangıç Değeri: Static veri üyeleri, genellikle sınıf tanımında başlangıç değeri atanarak tanımlanır. Bu sayede, sınıfın herhangi bir nesnesi oluşturulmadan bile static veri üyesine erişildiğinde, ön tanımlı başlangıç değeri kullanılır.

    class Example {
        static int count;

    public:
        static int getCount() {
            return count;
        }
    };

    int Example::count = 5;

Yukarıdaki örnekte, static int veri üyesi "count" sınıf tanımında başlangıç değeri olarak 5 olarak atanmıştır.

- Hafıza Alanı: Static veri üyeleri, programın çalışma süresi boyunca bellekte kalır. Bellekten ancak program sonlandığında silinirler. Dolayısıyla, değerleri programın çalışması sırasında kalıcıdır.

    class Example {
        static int data;
    };

    int Example::data = 10;

Yukarıdaki örnekte, "data" adında bir static int veri üyesi tanımlanmıştır. Bu veri üyesi programın çalışma süresi boyunca bellekte kalır ve değeri 10 olarak atanmıştır.

- Tekrar Tanımlanabilirlik: Static veri üyeleri, başka bir static veri üyesi veya static bir fonksiyon içinde yeniden tanımlanabilir. Yeniden tanımlama durumunda, static veri üyesinin değeri güncellenir.

    class Example {
        static int value;

    public:
        static void setValue(int newValue) {
            value = newValue;
        }
    };

    int Example::value = 100;

    int main() {
        Example::setValue(50);
        // static veri üyesi "value" 50 olarak güncellendi
    }

Yukarıdaki örnekte, static int veri üyesi "value" için setValue() adında bir static fonksiyon tanımlanmıştır. Bu fonksiyon aracılığıyla static veri üyesi olan "value" yeniden tanımlanarak değeri güncellenebilir.