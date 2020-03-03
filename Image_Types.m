% To illustrate the types of Images 

% A image may be thought of data matrix (ref: basic command image.m file)

% Initialize

clear all;
close all;
clc;

%% Gray-Scale Image (a.k.a Intensity Images)
% Defination: It is a data matrix whose values represent shades of gray.
% Gray scale image are either of class unit8 or unit16 having integer
% values ranging from [0,255] or [0,65535] respectively. If any other class
% then values remain the same. 

%% Binary Images

% Defination: Contains image values of 0's and 1's. 

% Logical Usage

A = [1 -3 2;5 4 7;-8 1 3];
L = logical(mod(A,2));

% To find the odd elements from the list 

oddElement=A(L);

% To find the even elements in the list use the NOT operator 

evenElement=A(~L);