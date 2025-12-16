<div align="center">

  # 🔐 Szyfr Cezara

  **Klasyczna implementacja algorytmu szyfru Cezara w języku C++**
  <br>
  *Edukacyjny projekt kryptografii podstawowej z obsługą alfabetu łacińskiego*

  <p>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara/tags">
      <img src="https://img.shields.io/github/v/tag/MaxPowerPL/szyfr-cezara?label=VERSION&style=for-the-badge&color=238636" alt="Wersja" />
    </a>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara">
      <img src="https://img.shields.io/badge/Status-Stable-success?style=for-the-badge" alt="Status" />
    </a>
    <a href="https://isocpp.org/">
      <img src="https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++" />
    </a>
    <a href="https://gcc.gnu.org/">
      <img src="https://img.shields.io/badge/Compiler-G++%20%7C%20Clang-A8B9CC?style=for-the-badge&logo=gnu&logoColor=white" alt="Compiler" />
    </a>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara/stargazers">
      <img src="https://img.shields.io/github/stars/MaxPowerPL/szyfr-cezara?style=for-the-badge&color=yellow" alt="Stars" />
    </a>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara/commits">
      <img src="https://img.shields.io/github/last-commit/MaxPowerPL/szyfr-cezara?style=for-the-badge" alt="Last Commit" />
    </a>
    <a href="LICENSE">
      <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License" />
    </a>
  </p>

  <p>
    <a href="#-o-projekcie">📖 O Projekcie</a> •
    <a href="#-funkcjonalności">✨ Funkcjonalności</a> •
    <a href="#-instalacja-i-uruchomienie">🚀 Instalacja</a> •
    <a href="#-struktura-projektu">📂 Struktura</a> •
    <a href="#%EF%B8%8F-roadmapa">🗺️ Roadmapa</a>
  </p>
</div>

---

## 📖 O Projekcie

**Szyfr Cezara** to implementacja jednego z najstarszych algorytmów kryptograficznych w historii, używanego przez Juliusza Cezara do szyfrowania komunikacji wojskowej. Projekt powstał w celach edukacyjnych, aby zademonstrować podstawy szyfrowania podstawieniowego i operacji na znakach ASCII.

Program napisany w **C++17** umożliwia szyfrowanie i deszyfrowanie wiadomości tekstowych metodą przesunięcia alfabetycznego. Implementacja obsługuje wielkie i małe litery alfabetu łacińskiego, zachowując przy tym znaki specjalne, cyfry i spacje w niezmienionej formie. To doskonałe narzędzie do nauki podstaw kryptografii i algorytmów szyfrujących.

### 🎯 Aktualna Wersja: `v1.0 (Stable)`
Pierwsze stabilne wydanie z pełną implementacją algorytmu szyfru Cezara. Obsługa szyfrowania i deszyfrowania tekstu z dowolnym przesunięciem (1-25). Kod przeszedł testy jednostkowe dla różnych przypadków brzegowych.

---

## ✨ Funkcjonalności

Co już działa w tej wersji?

- [x] **🔐 Algorytm Szyfrowania**:
  - **Szyfrowanie tekstu**: Przesunięcie alfabetyczne o n pozycji (1-25).
  - **Deszyfrowanie tekstu**: Odwrócenie operacji szyfrowania.
  - **Obsługa wielkości liter**: Zachowanie case sensitivity (A-Z, a-z).
- [x] **📝 Interfejs Użytkownika**:
  - **Interaktywna konsola**: Menu wyboru operacji (szyfruj/deszyfruj).
  - **Walidacja inputu**: Sprawdzanie poprawności klucza (zakres 1-25).
  - **Czytelny output**: Wyświetlanie oryginalnego i zaszyfrowanego tekstu.
- [x] **🛡️ Bezpieczeństwo**:
  - **Brak modyfikacji znaków specjalnych**: Cyfry, spacje i znaki interpunkcyjne pozostają niezmienione.
  - **Ochrona przed overflow**: Modulo 26 dla cykliczności alfabetu.
- [ ] **🚀 Rozszerzenia** (W przygotowaniu):
  - **Brute Force Attack**: Automatyczne próby wszystkich 25 możliwych kluczy.
  - **Analiza częstotliwości**: Statystyka występowania liter w zaszyfrowanym tekście.

