# Übung 1

## Aufgabe 1
> Nennen Sie 5 Beispiele für Algorithmen aus der Alltagswelt.

- Navigation
- Sortieralgorithmen
- Suchalgorithmen
- Empfehlungen

## Aufgabe 2
> Nennen Sie 5 Beispiele von Hochsprachen.
> Sind diese Sprachen jeweils Compiler-oder Interpreter-basiert? 
> Gibt es Mischformen? Wenn ja, wie sehen diese aus?

- Python (interpretiert)
- C (kompiliert)
- C++ (kompiliert)
- Java (kompiliert -> bytecode, bytecode -> interpretiert von der java virtual machine, optimizations include JIT/AOT)
- Javascript (interpretiert)

## Aufgabe 3
> Nennen Sie Vor- und Nachteile des Compiler- und Interpreter-basierten Ansatzes. 
> Was bieten Mischformen?

### Kompiliert
- schneller
- fail fast, fehler werden direkt gefunden
- optimierungen im compile time
- zwischenstufe (-)
- platform spezifisch (-)

### Interpretiert
- code kann direkt ohne Kompilierung laufen
- langsamer (-)
- keine compile-time error (-)

### Mischform
- platform unabhängig
- verschiedene sprachen für ein system (java, kotlin, scala)

## Aufgabe 4
> Bringen Sie das „Hallo Welt“-Programm aus der Vorlesung auf Ihrer bevorzugten Plattform zum Laufen. 
> Skizzieren Sie dabei den Ablauf und vergleichen Sie mit den Schritten, die in der Vorlesung durchgeführt wurden.

Code: [part1/aufgabe4.c](part1/aufgabe4.c)

# Übung 2

## Aufgabe 1
> Schreiben Sie ein Programm, das Ihren Vor- und Nachnamen sowie Ihr Alter ausgibt.

Code: [part2/aufgabe1.c](part2/aufgabe1.c)

## Aufgabe 2
> Was passiert mit dem „Hallo Welt“-Programm, 
> wenn Sie ein Semikolon entfernen? Erklären Sie.

Es wird ein (Syntax) Fehler bei der Kompilierung entstehen.
**Anweisungen** müssen mit einem Semicolon (`;`) beendet werden.

## Aufgabe 3
> Vielleicht wird Ihnen der Compiler bei der Übersetzung Ihres Programms Fehler melden. 
> Was halten Sie dabei für besser:
> - dass der Compiler nach dem ersten gefundenen Fehler mit einer wort-reichen Erkl ̈arung abbricht und Ihnen so die Möglichkeit einer schnellen Reparatur gibt
> - dass der Compiler versucht, möglichst viele Fehler zu entdecken, d.h. nicht nach jedem Fehler abbricht?

Beide Aspekte sind wichtig. Bei vielen Fehlern kann es nervig sein, immer wieder
zu kompilieren, um den Grund herauszufinden. Die zweite Variante ist dafür weniger
hilfreich, da kein Grund angegeben ist. Vor allem Anfänger können von der ersten
Variante profitieren. Der Kompilierer hat in der Regel ein `verbose` Modus, um 
detailliertere Fehlermeldungen zu bekommen.

## Aufgabe 4
### 4.1
> Was kann der Compiler mit unbekannten Wörtern tun, 
> d.h. Wörtern, die nicht in der Sprachbeschreibung erklärt sind?

