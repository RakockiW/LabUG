SET client_encoding='utf-8';

INSERT INTO ksiazka (nr_inw, tytul, wydawnictwo, rok, cena)
    VALUES (1203, 'Matematyka 1', 'Wydawnictwo Naukowe', 2023, 45);
INSERT INTO autor (imie, nazwisko, nr_inw)
    VALUES ('Jan', 'Kowalski', 1203);
INSERT INTO czytelnik (nr_karty, imie, nazwisko)
    VALUES (4321, 'Tomasz', 'Nowak');
INSERT INTO wypozycza (data, nr_inw, nr_karty)
    VALUES ('2024-01-02', 1203, 4321);