---

## 🛠️ Technologie

Projekt został zbudowany przy użyciu:

| Technologia | Opis |
| :--- | :--- |
| **C++17** | Język programowania - STL (string, iostream, cctype). |
| **G++/Clang** | Kompilator C++ z obsługą standardu C++17. |
| **Algorytm Cezara** | Szyfr podstawieniowy z przesunięciem alfabetycznym. |
| **ASCII** | Kodowanie znaków dla operacji char → int. |

---

## 🚀 Instalacja i Uruchomienie

Aby uruchomić projekt na swoim komputerze, wykonaj następujące kroki:

### 1. Wymagania
- **Kompilator C++17** (G++ 7.0+, Clang 5.0+ lub MSVC 19.14+)
- **Git** (do klonowania repozytorium)
- **Terminal/CMD** (do kompilacji i uruchomienia)

### 2. Klonowanie repozytorium
```bash
git clone https://github.com/MaxPowerPL/szyfr-cezara.git
cd szyfr-cezara
```

### 3. Konfiguracja środowiska

**Windows:**
```bash
# Jeśli używasz MinGW/MSYS2:
g++ --version  # Sprawdź wersję kompilatora
```

**macOS/Linux:**
```bash
# Sprawdź dostępność kompilatora:
g++ --version
# lub
clang++ --version
```

### 4. Kompilacja
```bash
# Kompilacja z optymalizacją:
g++ -std=c++17 -O2 main.cpp -o szyfr_cezara

# Wersja deweloperska z debugowaniem:
g++ -std=c++17 -g -Wall -Wextra main.cpp -o szyfr_cezara_debug
```

### 5. Uruchomienie
```bash
# Linux/macOS:
./szyfr_cezara

# Windows:
szyfr_cezara.exe
```

### 6. Użycie
1. **Wybierz operację**: Program wyświetli menu wyboru (1 - Szyfruj, 2 - Deszyfruj).
2. **Wprowadź tekst**: Wpisz wiadomość do przetworzenia (obsługuje polskie znaki).
3. **Podaj klucz**: Wprowadź liczbę przesunięcia (1-25).
4. **Odbierz wynik**: Program wyświetli zaszyfrowany/odszyfrowany tekst.

**Przykład interakcji:**
```text
=== SZYFR CEZARA ===
1. Szyfruj wiadomość
2. Deszyfruj wiadomość
Wybór: 1

Wprowadź tekst: Hello World
Podaj klucz (1-25): 3
Zaszyfrowany tekst: Khoor Zruog
```

---

## 📂 Struktura Projektu

Projekt oparty na architekturze monolitycznej - jeden plik źródłowy z modułowymi funkcjami.

```text
📦 szyfr-cezara
┣ 📂 assets/
┃ ┗ 📂 images/
┃   ┗ 🖼️ logo.png           # Logo projektu (opcjonalne)
┣ 📜 main.cpp               # Kod źródłowy z algorytmem
┣ 📜 README.md              # Dokumentacja projektu
┣ 📜 LICENSE                # Licencja MIT
┗ 📜 .gitignore             # Wykluczenie plików binarnych
```

### Opis głównych modułów:

#### `main.cpp`
| Funkcja | Opis |
|------|------|
| `szyfruj(string, int)` | Szyfruje tekst przesuwając znaki alfabetu o podaną liczbę pozycji. |
| `deszyfruj(string, int)` | Odwraca operację szyfrowania (przesunięcie w przeciwnym kierunku). |
| `walidujKlucz(int)` | Sprawdza, czy klucz jest w zakresie 1-25. |
| `main()` | Główna pętla programu z menu użytkownika. |

**Logika algorytmu:**
```cpp
// Pseudokod dla małych liter:
if (znak >= 'a' && znak <= 'z') {
    zaszyfrowany = ((znak - 'a' + klucz) % 26) + 'a';
}
```

---

## 🔐 Jak Działa Szyfr Cezara?

### Matematyczna Reprezentacja:

**Szyfrowanie:**
\[ E(x) = (x + k) \mod 26 \]

**Deszyfrowanie:**
\[ D(x) = (x - k) \mod 26 \]

