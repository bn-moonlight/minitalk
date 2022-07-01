# minitalk

Hollaa!!!
***

YARDIMCI BİLGİ
---

1- Makefile'ı çalıştır. 

2- 2 terminal aç. 1.'sinde ./server diyerek server'ı çalıştır. pid'i sahip ol. 

3- 2. terminalde ise; 0. argümana ./client, 1. argümana pid, 2. argümana gönderilecek mesajı yaz. Mesaj 1. terminalde gözükecek.
***


BU PROJEDE NE YAPACAĞIZ?
===
***PİD***

Bu projede 2 tane dosya oluşturacağız, client ve server. Clientten servera mesaj gönderceğiz. Bunun için serverın pid'sine ihtiyacımız var. Mesela siz
a kişisine mesaj atabilmek için, onun telefon numarasına ihtiyacımız var. servera mesaj gönderebilmek için de pide ihtiyacımız var. o nedenle ilk olarak
serverın maininden pidini gösteren kod yazmanız gerekiyor. 

***MESAJ***

Mesaj, clientta harf harf alınıp her, harf 8 byte'a çevirilir. ve her byte, bit bit kill fonksiyonu ile pid adresine yani servera gönderilir. en baştaki bit en sola kaydırılır ve her kaydırmada kaydırma sayısı bir azaltılarak, bir sonraki bitin gitmesi sağlanır. 

bitwise yapılır -> https://blog.wokwi.com/bitwise-operators-in-gifs/

kill(nereye, hangi sinyal gönderilecek) -> ben burada; SİGUSR1 sinyalini 1, SİGUSR2 sinyalini 0 olarak nitelendirdim. (SİGUSR1,SİGUSR2 (int) makrodur. Bunun için vscode'a bak.)

gönderilen bitler serverda karşılanır. 1 ise ile "veya" edilir. Değilse bit kaydırma yapılır ve 0 olarak kalır. 1 olduktan sonra da bit kaydırma yapılır ve bir sonraki sinyal karşılanır. 

****

pfffffff benim anlatacaklarım bu kadar. çok basit aslında :)
