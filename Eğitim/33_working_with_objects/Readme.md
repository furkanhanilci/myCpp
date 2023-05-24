## Nesne (Object) bildirimi:

Nesne bildirimi 2 farklı yöntemle yapılabilir:

1. Nesne bildirimi sınıf bildirimi ile birlikte yapılır.

2. Sınıf bildirimi yapıldıktan sonra, sınıf adını kullanarak nesne bildirimi yapılır.

#### 1. Sınıf bildirimi ile birlikte nesne bildirimi:

                    class sinif {
                    // Sadece sınıf fonksiyonlarının erişebileceği private değişkenler
                    private:  
                        int priid;
                    // Sadece sınıf fonksiyonları ile türetilmiş sınıf fonksiyonlarının erişebileceği private değişkenler
                    protected:  
                        int proid;	
                    // Sınıf fonksiyonları, türetilmiş sınıf fonksiyonları ve sınıf nesneleri erşim sağlayabilir.
                    public: 
                        int pubid;
                        void deger_ata(int pid1, int pid2, int pid3);
                        void deger_goster();
                    } nes;

Yukarıda, sinif adlı bir sınıfı oluşturulurken aynı zamanda sinif türünden nes adlı bir nesne tanımlanır.

#### 2. Sınıf bildirimi yapıldıktan sonra nesne bildirimi:

Bir sınıf tanımlayarak, yeni bir veri tipi oluşturduktan sonra, bu veri tipinden değişkenler oluşturmak için nesne bildirimi yapılır. Nesne bildirimi yapmak için sınıf adı ile birlikte oluşturulacak nesne adı kullanılır:
    
    sınıf-adı nesne-adı

Fonksiyon kodlarını tanımlayan ana yapı içinde yer alan :: işlemcisi bu fonksiyonun sol tarafta yer alan sınıfa ait olduğunu gösterir.


                    #include <iostream>

                    using namespace std;

                    class sinif {
                    private:
                        // Bu değişkene sadece sinif içindeki fonksiyonlar erişim sağlayabilir.
                        int priid;

                    protected:
                        // Bu değişkene sinif içindeki fonksiyonlar ile sinifana sınıfından türetilmiş sınıf fonksiyonları erişim sağlayabilir.
                        int proid;

                    public:
                        // Bu değişkene sinif içindeki fonksiyonlar ve sinif sınıfından türetilmiş sınıf fonksiyonları ile
                        // sinifana türünden ve türetilmiş sınıf türünden oluşturulmuş nesneler doğrudan erişim sağlayabilir.
                        int pubid;
                        void deger_ata(int pid1, int pid2, int pid3)
                        {
                        priid = pid1; proid = pid2; pubid = pid3;
                        cout << "sinif değişkenlerine değer atama: " << priid << " " << proid << " " << pubid << endl;
                        }
                        void deger_goster()
                        {
                        cout << "sinif değişken değerleri: " << priid << " " << proid << " " << pubid << endl;
                        }
                    };

                    int main(void)
                    {
                    sinif nes;

                    cout << "nes değişkeninin sinif elemanlarına erişimi:" << endl;
                    cout << "--------------------------------------------" << endl;
                    nes.deger_ata(7, 21, 135);
                    nes.deger_goster();

                    // nes.priid = 954; // Derleme hatası verir (Nesne sınıf içindeki private değişkene doğrudan erişim sağlayamaz).
                    // nes.proid = 954; // Derleme hatası verir (Nesne sınıf içindeki protected değişkene doğrudan erişim sağlayamaz).
                    nes.pubid = 954;    // Nesne sınıf içindeki public değişkene doğrudan erişim sağlar.

                    nes.deger_goster();

                    return 0;
                    }     

Yukarıdaki programı derleyip çalıştırdığımızda, aşağıdaki ifadeleri ekrana yazar:

                nes değişkeninin sinif elemanlarına erişimi:
                --------------------------------------------
                sinif değişkenlerine değer atama: 7 21 135
                sinif değişken değerleri: 7 21 135
                sinif değişken değerleri: 7 21 954


Program, sinif adlı bir sınıf oluşturur. Sınıf içinde de private, protected ve public olmak üzere üç adet değişken ve bu değişkenlere değer atayan ve ekranda gösteren iki adet fonksiyon tanımlar.
Program çalışmaya başladığında, sinif cinsinden nes adlı bir nesne tanımlar. Nesne yoluyla, sınıf fonksiyonlarını çağırarak, önce deger_ata() fonksiyonu ile sınıf içindeki değişkenlere birer değer atar, sonra deger_goster() fonksiyonu ile değişken değerlerini ekrana yazar. Nesne yoluyla sınıf içindeki pubid adlı public değişkene 954 değeri atar. Sınıf içinde yer alan private ve protected değişkenlere doğrudan nesne yoluyla erişim sağlamaya çalışırsa, program derleme hatası verir. Sonra, deger_goster() fonksiyonu ile değişken değerlerini tekrar ekrana yazar.

Bir sınıftan oluşturulmuş nesneler ayrı bir sınıf kopyası üzerinde işlem yaptığından, farklı nesnelere ait değişken değerlerinin birbiri ile ilgisi yoktur.
Bir sınıf içinde yer alan üye fonksiyonların, aynı sınıf içinde yer alan diğer fonksiyon ve değişkenlere erişim için nokta (.) işlemcisini kullanmasına gerek yoktur.

Bir sınıftan oluşturulan nesne yoluyla sınıf içinde yer alan private ve protected değişken ve fonksiyonlara direk erişim sağlanmaz, bu erişim aynı sınıf içinde yer alan üye fonksiyonlar yoluyla sağlanır.

### Nesneleri birbirine atama:

Bir sınıftan oluşturulmuş olan nesneleri birbirine atayabilirsiniz. Bu durumda, kopyalama birebir yapılır. Atama işlemcisinin sağında yer alan nesnelere ait değerler işlemcinin sol tarafında yer alan nesneye atanır.

                    #include <iostream>

                    using namespace std;

                    class sinif {
                        int id;

                    public:
                        void deger_ata(int pid) { id = pid; }
                        void deger_goster() { cout << id << endl; }
                    };

                    int main(void)
                    {
                    sinif nes1, nes2;

                    nes1.deger_ata(17);

                    nes2 = nes1;

                    nes1.deger_goster();
                    nes2.deger_goster();

                    return 0;
                    }

Yukarıdaki programı derleyip çalıştırdığımızda, aşağıdaki ifadeleri ekrana yazar:

                    17
                    17

Program sinif sınıfından 2 adet nesne oluşturur. İlk nesneye bir değer atadıktan sonra, ilk nesne ikinci nesneye atanır. Her iki nesnede yer alan ve aynı değere sahip değişken değerleri ekrana yazılır.