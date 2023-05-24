
Nesneye yönelik programlama (OOP) çalışma sistemi sınıflar içinde yer alan iki temel kavram üzerinde şekillenir:
1. Değişkenler (veriler): OOP ile geliştirilen uygulamalarda ihtiyaç duyulan farklı türden değişkenler sınıf içinde tanımlanır.
2. Değişkenlere işlem yapan fonksiyonlar (metodlar): OOP ile geliştirilen uygulamalarda sınıf içinde tanımlanan değişkenlere işlem yapmak üzere fonksiyonlar içinde kodlar tanımlanır.

#### Sınıf (Class) bildirimi:
Bir nesne oluşturmadan önce, class anahtar kelimesini kullanarak nesnenin tüm özellik (değişkenler) ve davranışlarını (fonksiyonlar) gösteren genel yapısını tanımlamamız gerekir.
Sınıflar class anahtar kelimesi ile oluşturulur. 
Bir sınıf oluşturulduğunda, sınıf içindeki değişkenlere yine sınıf içindeki fonksiyonların işlem yapmasını sağlayan yeni bir veri türü tanımlanmış olur.
Sınıf adı verilen bu yeni veri türü oluşturulduktan sonra, bu sınıfa ait nesne bildirimi yapılır. Bu işlem, int bir veri türünden değişken tanımlamaya benzer.

Bir sınıf bildiriminin genel yapısı aşağıda gösterilmektedir:
    
                class sınıf-adı {
                // private veri ve fonksiyonlar
                private:   
                    veri-türü değişken_adı;
                    .
                    .
                    veri-türü değişken_adı;
                
                    veri-türü fonksiyon_adı (veri-türü);
                    .
                    .
                    veri-türü fonksiyon_adı (veri-türü);
                    
                // protected veri ve fonksiyonlar
                protected:
                    veri-türü değişken_adı;
                    .
                    .
                    veri-türü değişken_adı;
                
                    veri-türü fonksiyon_adı (veri-türü);
                    . 
                    .
                    veri-türü fonksiyon_adı (veri-türü);

                // public veri ve fonksiyonlar
                public:
                    veri-türü değişken_adı;
                    .
                    .
                    veri-türü değişken_adı;
                
                    veri-türü fonksiyon_adı (veri-türü);
                    . 
                    .
                    veri-türü fonksiyon_adı (veri-türü);	 

                } nesne/nesne-listesi; // İsteğe bağlı olarak tanımlanır.

Bir sınıf içinde bildirimi yapılan tüm fonksiyon ve veriler, ön tanımlı olarak, private özelliği taşır ve sadece sınıfın diğer üyeleri tarafından erişilebilir.
Bir sınıf içinde yer alan protected fonksiyon ve verilere ise; bu sınıftan türetilen alt sınıflar public olarak türetildiğinde, alt sınıfların içindeki fonksiyonlar direk erişim sağlayabilir.
Bir sınıf içinde yer alan public fonksiyon ve verilere ise, programın içinde yer alan kodların tamamı tarafından erişim sağlanabilir.

Sınıf içindeki üye fonksiyonların kod bloğu sınıf içinde veya sınıf dışında ayrıca yapılabilir.
private, public ve protected erişim tanımlayıcılarından birisi kullanıldığında, başka bir erişim tanımlayıcısı ile karşılaşana veya sınıf bildiriminin sonu gelene kadar, erişim tanımlayıcının geçerliliği devam eder.

Erişim tanımlayıcılarını istediğimiz sayıda ve farklı sıralamalarla kullanabiliriz.
Aşağıdaki kod satırları sinif isimli bir sınıf tanımlar:

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
                    };

Yukarıdaki sınıf tanımlamasında, priid değişkeni private olduğundan, bu sınıf elemanına sınıf üyesi olmayan herhangi bir fonksiyon tarafından erişilemez.
Bu özellik nesneye yönelik programlama dilinin kapsülleme özelliğinin bir sonucudur.
public olarak tanımlanan deger_ata() ve deger_goster() fonksiyonları sinif sınıfında yer aldıklarından üye fonksiyonlardır.
Aynı zamanda, priid, proid, pubid değişkenleri de sinif sınıfında yer aldıklarından üye değişkenlerdir.

OOP ile geliştirilen uygulamalarda program içinde, veriler ile verilere işlem yapacak olan fonksiyonlar (metodlar) sınıf (class) adı verilen yapıların içinde tanımlanır.
Sınıf tanımlandıktan sonra bu sınıf türünden bir değişken (nesne) oluşturularak, bu nesne yoluyla sınıf içinde yer alan tüm değişken ve fonksiyonlara erişim sağlanır.

Bir sınıf içinde bildirimi yapılan fonksiyonlara üye fonksiyon adı verilir. Üye fonksiyonlar içinde tanımlandıkları sınıftaki private, public ve protected olmak üzere tüm elemanlara erişim sağlayabilirler.
Bir sınıf içinde bildirimi yapılan değişkenlere üye değişken adı verilir.

Bir sınıf içindeki private fonksiyon ve değişkenlere, sadece sınıf içindeki fonksiyonlar yoluyla, protected değişkenlere, sınıf içindeki fonksiyonlar ile bu sınıftan public olarak türetilen alt sınıfların fonksiyonları yoluyla, public değişkenlere ise, sınıf içindeki fonksiyonlar, bu sınıftan türetilen alt sınıfların fonksiyonları ve programın herhangi bir yerinde tanımlanan sınıf nesneleri yoluyla erişim sağlanabilir.

Eğer bir değişken veya fonksiyon için herhangi bir erişim türü tanımı yapılmamışsa, ön tanımlı olarak, private kabul edilir.

Bir sınıf içindeki değişken ve fonksiyonlara, program içinde bildirimi yapılan sınıf türünden nesneler yoluyla erişmek için, bu değişken ve fonksiyonları public: ifadesinden sonra tanımlamamız gerekir. Bu durumda, programımızın sınıf dışındaki fonksiyonları tanımlanan sınıftan oluşturulan nesneye public fonksiyonlar yoluyla erişim sağlar. Tüm değişkenleri private ve bu verilere dışarıdan erişimi public tanımlı sınıf fonksiyonlarıyla yapmak veri güvenliği açısından en tercih edilen yöntem olarak kabul görür.


   
    
