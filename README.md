# 🔒 Szyfr Cezara (Caesar Cipher)

## Opis projektu
Prosta implementacja klasycznego algorytmu szyfru Cezara w języku C++. Projekt powstał w celach edukacyjnych, aby przećwiczyć operacje na znakach ASCII, pętle oraz zastosowanie podstawowej logiki kryptograficznej.

Repozytorium jest częścią moich projektów edukacyjnych realizowanych w czasie wolnym.

## ⚙️ Funkcjonalność
Aplikacja konsolowa przyjmuje od użytkownika:
1.  Tekst do zaszyfrowania (obsługuje małe i duże litery).
2.  Klucz przesunięcia (shift key).
Następnie zwraca zaszyfrowany tekst, używając logiki modulo 26, aby zapewnić cykliczne przesunięcie w alfabecie.

## 🛠️ Uruchomienie (Visual Studio)
1.  Sklonuj repozytorium: `git clone https://github.com/MaxPowerPL/szyfr-cezara.git`
2.  Otwórz plik `Szyfr cezara.sln` w programie **Visual Studio**.
3.  Uruchom kompilację i program.

## ✨ Struktura kodu
* **szyfrCezara.cpp:** Główny plik źródłowy zawierający logikę szyfrowania (`caesarCipher`).
* **Szyfr cezara.sln / .vcxproj:** Pliki konfiguracyjne projektu Visual Studio.