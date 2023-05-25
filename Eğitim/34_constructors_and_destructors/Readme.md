### Constructor / Destructor

Sınıfların özel üye fonksiyonlarıdır. İşlevler, sınıf örneği oluşturulduğunda veya bellekten silindiğinde otomatik olarak çağrılırlar.

##### Constructor (Yapıcı):

Constructorlar, bir sınıfın nesnesi oluşturulduğunda çağrılan özel üye fonksiyonlardır. Constructorlar, sınıfın üye değişkenlerini başlatmak ve başlangıç değerlerini atamak için kullanılır. Ayrıca, dinamik bellek tahsisi gibi ön hazırlık işlemlerini gerçekleştirmek için de kullanılabilirler.

Constructorlar, aşağıdaki özelliklere sahiptir:

- Constructorlar, sınıfın adıyla aynı isme sahiptirler.
- Geri dönüş değerine sahip değillerdir, hatta void bile değil.
- Birden fazla constructor tanımlayabilirsiniz, bu duruma "constructor overloading" denir. Farklı parametre listeleriyle aynı isimde birden fazla constructor tanımlayabilirsiniz.
- Constructorlar, sınıfın içinde veya sınıf dışında tanımlanabilirler.
- Eğer herhangi bir constructor tanımlanmazsa, derleyici tarafından otomatik olarak varsayılan bir constructor oluşturulur.

Örneğin, aşağıda bir "User" sınıfı ve bu sınıfa ait bir constructor örneği verilmiştir:

                class User {
                    std::string username;
                    std::string password;

                public:
                    // Parametre alan bir constructor tanımlanmıştır.
                    User(const std::string& username, const std::string& password) {
                        this->username = username;
                        this->password = password;
                    }
                };

Yukarıdaki örnekte, "User" sınıfının bir constructor'ı tanımlanmıştır. Bu constructor, "username" ve "password" isimli iki parametre alır. Bu parametreler, constructor içinde sınıfın üye değişkenlerine atanır.


##### Destructor (Yıkıcı):

Destructorlar, bir sınıfın nesnesi bellekten silindiğinde çağrılan özel üye fonksiyonlardır. Destructorlar, bir sınıfın nesnesiyle ilişkili kaynakları serbest bırakmak ve temizleme işlemlerini gerçekleştirmek için kullanılır. Bellek yönetimi, dosya işlemleri, ağ bağlantıları gibi kaynakların temizlenmesi genellikle destructor içinde yapılır.

Destructorlar aşağıdaki özelliklere sahiptir:

- Destructorlar, sınıfın adının önüne "~" işareti koyularak tanımlanır.
- Destructorlar, parametre almazlar ve geri dönüş değerine sahip değillerdir.
- Her sınıf için yalnızca bir destructor tanımlanabilir. Eğer bir destructor tanımlanmazsa, derleyici tarafından otomatik olarak varsayılan bir destructor oluşturulur.
- Destructorlar, sınıfın içinde veya sınıf dışında tanımlanabilirler.

Örneğin, aşağıdaki örnekte "User" sınıfına bir destructor eklenmiştir:

                class User {
                    std::string username;
                    std::string password;

                public:
                    // Constructor tanımlanmıştır.
                    User(const std::string& username, const std::string& password) {
                        this->username = username;
                        this->password = password;
                    }

                    // Destructor tanımlanmıştır.
                    ~User() {
                        // Bellek veya kaynak temizleme işlemleri yapılır.
                    }
                };

Yukarıdaki örnekte, "~User" adında bir destructor tanımlanmıştır. Destructor, "User" sınıfının bir nesnesi bellekten silindiğinde çağrılır ve bellek veya diğer kaynakların serbest bırakılması işlemlerini gerçekleştirir.
