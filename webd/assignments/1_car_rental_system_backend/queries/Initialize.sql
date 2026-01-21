CREATE DATABASE car_rental_system_backend;

create extension if not exists "uuid-ossp";

CREATE TABLE users (
    user_id uuid primary key default uuid_generate_v4(),
    user_name text not null,
    user_email text not null,
    user_password text not null
);