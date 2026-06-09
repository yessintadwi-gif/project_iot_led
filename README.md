# 🚀 IoT Project: Smart control led

Repositori ini berisi proyek integrasi IoT yang menghubungkan kontrol 3 buah lampu LED (Merah, Kuning, Hijau) pada mikrokontroler Arduino dengan Web Dashboard interaktif berbasis Node.js (Smart JS).

Untuk menjaga kerapian struktur, proyek ini dibagi menjadi 2 cabang (**Branch**):
1. **Branch `main`** : Menyimpan Source Code (SC) Arduino asli untuk kontrol LED.
2. **Branch `master`** : Menyimpan berkas Web Dashboard dari Visual Studio Code.

---

## 🔌 Langkah 1: Skema Rangkaian Elektronika (Hardware)

Sebelum menjalankan program, pastikan Anda telah merangkai komponen elektronik pada papan Arduino dengan konfigurasi pin sebagai berikut:

* **LED Merah:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 5** Arduino.
* **LED Kuning:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 6** Arduino.
* **LED Hijau:** Hubungkan kaki Positif (Anoda) ke **Pin Digital 3** Arduino.
* **GND:** Hubungkan semua kaki Negatif (Katoda) LED ke pin **GND** Arduino (Gunakan resistor 220 Ohm pada masing-masing LED untuk keamanan arus).

---

## ⚙️ Langkah 2: Mengunduh Proyek (Clone)

Buka terminal di komputer Anda (Git Bash / Command Prompt), lalu ketik perintah berikut untuk mendownload proyek:
```bash
git clone [https://github.com/febrypradana/Arduino_Project_led.git](https://github.com/febrypradana/Arduino_Project_led.git)
Atau, Anda bisa klik tombol hijau <> Code di atas halaman GitHub ini, lalu pilih Download ZIP dan ekstrak foldernya.

🛠️ Langkah 3: Menjalankan Source Code Arduino (Branch main)
Langkah pertama pengujian adalah memasukkan program utama ke dalam perangkat keras Arduino:

Pindah ke Branch Main:
Buka terminal di dalam folder proyek hasil download tadi, lalu pindah ke cabang khusus Arduino dengan perintah:

Bash
git checkout main
Buka dengan Arduino IDE:
Masuk ke folder proyek, lalu klik dua kali pada file berkas kode Arduino Anda (Arduino_Project_led.ino) hingga terbuka di aplikasi Arduino IDE.

Hubungkan Perangkat:
Colokkan papan Arduino Anda ke komputer/laptop menggunakan kabel USB.

Atur Board dan Port:

Masuk ke menu Tools > Board -> Pilih jenis papan Anda (misal: Arduino Uno).

Masuk ke menu Tools > Port -> Pilih Port COM yang aktif (contoh: COM3). Catat nomor port ini untuk konfigurasi Web Dashboard.

Upload Program:
Klik ikon Panah Kanan (Upload) di pojok kiri atas Arduino IDE. Tunggu hingga muncul tulisan Done Uploading.

💻 Langkah 4: Menjalankan Web Dashboard Smart JS (Branch master)
Setelah perangkat keras Arduino siap dan menyala, jalankan aplikasi web kontrol dari VS Code:

Buka Folder di VS Code:
Buka aplikasi Visual Studio Code, pilih menu File > Open Folder, dan arahkan ke folder proyek Anda.

Pindah ke Branch Master:
Pastikan Anda beralih ke branch dashboard dengan mengetik perintah ini di terminal VS Code:

Bash
git checkout master
Install Dependensi:
Unduh semua library Node.js pendukung (seperti serialport dan express) dengan mengetik perintah:

Bash
npm install
Konfigurasi File server.js:
Buka file server.js dan pastikan konfigurasi koneksinya sinkron dengan kode Arduino:

Baud Rate: Harus diset ke 19200 agar data komunikasi tidak rusak.

Port: Sesuaikan nilai port (misal: path: 'COM3') dengan nomor port USB Arduino Anda saat upload tadi.

Jalankan Server:
Ketik perintah ini di terminal untuk menyalakan server lokal:

Bash
node server.js
Akses Dashboard Web:
Buka browser (Google Chrome/Edge), lalu akses alamat: http://localhost:3000

🎮 Langkah 5: Logika Pengujian Alat
Saat Web Dashboard telah terbuka di browser, tombol-tombol pada antarmuka akan mengirimkan perintah khusus ke Arduino dengan respon sebagai berikut:

Tombol 1: Mengirim karakter '1' ➡️ Membikin LED Merah Menyala.

Tombol 2: Mengirim karakter '2' ➡️ Membikin LED Kuning Menyala.

Tombol 3: Mengirim karakter '3' ➡️ Membikin LED Hijau Menyala.

Tombol 4: Mengirim karakter '4' ➡️ Semua LED Otomatis Mati Bersamaan.

Tombol 5: Mengirim karakter '5' ➡️ Semua LED Otomatis Menyala Bersamaan.

Catatan: Anda juga dapat memantau aktivitas penerimaan karakter ini secara real-time melalui fitur Serial Monitor bawaan Arduino IDE de
