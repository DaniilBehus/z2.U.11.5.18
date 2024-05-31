# Bimodálny zoznam

## Popis funkcií

### Funkcia `Bimodálny zoznam`

Táto funkcia vytvára nový uzol bimodálneho zoznamu s danými údajmi.

1. **Alokácia pamäte**:
    - Alokujte pamäť pre nový uzol.
    Ak alokácia zlyhá, zobrazí sa chybové hlásenie a program skončí s chybou.

2. **Inicializácia údajov**:
    - Nastaví údaje nového uzla na zadané hodnoty.

3. **Návratová hodnota**:
    - Funkcia vráti vytvorený uzol.


### Funkcia `ctwl_create_random_bimodal`

Táto funkcia vytvára bimodálny zoznam s náhodnými hodnotami.

1. **Kontrola veľkosti zoznamu**:
    - Funkcia skontroluje, či je veľkosť zoznamu väčšia alebo rovná 3.

2. **Alokácia pamäte pre zoznam**:
    - Alokujte pamäť pre bimodálny zoznam.
    Ak alokácia zlyhá, zobrazí sa chybové hlásenie a funkcia vráti NULL

3. **Inicializácia generátora náhodných čísel**:
    -Inicializuje generátor náhodných čísel, aby sa pri každom spustení získali rôzne hodnoty.

4. **Vytvorenie prvku**:
    - Vytvorí prvý prvok so náhodnou hodnotou.

5. **Generovanie ďalších prvkov**:
    - Generuje ďalšie prvky s náhodnými hodnotami a pripája ich na koniec zoznamu.

6. **Spojenie posledného prvku s prvým**:
    - Spojí posledný prvok s prvým, aby vytvoril cyklickosťy.

7. **Návratová hodnota**:
    - Funkcia vráti vytvorený bimodálny zoznam.

### Funkcia `printList`

Táto funkcia vypisuje hodnoty prvkov bimodálneho zoznamu.

1. **Kontrola zoznamu**:
    - Funkcia kontroluje, či je zadaný zoznam prázdny

2. **Výpis hodnôt**:
    - Postupne vypisuje hodnoty jednotlivých prvkov zoznamu.

### Funkcia `main`

Táto funkcia slúži na demonštráciu funkcionality vytvorenia a výpisu bimodálneho zoznamu.

1. **Inicializácia veľkosti zoznamu**:
    - Definuje sa veľkosť zoznamu

2. **Vytvorenie bimodálneho zoznamu**:
    - Zavolá sa funkcia ctwl_create_random_bimodal na vytvorenie zoznamu.

3. **Výpis zoznamu**:
    -Ak bol zoznam úspešne vytvorený, vypíšu sa hodnoty jeho prvkov.

4. **Návratová hodnota**:
    - Funkcia vráti hodnotu 0, čo signalizuje úspešné ukončenie programu.