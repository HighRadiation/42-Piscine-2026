# ex01
- id -Gn $FT_USER — kullanıcının grup adlarını listeler. -G grup ID'leri verir. -n isimlere çevirir. Boşlukla ayrılmış gelir.
- tr ' ' ',' — boşlukları virgüle çevirir.
- tr -d '\n' — sondaki satır sonunu siler. Konu ekranındaki $> bitişik duruyor.

# ex02
- find . — bulunduğun klasörden başlar. Alt klasörlere de iner.
- -type f — sadece dosyalar. Klasörleri eler.
- -name "*.sh" — .sh ile bitenleri seçer. Tırnak önemli, shell genişletmesin.
- -exec basename {} .sh \; — her sonuç için basename çalıştırır. {} bulunan dosya yolu. İkinci argüman .sh uzantıyı keser. basename yol kısmını da atar. \; exec'i bitirir.

# ex03
- find . — bulunduğun klasörden başlar. "." kendisi de sonuca dahil olur.
- \( -type f -o -type d \) — normal dosya VEYA klasör. -o "or" demek. Parantez gruplar, ters bölü shell'den kaçırır.
- | wc -l — gelen satırları sayar. Her sonuç bir satır. Toplam sayıyı basar.

# ex04
- ifconfig — tüm ağ arayüzlerini uzun uzun basar. MAC adresi "ether" satırında durur.
- grep ether — sadece "ether" geçen satırları alır. Diğer her şey elenir.
- tr -s ' ' — arka arkaya gelen boşlukları teke indirir. Satır başındaki girinti bozmasın diye.
- cut -d ' ' -f 3 — boşlukla böler, 3. parçayı alır. Satır " ether MAC ..." şeklinde. 1. parça boş, 2. "ether", 3. MAC.

# ex05
Dosya adı: "\?$*'MaRViN'*$?\"  (tırnaklar adın parçası)

- printf '42' > DOSYA — dosyayı oluşturur, içine sadece 42 yazar. echo kullanma, sonuna \n ekler. Konu 2 bayt istiyor.
- Ad tek tırnak içine alınır. İçindeki \ ? $ * " karakterleri shell'den kaçar.
- Ama adın içinde tek tırnak da var. Tek tırnak, tek tırnak içinde kaçırılamaz.
- Çözüm: '"'"' kalıbı. Tek tırnağı kapat, çift tırnak içinde tek tırnak yaz, tekrar aç.
- Tam komut: printf '42' > '"\?$*'"'"'MaRViN'"'"'*$?\"'
- Kontrol: ls | od -c ile bayt bayt bak. Ad yanlışsa hemen görünür.

# ex06
- ls -l | sed -n '1~2p'
- ls -l — uzun listeleme. İlk satır "total N" olur, o da sayılır.
- sed -n — sed'in her satırı otomatik basmasını kapatır. Sadece p dediğim yeri basar.
- '1~2p' — 1. satırdan başla, ikişer ikişer atla. Yani 1, 3, 5, 7... p bas demek.
- ~ adım operatörü GNU sed'e özel. Okulda Linux var, sorun yok.
