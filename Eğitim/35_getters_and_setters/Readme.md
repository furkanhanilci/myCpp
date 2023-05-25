### Getters and Setters

##### Getters:

Getter fonksiyonları (okuyucular), bir sınıftaki özel veri üyelerine erişmek ve değerlerini döndürmek için kullanılır. Bu fonksiyonlar, veri gizliliğini sağlamak ve üye değişkenlerin doğrudan erişime açık olmasının önüne geçmek için kullanılır. Böylece, sınıfın içindeki veri üyelerine kontrol edilmiş bir erişim sağlanır. Getter fonksiyonları genellikle üye değişkenlerin değerlerini döndüren ve değiştirmeyen const fonksiyonlar olarak tanımlanır. Bu, fonksiyonun sınıfın durumunu değiştirmediğini belirtir.

    class User {
        std::string username;
        std::string password;

    public:
        // Getter fonksiyonu tanımlanmıştır.
        std::string getUsername() const {
            return username;
        }
    };

Yukarıdaki örnekte, getUsername adında bir getter fonksiyonu tanımlanmıştır. Bu fonksiyon, username üye değişkeninin değerini döndürmektedir. Fonksiyonun const niteliği, bu fonksiyonun sınıfın durumunu değiştirmediğini ve sadece veriye okuma erişimi sağladığını belirtir.

##### Setters:

Setter fonksiyonları (yazıcılar), bir sınıftaki özel veri üyelerine yeni değerler atamak veya güncellemek için kullanılır. Setter fonksiyonları, geçerlilik kontrolü yapma, değer atama öncesinde veya sonrasında başka işlemler gerçekleştirme gibi ek özelleştirme imkanları sunar. Setter fonksiyonları genellikle void dönüş türüne sahiptir ve bir veya daha fazla parametre alır.

    class User {
        std::string username;
        std::string password;

    public:
        // Setter fonksiyonu tanımlanmıştır.
        void setUsername(const std::string& newUsername) {
            // Geçerlilik kontrolü yapılabilir.
            if (newUsername.length() >= 6) {
                username = newUsername;
            }
        }
    };

Yukarıdaki örnekte, setUsername adında bir setter fonksiyonu tanımlanmıştır. Bu fonksiyon, newUsername parametresini alır ve username üye değişkenine atama yapar. Fonksiyon içinde geçerlilik kontrolü yapılarak, yeni kullanıcı adının belirli bir uzunluk koşulunu sağlaması gerektiği kontrol edilmektedir. Bu sayede, sınıfın içindeki veri üyelerine kontrollü bir şekilde erişim sağlanmış olur.

Getter ve setter fonksiyonları, sınıfların veri üyelerine erişimini kontrol eder ve veri gizliliğini sağlar. Böylece, sınıfın içindeki verilere doğrudan erişimin önüne geçilir ve veri bütünlüğü sağlanır. Ayrıca, gelecekte sınıfın iç yapısını değiştirmeniz gerektiğinde, getter ve setter fonksiyonları kullanarak dışarıdaki kodun etkilenmemesini sağlayabilirsiniz.