Gdzie:
- \( x \) = pozycja litery w alfabecie (A=0, B=1, ..., Z=25)
- \( k \) = klucz (przesunięcie)
- \( \mod 26 \) = operacja modulo dla cykliczności alfabetu

### Przykład:
```text
Tekst oryginalny: "WIKIPEDIA"
Klucz: k = 3

W → Z (22 + 3 = 25)
I → L (8 + 3 = 11)
K → N (10 + 3 = 13)
...

Zaszyfrowany tekst: "ZLNLSHGLD"
```

---

## 🗺️ Roadmapa

Plany rozwoju projektu:

### Faza 1: Podstawowa Implementacja ✅ (Ukończone)
- [x] Implementacja algorytmu szyfrowania
- [x] Implementacja deszyfrowania
- [x] Obsługa wielkich i małych liter
- [x] Walidacja inputu użytkownika

### Faza 2: Rozszerzenia Funkcjonalne 🚧 (W trakcie)
- [ ] Brute force attack (próba wszystkich kluczy)
- [ ] Zapis do pliku (input.txt → output.txt)
- [ ] Obsługa znaków diakrytycznych (ą, ę, ś, etc.)

---

## 🐛 Znane Problemy i Rozwiązania

### ✅ Naprawione w v1.0:
- **Błąd overflow dla dużych kluczy**: Dodano modulo 26 dla normalizacji przesunięcia.
- **Niepoprawna obsługa znaków spoza alfabetu**: Implementacja `isalpha()` przed operacją.

### 🔧 Do poprawy:
- [ ] Brak obsługi UTF-8 (polskie znaki jak ą, ę nie są szyfrowane)
- [ ] Program nie zapisuje historii operacji
- [ ] Brak trybu wsadowego (batch processing plików)

---

## 📝 Changelog

### v1.0 (Initial Release)
**NEW FEATURES:**
- Pełna implementacja algorytmu szyfru Cezara
- Interaktywne menu konsolowe
- Szyfrowanie i deszyfrowanie z dowolnym kluczem (1-25)
- Obsługa wielkich i małych liter alfabetu łacińskiego

**Zmiany techniczne:**
- Kod zgodny ze standardem C++17
- Użycie STL (string, iostream, cctype)
- Walidacja inputu z obsługą błędów

---

## 📜 Licencja

Ten projekt jest udostępniony na licencji **MIT**.

### Co MOŻESZ robić:
- ✅ Używać kodu w projektach osobistych i komercyjnych
- ✅ Modyfikować i rozbudowywać projekt
- ✅ Dystrybuować kopie oryginalnego i zmodyfikowanego kodu

### Wymagania:
- ℹ️ Dołącz kopię licencji MIT w swoim projekcie
- ℹ️ Zachowaj informację o prawach autorskich

### Użytek komercyjny
Licencja MIT pozwala na dowolne użycie komercyjne bez opłat. Kod można włączać do produktów zamkniętych (closed-source) bez konieczności ujawniania modyfikacji.

Zobacz pełne warunki prawne w pliku [LICENSE](LICENSE).

---

<div align="center">

### ⭐ Jeśli podoba Ci się ten projekt, zostaw gwiazdkę na GitHubie! ⭐

☕ Stworzono używając C++17, algorytmów kryptograficznych i pasji do edukacji.
<br>
<sub>Projekt edukacyjny stworzony dla studentów i entuzjastów kryptografii.</sub>
<br>
<sub>**Licencja MIT** - Wolne oprogramowanie do użytku komercyjnego i osobistego. Zobacz [LICENSE](LICENSE) po szczegóły.</sub>

<p>
  <a href="https://github.com/MaxPowerPL/szyfr-cezara/issues/new">🐛 Zgłoś Bug</a> •
  <a href="https://github.com/MaxPowerPL/szyfr-cezara/issues/new">💡 Zaproponuj Funkcję</a> •
  <a href="https://github.com/MaxPowerPL/szyfr-cezara">📖 Repozytorium</a>
</p>

![Status](https://img.shields.io/badge/Status-Production%20Ready-brightgreen?style=for-the-badge&logo=checkmarx&logoColor=white)

</div>
