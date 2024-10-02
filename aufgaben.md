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

Code: [aufgabe1-4.c](aufgabe1-4.c)

# Übung 2

## Aufgabe 1
> Schreiben Sie ein Programm, das Ihren Vor- und Nachnamen sowie Ihr Alter ausgibt.

Code: [aufgabe2-1](aufgabe2-1.c)

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

Code: [aufgabe2-10.c](aufgabe2-10.c)

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

