# 🔌 Source Code Arduino: control led

Halaman ini khusus memuat kode program utama (*Source Code*) untuk mengontrol 3 buah lampu LED (Merah, Kuning, Hijau) pada mikrokontroler Arduino menggunakan komunikasi data Serial.

---

## 🛠️ Skema Rangkaian Elektronika (Hardware)

Sebelum mengunggah kode program, pastikan komponen elektronik pada papan Arduino Anda sudah dirangkai dengan konfigurasi pin berikut:

* **LED Merah:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 5** Arduino dan resistor ke kaki negatif (katoda).
* **LED Kuning:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 6** Arduino dan resistor ke kaki negatif (katoda).
* **LED Hijau:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 7** Arduino dan resistor ke kaki negatif (katoda).
* **GND (Ground):** Hubungkan semua kaki Negatif (Katoda) LED ke pin **GND** Arduino
---

## 💻 Langkah-Langkah Menjalankan Kode Program

Ikuti panduan berikut untuk memasukkan dan menguji program pada papan Arduino Anda:

1. **Buka File Program:**
   Buka file berkas bernama `Arduino_Project_led.ino` menggunakan aplikasi **Arduino IDE**.
2. **Hubungkan Perangkat:**
   Sambungkan papan Arduino Anda ke komputer atau laptop menggunakan kabel USB data.
3. **Konfigurasi Board:**
   Masuk ke menu **Tools > Board** di Arduino IDE, lalu pilih jenis papan yang Anda gunakan (contoh: *Arduino Uno*).
4. **Konfigurasi Port:**
   Masuk ke menu **Tools > Port**, kemudian pilih nomor port COM yang sedang aktif terdeteksi (contoh: `COM3` atau `COM4`).
5. **Upload Program:**
   Klik tombol ikon **Panah Kanan (Upload)** di pojok kiri atas Arduino IDE. Tunggu beberapa saat sampai muncul status tulisan **"Done Uploading"** di bagian bawah.

---

##  Logika Perintah Komunikasi Serial

Program ini menerima instruksi berupa karakter/angka tunggal melalui komunikasi Serial dengan kecepatan data **19200 Baud Rate**. Anda dapat mengujinya langsung lewat fitur **Serial Monitor** bawaan Arduino IDE dengan mengirimkan karakter berikut:

* **Karakter `'1'`** ➡️ Mengaktifkan/Menyalakan **LED Merah** (tanpa memengaruhi LED lain).
* **Karakter `'2'`** ➡️ Mengaktifkan/Menyalakan **LED Kuning**.
* **Karakter `'3'`** ➡️ Mengaktifkan/Menyalakan **LED Hijau**.
* **Karakter `'4'`** ➡️ Mematikan **Semua LED** secara bersamaan.
* **Karakter `'5'`** ➡️ Menyalakan **Semua LED** secara bersamaan.

Setiap kali ada yang diketik perintah angka yang masuk, Arduino akan mengirimkan umpan balik ke komputer berupa teks:  
