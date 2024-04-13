-- wyświetl listy różnych atrybutów z tabel
SELECT imie, nazwisko FROM klient
;
SELECT opis, koszt FROM towar
;
SELECT data_wysylki, koszt_wysylki FROM zamowienie
;
-- zad P2: wyświetl nazwiska i pełne adresy klientów;
SELECT nazwisko, ulica_dom || ' ' || kod_pocztowy || ' ' || miasto AS adres FROM klient
;
-- wyświetl numery i daty zamówień, zastosuj jakieś uporządkowanie.
SELECT nr, data_zlozenia FROM zamowienie ORDER BY data_zlozenia DESC
;




