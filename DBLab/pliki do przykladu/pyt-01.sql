-- wyświetl zawartość każdej z tabel, uporządkuj w/g atrybutu
SELECT * FROM klient
;
SELECT * FROM klient ORDER BY nazwisko
;
SELECT * FROM towar
;
SELECT * FROM towar ORDER BY cena DESC
;
-- odpowiednio według miast, 
SELECT * FROM klient ORDER BY miasto
;
-- opisów,
SELECT * FROM towar ORDER BY opis
;
-- wyświetl zawartość tabeli zamówień uporządkowanej według kosztów wysyłki
SELECT * FROM zamowienie ORDER BY koszt_wysylki DESC
;
-- i tabeli kodów kreskowych uporządkowanej według kodów.
SELECT * FROM kod_kreskowy ORDER BY kod