[//]: # (ToDo: was ist hiermit gemeint?)

### 4.2
> Was passiert, wenn die Zeile
> `#include<stdio.h>` fehlt? 
> Erklären Sie die Ausgabe des Compilers.

Wenn das Programm eine Funktion benutzt, die aus stdio.h kommt, aber diese
nicht hinzugefügt wird, dann bekommt man ein Fehler, da die Funktion nicht
existiert. Wenn keine Funktion daraus genutzt wird, dann brauch man stdio 
auch nicht hinzufügen.

## Aufgabe 5
> Macht es in C einen Unterschied, wie viele Zeilen 
> oder Leerzeichen Sie in Ihrem Programm verwenden?

Nein. Der Kompilierer kennt in C keine Zeilen/Leerzeichen,
dadurch ist es egal wie viele oder ob man welche hat.
In Python z.B. hat `Tab` eine Bedeutung für den Interpreter.

## Aufgabe 6
> Warum gibt es eigentlich einen Präprozessor? 
> Ist er bei allen Sprachen notwendig?

Der Präprozessor wird genutzt, um vor der kompilierung den
Quellcode zu transformieren. Dazu gehören Textersetzungen (`#define`),
Header einbinden (`#include`) und bedingte Kompilierung (`#ifdef`).
Der Präprozessor ist nicht bei allen Sprachen notwendig. Viele der 
Funktionen oder ähnliche Ziele werden direkt in der Sprache integriert.

## Aufgabe 7
> Auch in der Mathematik gibt es Variablen. 
> Wie unterscheiden sie sich von den Variablen in Programmiersprachen?
> Wie z.B. müsste in der Mathematik die folgende Formel für eine Integer-Variable gedeutet werden und wie in der Informatik:
>
> i = i + 1

Mathematische Variablen stehen für eine abstrakte, unbekannte Größe und haben keinen
"Datentyp". In der Informatik sind variablen konkrete Werte, die an einem
bestimmten Speicherort sind. Diese sind typischerweise dynamisch und veränderbar.

`i = i + 1` ist in der Mathematik ein Widerspruch, der keine Lösung hat.
In der Informatik ist diese Formel eine Zuweisung, bei der `i` um eins erhöht wird.

## Aufgabe 8
> Was geschieht bei folgender Code-Strecke? 
> Kommentieren Sie jede Zeile einzeln.
> ```c++
> int main() {
>   int i;
>   i = 42;
>   // ...
> }
> ```

Dieser code beinhaltet die main funktion, in der das Programm startet.
In der main funktion wird eine Variable `i` deklariert 
und danach den Wert `42` zugewiesen.

## Aufgabe 9
> Wieso ist die folgende Zeile in C nicht gültig:
> ```c++
> int i;
> 42 = i;
> ```

Bei der Zuweisung einer Variable muss der Name *links* von `=` sein und der Wert
auf der *rechten* "Seite". Das ist in der C syntax so festgeschrieben.

## Aufgabe 10
> Ver ̈andern Sie das „Hallo Welt“ Programm so, dass es
> 1. "Hallo schöne Welt" ausgibt
> 2. "Hallo" und "Welt" in verschiedenen Zeilen ausgibt
> 3. zwischen "Hallo" und "Welt" ein Tab Abstand existiert
> 4. verschiedene fest vorgegebene Zeilen ausgeben kann

Code: [part2/aufgabe10.c](part2/aufgabe10.c)

> Was müssten Sie tun, dass das Programm eine Zeile, die der Aufrufer
> eingibt, auch wieder zurückgeben.

Den input von der konsole lesen mit `scanf`, in einer Variable speichern
und diese dann ausgeben.

## Aufgabe 11
> Was wird durch die Angabe eines Datentyps eigentlich gesagt? 
> Warum muss man in vielen Programmiersprachen einen Typ angeben? 
> Geht es auch ohne Datentypen?

Durch angabe des Datentyps schafft man "type-safety".
Der kompilierer kann dadurch bugs im Voraus finden.
Es gibt auch Sprachen, bei denen man dies nicht tun muss.
Diese nennt man "dynamically typed". 

Mehr dazu: [statically vs dynamically typed language](https://www.baeldung.com/cs/statically-vs-dynamically-typed-languages)

## Aufgabe 12
> Was bedeutet eigentlich 
> „Gleitpunktzahl einfacher oder doppelter Genauigkeit“? 
> Wie wird solch eine Zahl im Rechner dargestellt?
> Wie wird eine Integer-Zahl dargestellt?

In C gibt es drei Gleitkomma-Datentypen, welche unterschiedlich groß sind.
Dazu gehören `float`, `double` und `long double`.

- `float`: single-precision (4 byte)
- `double`: double-precision (8 byte)
- `long double`: double-precision or better (typically 12 byte, at least 8 byte)

Eine Gleitkommazahl wird mit "sign", "exponent" und "significand" gespeichert.

Visualisiert: [float exposed](https://float.exposed/)

Ein "signed" Integer wird mit einem "sign"-bit und den restlichen "value"-bits gespeichert.
Ein "unsigned" Integer hingegen hat kein "sign"-bit und somit ein "value"-bit mehr.

## Aufgabe 13
> Wie kann das 'A' eigentlich auf einem Computer dargestellt werden, 
> der doch nur 0 und 1 kennt? Was wird im Rechner abgelegt für die 
> Integer-Zahl 1 und für das Zeichen ’1’.

Für die Darstellung von Zeichen wurde die ASCII-Kodierung eingeführt.
In dieser werden zahlen (0-127) bestimmten Zeichen zugewiesen. 
Die ASCII-Kodierung wurde dann in die Unicode-Kodierung weiterentwickelt,
um mehr Zeichen definieren zu können.

- `1` -> `0...0001`
- `'1'` -> `0011 0001`

# Übung 3

## Aufgabe 1
> Andern Sie das Ausgangsprogramm so ab, 
> dass es auch `int` und `float` sowie
> einzelne `char` ausgeben kann. 
> Was müssen Sie dafür tun?

[//]: # (ToDo: welches Ausgangsprogramm?)

## Aufgabe 2
> Bringen Sie das folgende Programm zum Laufen:
> 
> ```c++
> #include <stdio.h>
> 
> int main() {
>   int a, b;
>   double d;
>   char ch;
> 
>   i = 4;
>   a = 5.;
>   b = 3;
>   d = 4.5;
>   ch = "A";
> 
>   printf("%d\n", a);
>   printf("%f\n", b);
>   printf("%5.2f\n", d);
>   printf("%c\n, ch);
> 
>   return(0);
> }
> ```

Code: [part3/aufgabe2.c](part3/aufgabe2.c)

> Welche Bedeutung hat die Format-Anweisung "5.2f"? 
> Recherchieren Sie. Gibt es weitere Format-Anweisungen?

Die Zahl links von dem Punkt sagt wie lang der text mindestens sein soll.
Es werden leerzeichen hinzugefügt, falls der original input zu klein ist,
um die mindestgröße zu erreichen. 

Die Zahl rechts vom Punkt gibt an wie viele Nachkommastellen gezeigt werden sollen.

Es gibt weitere Format-Anweisungen, wie z.B. kann man `-` nach dem `%`-Zeichen 
benutzen, um anzugeben, dass der Text 'left aligned' sein soll.

## Aufgabe 3
> Wie hängen die Begriffe **Anweisung** und 
> **Ausdruck** mit den Begriffen **r-value** 
> und **l-value** zusammen?

- **l-value:** Speicheradresse, steht auf der linken Seite einer Zuweisung
- **r-value:** tatsächlicher Wert, steht auf der rechten Seite einer Zuweisung

## Aufgabe 4
> Schreiben Sie ein Programm, das zwei 
> Integer-Zahlen einliest und sowohl die 
> Summe als auch das Produkt ausgibt. 
> Das Gleiche soll auch für float-Zahlen gebaut werden.

Code: [part3/aufgabe4.c](part3/aufgabe4.c)

## Aufgabe 5
> Schreiben Sie ein Programm, dass für 10 
> verschiedene DM-Werte von 1 bis 5 DM die 
> entsprechenden Euro-Werte errechnet und ausgibt. 
> Woher können die DM-Werte kommen? 
> Implementieren Sie zwei verschiedene Möglichkeiten.
> Welche Datentypen verwenden Sie?

[//]: # (ToDo: nachfragen und fertig machen)
Code: [part3/aufgabe5.c](part3/aufgabe5.c)

## Aufgabe 6
> Schreiben Sie ein Programm, das für drei 
> verschiedene Radien zwischen 2 und 3 jeweils 
> die Oberfläche der Kugel und das Volumen 
> berechnet und ausgibt. Die Radien können 
> fest kodiert sein.

Code: [part3/aufgabe6.c](part3/aufgabe6.c)

## Aufgabe 7
> Welche Darstellung haben die folgenden Ausdrücke
> in C:
> 
> `(a + b) / (c − d) − de`
> 
> und
> 
> `sqrt(3) * (a + b)`

1. `(a + b) / (c - d) - (d * e)`
2. `sqrt(3) * (a + b)`

## Aufgabe 8
> Was passiert jeweils bei den folgenden Zeilen.
> Welche Werte haben jeweils `i`, `k`, `l`. 
> Erklären Sie.
> 
> ```c++
> int i, k, l;
> i = 42;
> 
> k = i++;
> l = ++i;
> ```

Werte am Ende:
- `i = 44`
- `k = 42`
- `l = 44`

Das liegt daran, dass `i++` "post increment" ist und
daher erst nach dem Benutzen sich um eins erhöht.
Die andere Variante `++i` ist "pre increment" und
erhöht die variable bevor sie genutzt wird.

## Aufgabe 9
> Welchen Sinn machen die folgenden Ausdr ̈ucke:
> ```c++
> int a, b, d;
> a & 0707;
> b | 0xC;
> a = a ^ a;
> b = b << 3;
> d = d & ~07;
> ```

Die ersten beiden Zeilen machen keinen Sinn, da
das Ergebnis nicht genutzt wird. 

Ab hier wird davon ausgegangen, dass a, b und d
irgendeinen unbekannten Wert haben.

Die Zeile `a = a ^ a`
macht auch keinen Sinn, da dort immer `0` herauskommen wird.
Die Zeile `b = b << 3` macht Sinn, denn dort wird `b` 
um drei Stellen nach links verschoben. In der Zeile
`d = d & ~07` wird `d` bitweise mit dem invertierten Wert 
von `07` "und"-verknüpft. 

## Aufgabe 10
> Für welchen Wert der Integer-Variablen `x`
> ist der folgende Ausdruck wahr:
> 
> `((x >= 10) && (x <= 200)) || (x == 5) && (x==6)`

Der Ausdruck ist für jedes `x` zwischen `10` und `200` `wahr`.
Die rechte Seite der "oder"-Verknüpfung kann nie `wahr`
sein.

Wenn `P(x) = ((x >= 10) && (x <= 200)) || (x == 5) && (x==6)`, dann
gilt `∀x ∈ [10; 200] : P(x)`.


## Aufgabe 11
> Betrachten Sie den folgenden Ausdruck:
> 
> `(x < 0) || ((++x > 5) && (x < 7))`
> 
> Welchen Wert hat `x` nach Auswertung dieses Ausdrucks, 
> wenn anfangs `x = -1;` war?

Der "pre increment" wird nie ausgeführt,
wenn `x = -1`, wegen des "Short-Circuit Evaluation"
prinzips. Die rechte Seite wird gar nicht mehr 
ausgeführt, wenn die linke Seite schon `true` ist bei `||`.

Dadurch ist `x` immer noch `-1` am Ende der ausführung.

## Aufgabe 12
> Welche Werte haben die einzelnen Konstanten 
> in der folgenden Aufzählung?
> Ist das immer so? Erklären Sie.
> 
> `enum hugo {AA, BB = 3, CC='c', DD};`

Die Elemente in Enumerationen werden immer zu 
`int` konstanten. In diesem Fall haben sie diese
Werte:
- `AA` -> `0`
- `BB` -> `3`
- `CC` -> `'c'`
- `DD` -> `'d'`

Diese Regeln gelten für die Konstanten in 
Enumerationen:
1. Explizit gesetzter Wert: Einem Element kann explizit ein Wert zugewiesen werden.
2. Automatische Zuweisung: Falls kein Wert explizit gesetzt wurde, erhält das erste Element den Wert `0`. Alle nachfolgenden Elemente erhalten den Wert des vorherigen Elements + 1.

## Aufgabe 13
> Was passiert, wenn Sie eine Variable als `const` 
> zu deklarieren und dann in Ihrem Programm 
> verändern? Probieren Sie es aus!

Der Kompilierer gibt einen Fehler, da konstante Variablen
nicht verändert werden dürfen.

## Aufgabe 14
> Welche Operatoren kennen Sie, die mit Zeichenketten 
> arbeiten? Was machenSie z.B., wenn Sie zwei 
> Zeichenketten aneinander hängen wollen und was,
> wenn Sie Teile aus einer Zeichenkette verwenden wollen?

Funktionen für Zeichenketten sind in `string.h` definiert.
Diese bietet z.B.:
- `strlen(...)`: gibt die Länge einer Zeichenkette ohne `'\0'` zurück
- `strcat(...)`: Zeichenketten verknüpfen
- `strncpy(...)`: Teil einer Zeichenkette kopieren
- `strcmp(...)`: Zeichenketten vergleichen

## Aufgabe 15
> Ändern Sie das Programm zur Umrechnung von DM in Euro
> so ab, dass es die umzuwandelnden Werte einliest und
> nur im Falle eines Wertes größer als 1000DM auch umwandelt.
> Sie wollen sich doch nicht mit Peanuts abgeben, oder?

Code: [part3/aufgabe15.c](part3/aufgabe15.c)

## Aufgabe 16
> Berechnen Sie für einen eingegebenen Radius (Float)
> die Oberfläche und das Volumen einer Kugel mit 
> diesem Radius. Beachten Sie, dass dies nur für
> positive Radien definiert ist.

Code: [part3/aufgabe16.c](part3/aufgabe16.c)

## Aufgabe 17
> Wie sehen die Fluss-Diagramme f ̈ur die ein-armige 
> und zwei-armige **if**-Anweisungaus? 
> Erklären Sie.

[//]: # (ToDo: skipped)

## Aufgabe 18
> Schreiben Sie ein Programm, das zwei Integer 
> einliest und dafür das Maximum bestimmt. 
> Verwenden Sie dafür:
> 
> 1. nur die ein-armige If-Anweisung
> 2. die zwei-armige if-else Anweisung

Code: [part3/aufgabe18.c](part3/aufgabe18.c)

## Aufgabe 19
> Betrachten Sie folgendes Code-Segment:
> 
> ```c++
> if (a > 5)
>   if (a < 10)
>       b = c;
> else
>   printf("a kleiner 5");
> ```
> 
> Was soll diese Code-Strecke ausdrücken?
> Was passiert hier tatsächlich?
> Haben Sie Verbesserungsvorschläge?

Dieser Code soll `b = c` ausführen, wenn `a` zwischen 5 und 10 ist.
Falls `a` nicht größer als `5` ist dann soll "a kleiner 5"
ausgegeben werden. Da hier keine geschweiften Klammern
benutzt wurden, wird dieser Code aber nicht so funktionieren.
Das `else` gehört hier zum `if (a < 10)`, wodurch dieser ausgeführt
wird, wenn `a >= 10` ist.

Es ist zu empfehlen **immer** geschweifte Klammern bei
if/else/for/while etc zu benutzen, auch wenn der code
innerhalb nur eine Zeile hat. Ansonsten ist es für
das Auge nicht eindeutig zu sehen was passiert.

## Aufgabe 20
> Sie wollen einen Wert `a` einsortieren in die 
> 5er-Intervalle von 5 aufwärts. 
> Sie codieren dazu:
> 
> ```c++
> if (a > 5) 
>   printf(">5\n");
> else if(a > 10)
>   printf(">10\n");
> else if(a > 15)
>   printf(">15\n");
> else
>   printf("a kleiner 5\n");
> ```
> 
> Was ist dazu zu sagen?
> Haben Sie Verbesserungsvorschläge?

Zuerst muss man erwähnen, dass der Code ein logik fehler hat.
Das liegt an der Reihenfolge der if/else if Anweisungen.
Z.B. wenn `a = 13` ist, dann wird trotzdem `>5` in der Konsole
ausgegeben. If Anweisungen werden immer von oben nach unten 
ausgeführt und da `a > 5` true ist für `a = 13` wird das ausgeführt.

Außerdem ist wieder zu empfehlen geschweifte Klammern zu nutzen.
Dazu könnte man die Logik des if/else auch mathematisch lösen.

# Übung 4

## Aufgabe 1
> Schreiben Sie ein Programm, das 5 Buchstaben einliest
> und je nach Buchstaben unterschiedliche Zeichenketten ausgibt.
> Das Programm soll 3 von Ihnen ausgewählte Zeichen explizit
> verarbeiten können und den Rest durch einen gemeinsamen,
> allgemeinen String beantworten.
> 
> Verwenden Sie hierfür einmal die if-else Form und dann die
> switch Anweisung.

Code: [part4/aufgabe1.c](part4/aufgabe1.c)

> Welche ist hier sinnvoller?

In diesem Beispiel bietet sich die switch Anweisung mehr
an, da hier explizite Werte überprüft werden. Man muss
jedoch aufpassen kein "fall-through" einzubauen.

## Aufgabe 2
> Schreiben Sie ein Programm, das einen Integer-Wert 
> einliest und bei gerader Zahl das Quadrat ausgibt,
> bei ungerader die Wurzel. Verwenden Sie die 
> switch-Anweisung. 
> Das Programm soll nur die Zahlen zwischen 1 und 14
> akzeptieren. 

Code: [part4/aufgabe2.c](part4/aufgabe2.c)

> Was machen Sie bei einer fehlerhaften Eingabe?

Bei fehlerhaften Eingaben hat man mehrere Möglichkeiten:
1. Dem Nutzer mitteilen, dass die Eingabe fehlerhaft ist
2. Dem Nutzer eine neue Eingabe machen lassen

## Aufgabe 3
> Welche Werte haben `a` und `b` nach dem Durchlauf der folgenden Schleifen.
> Die Initial-Werte seien `a = 5` und `b = 0`.
> 
> ```c++
> while (a >= b) if(b == 0) a−−;
> while (a >= b) {
>   a = a - b;
>   if (b == 0) b++;
> }
> ```

Am Ende ist `a = -1` und `b = 0`. Tatsächlich wird nur
die erste Schleife ausgeführt.

## Aufgabe 4
> Schreiben Sie ein Programm, das Zeichen von der 
> Eingabe liest. Das Programm soll auf die Eingabe 
> eines "s" und eines "S" sich beenden. 
> Andere Konsonanten sind als Fehler abzulehnen. 
> Das letzte eingelesene Zeichen soll jeweils 
> ausgegeben werden.

Code: [part4/aufgabe4.c](part4/aufgabe4.c)

## Aufgabe 5
> Schreiben Sie ein Programm, das nur Zahlen von 
> der Eingabe liest und die Summe ausgibt. 
> Das Programm soll enden, wenn eine Null eingeben wird.

Code: [part4/aufgabe5.c](part4/aufgabe5.c)

## Aufgabe 6
> Macht die folgende Code-Strecke einen Sinn und 
> wenn ja, welchen?
> 
> ```c++
> do {
>   // do something important
> } while (0);
> ```

Der Code macht wenig Sinn, da er **immer** nur einmal 
läuft. Da kann man das do-while auch direkt weglassen.

## Aufgabe 7
> Wie sieht das Fluss-Diagramm der for-Schleife aus?

[//]: # (ToDo: skipped)

## Aufgabe 8
> Was passiert bei folgender for-Schleife?
> 
> ```c++
> for (i = 0; i < 10; i++) i = i - 1;
> ```

Das ist eine unendliche schleife, da `i` niemals 
größer als 10 sein wird. Bei jedem Durchlauf erhöht
sich `i` um eins aber dann wird direkt wieder eins 
abgezogen.

## Aufgabe 9
> Schreiben Sie ein Programm, das die Summe der 
> ersten hundert Integer-Werte ausgibt.

Code: [part4/aufgabe9.c](part4/aufgabe9.c)

## Aufgabe 10
> Schreiben Sie ein Programm, das den größten 
> gemeinsamen Teiler (ggT) zweier Integer-Zahlen
> `u` und `v` berechnet. Verwenden Sie dabei die Tatsache,
> dass wenn `u` größer als `v` ist, der ggT durch den ggT
> von `v` und `u`-`v` gegeben ist.

Code: [part4/aufgabe10.c](part4/aufgabe10.c)

## Aufgabe 11
> Schreiben Sie ein Programm, das die Eulersche 
> Zahl `e` bis zu einer vorgegebenen Genauigkeit
> berechnet.

[//]: # (ToDo: Formel falsch in der Aufgabenstellung)
Code: [part4/aufgabe11.c](part4/aufgabe11.c)

## Aufgabe 12
> Schreiben Sie ein Programm, das - mittels **getchar()**
> Zeicehn aus der Eingabe liest und dabei zählt wie viel Ziffern,
> Zwischenräume und andere Zeichen dabei vorkamen. Dieses
> Ergebnis soll ausgegeben werden.

Code: [part4/aufgabe12.c](part4/aufgabe12.c)

## Aufgabe 13
> Was ist der Unterschied zwischen den beiden folgenden Code-Strecken:
> ```c++
> for (i = 0; i < 10; i++) {
>   if (i % 2 == 0) continue;
>   printf("%d: Hier\n", i);
> }
> ```
> 
> und 
> 
> ```c++
> for (i = 0; i < 10; i++) {
>   if (i % 2 == 0) break;
>   printf("%d: Hier\n", i);
> }
> ```

Bei dem Code mit `continue` werden nur ungerade Zahlen
ausgegeben, bei allen anderen springt das Programm
in die nächste iteration der Schleife.

Die Variante mit `break` wird direkt bei `i = 0` aus
der Schleife springen und dadurch nie etwas ausgeben.

## Aufgabe 14
> Was geschieht bei folgender Code-Strecke:
> ```c++
> for (i = 0; i < 10; i++) {
>   switch (i) {
>       case 1: case 2: case 3: continue;
>       case 4: break;
>       default: break;
>   }
>   printf("%d: neuer Durchlauf\n", i);
> }
> ```

Dieser Code wird bei `i = 4` bis `i = 9` und `i = 0`
die Zeile "i: neuer Durchlauf" ausgeben. Das liegt 
daran, dass `continue` sich auf die while-Schleife 
bezieht, aber `break` sich auf das switch bezieht.