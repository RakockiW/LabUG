CREATE TABLE kraj
(
    id                  char(6)          	PRIMARY KEY,
    nazwa               varchar(32)     	NOT NULL
);

CREATE TABLE lokalizacja
(
    id                  char(6)          	PRIMARY KEY,
    stan_wojewodztwo    varchar(32)     	NOT NULL,
    kod_pocztowy        char(6)         	NOT NULL,
    miasto              varchar(32)     	NOT NULL,
    ulica               varchar(32)     	NOT NULL,
    nr_budynku          char(6)         	NOT NULL
);

CREATE TABLE dzial
(
    id                  char(6)          	PRIMARY KEY,
    nazwa               varchar(32)     	NOT NULL
);

CREATE TABLE kandydat
(
	id					char(6)				PRIMARY KEY,
	imie				varchar(32)			NOT NULL,
	nazwisko			varchar(32)			NOT NULL,
	data_urodzenia		date				NOT NULL
);

CREATE TABLE postepowanie_rekrutacyjne
(
	id					char(6)				PRIMARY KEY,
	kandydat_id			char(6)				NOT NULL,
	etap_rekruacji		varchar(32)			NOT NULL,
	decyzja				varchar(32)			,
	CONSTRAINT			kandydat_id_fk
						FOREIGN KEY(kandydat_id)
						REFERENCES kandydat(id)
						ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE stanowisko
(
	id					char(6)				PRIMARY KEY,
	nazwa				varchar(32)			NOT NULL,
	opis				varchar(32)			NOT NULL,
	wynagrodzenie 		int					NOT NULL
);

CREATE TABLE umowa
(
	id 					char(6)				PRIMARY KEY,
	data_rozpoczecia	date				NOT NULL,
	data_zakonczenia	date				,
	rodzaj_umowy		varchar(32)			,
);

CREATE TABLE projekt
(
	id					char(6)				PRIMARY KEY,
	nazwa				varchar(32)			NOT NULL,
	status				varchar(32)			NOT NULL
);

CREATE TABLE kursy_specjalistyczne
(
	id					char(6)				PRIMARY KEY,
	nazwa				varchar(32)			NOT NULL,
	data_szkolenia		date				NOT NULL
);


CREATE TABLE pracownik
(
	id 					char(6)				PRIMARY KEY,
	imie				varchar(32)			NOT NULL,
	nazwisko			varchar(32)			NOT NULL,
	plec				char(1)				NOT NULL,
	data_urodzenia		date				NOT NULL,
	adres_id			char(6)				NOT NULL,
	umowa_id			char(6)				NOT NULL,
	stanowisko_id		char(6)				NOT NULL,
	dzial_id			char(6)				NOT NULL,
	UNIQUE(umowa_id)
);

CREATE TABLE kwalifikacje
(
	id					char(6)				PRIMARY KEY,
	pracownik_id		char(6)				NOT NULL,
	kurs_id				char(6)				NOT NULL,
	CONSTRAINT			pracownik_id_fk
						FOREIGN KEY (pracownik_id)
						REFERENCES	pracownik(id)
						ON UPDATE CASCADE ON DELETE CASCADE,
	CONSTRAINT			kurs_id_fk
						FOREIGN KEY (kurs_id)
						REFERENCES	kursy_specjalistyczne(id)
						ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE przypisanie_projekt
(
	id					char(6)				PRIMARY KEY,
	pracownik_id		char(6)				NOT NULL,
	projekt_id				char(6)				NOT NULL,
	CONSTRAINT			pracownik_id_fk
						FOREIGN KEY (pracownik_id)
						REFERENCES	pracownik(id)
						ON UPDATE CASCADE ON DELETE CASCADE,
	CONSTRAINT			projekt_id_fk
						FOREIGN KEY (projekt_id)
						REFERENCES	projekt(id)
						ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE ocena_pracownicza
(
	id					char(6)				PRIMARY KEY,
	id_pracownika		char(6)				NOT NULL,
	ocena				int					NOT NULL,
	komentarz			varchar(32)			NOT NULL,
	data_oceny			date				NOT NULL
	CONSTRAINT			id_pracownika_fk
						FOREIGN KEY (id_pracownika)
						REFERENCES pracownik(id)
						ON UPDATE CASCADE ON DELETE CASCADE
);


