-- obliczenia na podstawie atrybutów, nazwy dla wyświetlanych atrybutów:
-- wyświetl dane o zysku dla towarów
SELECT *,cena-koszt AS zysk FROM towar
;
SELECT *,cena-koszt AS zysk FROM towar ORDER BY zysk DESC
;
-- zad P3: wyświetl dane o procentowym zysku w stosunku do kosztów 
SELECT *,(((cena-koszt)/koszt)*100) :: numeric(7,2) AS zysk_procent FROM towar ORDER BY zysk_procent DESC
;
-- wyświetl dane o czasie realizacji zamówień (różnica dat złożenia i wysyłki
-- zamówienia).
SELECT *,data_wysylki-data_zlozenia AS czas_realizacji FROM zamowienie
;




