### Pointers

##### Pointer Nedir?

Pointerlar, bellekte diğer nesnelerin adreslerini işaret eden değişkenlerdir. Herhangi bir veri türünden olabilirler ve bellekteki hafıza adreslerini doğrudan temsil ederler. Pointerlar, bellekteki verilere dolaylı yoldan erişim sağlarlar.


##### Pointer Tanımlama ve İşaret Etme:

Pointer tanımlamak için, veri türü ile birlikte "*" (yıldız) işaretini kullanırız. Pointer, bir değişkenin bellekteki adresini işaret eder. "&" (ampersand) işareti ile bir değişkenin adresini alabilir ve pointer'a atayabiliriz.

    int value = 42;        // int türünde bir değişken oluşturuldu ve 42 değeri atandı
    int* ptr = &value;    // int pointerı tanımlandı ve value değişkeninin adresini işaret etti

Yukarıdaki örnekte, "value" adında bir int değişken tanımlanır ve 42 olarak değeri atanır. Daha sonra "ptr" adında bir int pointerı tanımlanır ve "value" değişkeninin adresine işaret eder.

##### Pointer İle Değer ve Adres Erişimi:

Pointerlar, bellekteki değerlere erişmek veya onları değiştirmek için "*" (yıldız) işaretini kullanırız. Ayrıca, pointerların kendileri bellekteki adresi temsil eder.

    int value = 42;        // int türünde bir değişken oluşturuldu ve 42 değeri atandı
    int* ptr = &value;    // int pointerı tanımlandı ve value değişkeninin adresini işaret etti

    std::cout << *ptr << std::endl;   // Değer erişimi: 42
    std::cout << ptr << std::endl;    // Adres erişimi: Bellekteki hafıza adresi

Yukarıdaki örnekte, "*ptr" ifadesi kullanılarak pointerın işaret ettiği bellek konumundaki değer alınır. Aynı zamanda "ptr" ifadesi kullanılarak pointerın kendisi, yani bellekteki adres alınır.

##### Pointer Aritmetiği:

Pointerlar üzerinde aritmetik işlemler yapabiliriz. Bu, bellekteki ardışık hafıza konumlarına erişim sağlar. Pointerlar, artırma ve azaltma operatörleriyle hareket ettirilebilir.

    int array[] = {1, 2, 3, 4, 5};
    int* ptr = array;

    std::cout << *ptr << std::endl;         // Değer erişimi: 1
    std::cout << *(ptr + 1) << std::endl;   // Değer erişimi: 2
    std::cout << *(ptr + 2) << std::endl;   // Değer erişimi: 3

Yukarıdaki örnekte, "array" adında bir int dizisi tanımlanır ve "ptr" pointerı dizinin başlangıç adresine işaret eder. Daha sonra, pointer aritmetiği kullanılarak bellekteki ardışık hafıza konumlarına erişilir.

##### Pointer ve Dinamik Bellek Tahsisi:

C++ dilinde, new anahtar kelimesiyle dinamik bellek tahsis edebilir ve bu bellek alanına pointer üzerinden erişebiliriz. Dinamik bellek tahsis edildikten sonra, belleği geri vermek için delete anahtar kelimesini kullanmalıyız.

    int* ptr = new int;    // int türünde bir bellek alanı tahsis edildi
    *ptr = 10;             // Bellekteki alana 10 değeri atanır

    delete ptr;            // Bellek geri verildi
    ptr = nullptr;         // Pointer null olarak atanır

Yukarıdaki örnekte, new anahtar kelimesiyle int türünde bir bellek alanı tahsis edilir ve pointer bu alana işaret eder. Daha sonra, pointer aracılığıyla bellek alanına erişilerek değer atanır. Bellek geri vermek için delete anahtar kelimesi kullanılır ve pointer null olarak atanır.

Pointerlar, veri yapılarında, fonksiyonlarda, dinamik bellek tahsisinde ve düşük seviyeli programlama konularında geniş bir kullanım alanına sahiptir. Doğru kullanıldığında, bellekteki verileri etkili bir şekilde işlemek ve yönetmek için önemli bir araç sağlar.