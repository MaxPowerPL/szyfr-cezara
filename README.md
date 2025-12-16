<div align="center">

# 🔐 Szyfr Cezara

**Klasyczna implementacja algorytmu szyfru Cezara w języku C++**

<div style="display: flex; gap: 10px; justify-content: center; flex-wrap: wrap;">
    <a href="LICENSE">
      <img src="https://img.shields.io/github/license/MaxPowerPL/szyfr-cezara?style=for-the-badge" alt="License" />
    </a>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara/stargazers">
      <img src="https://img.shields.io/github/stars/MaxPowerPL/szyfr-cezara?style=for-the-badge&color=yellow" alt="Stars" />
    </a>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara">
      <img src="https://img.shields.io/github/last-commit/MaxPowerPL/szyfr-cezara?style=for-the-badge" alt="Last Commit" />
    </a>
    <a href="https://github.com/MaxPowerPL/szyfr-cezara">
      <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
    </a>
</div>

<br/>

*Prosty, ale skuteczny program do szyfrowania i deszyfrowania tekstu metodą Cezara*

[📖 O projekcie](#-o-projekcie) •
[🚀 Instalacja](#-instalacja) •
[💻 Użycie](#-użycie) •
[🔧 Funkcje](#-funkcje) •
[📜 Licencja](#-licencja)

</div>

---

## 📖 O projekcie

**Szyfr Cezara** to jeden z najstarszych i najsłynniejszych algorytmów kryptograficznych, wynaleziony przez Juliusza Cezara. Ten projekt to edukacyjna implementacja w języku **C++**, która pozwala na:

- 🔒 **Szyfrowanie tekstu** przesunięciem liter o zadaną wartość
- 🔓 **Deszyfrowanie wiadomości** przy znajomości klucza
- 🎯 **Obsługę polskich znaków** (diakrytyki: ą, ć, ę, ł, ń, ó, ś, ź, ż)
- 🛡️ **Zachowanie formatowania** (spacje, znaki interpunkcyjne)

### Jak działa szyfr Cezara?

Każda litera alfabetu jest przesuwana o stałą liczbę pozycji. Przykład z przesunięciem **3**:

```
Tekst jawny:    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
Zaszyfrowane:   D E F G H I J K L M N O P Q R S T U V W X Y Z A B C

"HELLO" → "KHOOR"
```

---

## 🚀 Instalacja

### Wymagania

- **Kompilator C++** (g++, clang++, MinGW)
- **System operacyjny:** Windows, Linux, macOS

### Kompilacja

```bash
# Sklonuj repozytorium
git clone https://github.com/MaxPowerPL/szyfr-cezara.git
cd szyfr-cezara

# Skompiluj program
g++ -o szyfr_cezara main.cpp -std=c++11

# Uruchom
./szyfr_cezara        # Linux/macOS
szyfr_cezara.exe      # Windows
```

---

## 💻 Użycie
### Przykład działania

**Szyfrowanie:**
```
Enter text to encrypt: Witaj świecie!
Enter key (shift): 5

Encrypted text: Bnyfq łśnjhpn!
```

---

## 🔧 Funkcje

### ✨ Główne możliwości

- ✅ **Szyfrowanie i deszyfrowanie** dowolnego tekstu
- ✅ **Przesunięcie 1-25** (cały alfabet)
- ✅ **Obsługa wielkich i małych liter**
- ✅ **Zachowanie białych znaków** (spacje, tabulatory, nowe linie)
- ✅ **Obsługa znaków specjalnych** (!, ?, ., etc.)
- ✅ **Polskie znaki diakrytyczne** (opcjonalnie)

### 🛠️ Struktura kodu

```cpp
string caesarCipher(const string& text, int key);
```

---

## 🎓 Cel edukacyjny

Ten projekt powstał jako:
- 📚 **Nauka podstaw kryptografii** - zrozumienie klasycznych algorytmów
- 💡 **Ćwiczenie C++** - praca z tekstem, funkcjami, pętlami
- 🔍 **Demonstracja portfolio** - prezentacja umiejętności programistycznych

> ⚠️ **Uwaga:** Szyfr Cezara nie jest bezpieczny do prawdziwego użytku kryptograficznego! Jest łatwy do złamania metodą brute-force (25 możliwości).

---

## 📜 Licencja

Ten projekt jest dostępny na licencji **MIT License**.

### Co możesz robić:
- ✅ Używać kodu do celów komercyjnych i niekomercyjnych
- ✅ Modyfikować i dostosowywać do swoich potrzeb
- ✅ Dystrybuować oryginał lub zmodyfikowane wersje
- ✅ Używać w projektach prywatnych i publicznych

### Wymagania:
- ℹ️ Dołącz kopię licencji MIT
- ℹ️ Zachowaj informację o prawach autorskich

Zobacz pełne warunki w pliku [LICENSE](LICENSE).

---

<div align="center">

**Stworzony przez [MaxPowerPL](https://github.com/MaxPowerPL)**

⭐ **Jeśli podobał Ci się ten projekt, zostaw gwiazdkę!** ⭐

</div>
