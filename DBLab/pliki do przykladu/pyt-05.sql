-- złączenia:
-- sprawdź numery zamówień klientów
SELECT imie, nazwisko, zamowienie.nr AS zamowienie_nr 
   FROM klient, zamowienie
   WHERE klient.nr=zamowienie.klient_nr
   ORDER BY nazwisko
;
-- zmień dalsze zapytania używając INNER JOIN
SELECT imie, nazwisko, zamowienie.nr AS zamowienie_nr
   FROM klient INNER JOIN zamowienie 
   ON klient.nr=zamowienie.klient_nr
   ORDER BY nazwisko
;
-- sprawdź jacy klienci w ogóle złożyli zamówienia
SELECT imie, nazwisko
   FROM klient INNER JOIN zamowienie
   ON klient.nr=zamowienie.klient_nr
   ORDER BY nazwisko
;
-- zad P5: zmień powyższe zapytanie używając INNER JOIN

-- wypisz towary wraz z numerami zamówień
SELECT opis, pozycja.zamowienie_nr AS zamowienie_nr
   FROM towar INNER JOIN pozycja
   ON towar.nr=pozycja.towar_nr
   ORDER BY zamowienie_nr
;
-- sprawdź jakie towary były w ogóle zamawiane
SELECT DISTINCT opis, pozycja.towar_nr
   FROM towar INNER JOIN pozycja
   ON towar.nr=pozycja.towar_nr
;
-- użyj obu wersji zapytania
SELECT DISTINCT opis, pozycja.towar_nr
   FROM towar, pozycja
   WHERE towar.nr=pozycja.towar_nr
;



