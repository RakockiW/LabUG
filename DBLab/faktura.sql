--
-- PostgreSQL database dump
--

-- Dumped from database version 10.23 (Ubuntu 10.23-0ubuntu0.18.04.2)
-- Dumped by pg_dump version 14.11 (Ubuntu 14.11-0ubuntu0.22.04.1)

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

SET default_tablespace = '';

--
-- Name: naglowek; Type: TABLE; Schema: public; Owner: wrakocki
--

CREATE TABLE public.naglowek (
    numer integer NOT NULL,
    imie character varying(32) NOT NULL,
    nazwisko character varying(32) NOT NULL,
    adres character varying(100) NOT NULL,
    data date
);


ALTER TABLE public.naglowek OWNER TO wrakocki;

--
-- Name: pozycja; Type: TABLE; Schema: public; Owner: wrakocki
--

CREATE TABLE public.pozycja (
    numer integer NOT NULL,
    nazwa character varying(32) NOT NULL,
    cena integer NOT NULL,
    ilosc integer NOT NULL,
    nr_fakt integer
);


ALTER TABLE public.pozycja OWNER TO wrakocki;

--
-- Data for Name: naglowek; Type: TABLE DATA; Schema: public; Owner: wrakocki
--

COPY public.naglowek (numer, imie, nazwisko, adres, data) FROM stdin;
2	Grzegorz	Trek	ul Mały Dwór 12/3, Gdynia	2015-03-28
\.


--
-- Data for Name: pozycja; Type: TABLE DATA; Schema: public; Owner: wrakocki
--

COPY public.pozycja (numer, nazwa, cena, ilosc, nr_fakt) FROM stdin;
1	namiot	250	1	2
2	kurtka	230	3	2
3	rękawiczki	45	2	2
\.


--
-- Name: naglowek naglowek_pkey; Type: CONSTRAINT; Schema: public; Owner: wrakocki
--

ALTER TABLE ONLY public.naglowek
    ADD CONSTRAINT naglowek_pkey PRIMARY KEY (numer);


--
-- Name: pozycja pozycja_numer_nr_fakt_key; Type: CONSTRAINT; Schema: public; Owner: wrakocki
--

ALTER TABLE ONLY public.pozycja
    ADD CONSTRAINT pozycja_numer_nr_fakt_key UNIQUE (numer, nr_fakt);


--
-- Name: pozycja pozycja_nr_fakt_fkey; Type: FK CONSTRAINT; Schema: public; Owner: wrakocki
--

ALTER TABLE ONLY public.pozycja
    ADD CONSTRAINT pozycja_nr_fakt_fkey FOREIGN KEY (nr_fakt) REFERENCES public.naglowek(numer) ON DELETE CASCADE;


--
-- PostgreSQL database dump complete
--

