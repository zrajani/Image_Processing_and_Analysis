% To illustrate the types of Images 

% Initialize

clear all;
close all;
clc;

%% Binary Images

% Defination: Contains image values of 0's and 1's. 

% Logical Usage

A = [1 -3 2;5 4 7;-8 1 3];
L = logical(mod(A,2));

% To find the odd elements from the list 

oddElement=A(L);

% To find the even elements in the list use the NOT operator 

evenElement=A(~L);