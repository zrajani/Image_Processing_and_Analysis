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

% Note: Values of double and single gray scale image normally are scalled
% in the range [0,1]; although other ranges can be used.

% Let us see an example of gray scale image. MATLAB has in-built gray scale
% image such as showing rice.

Gray_scale_image=imread('rice.png');  % Matrix data having gray scale value of class unit8

imshow (Gray_scale_image);   % Displays the gray scale Image
%% Binary Images

% Defination: Contains image values of 0's and 1's. 

% Logical Usage

A = [1 -3 2;5 4 7;-8 1 3];
L = logical(mod(A,2));

% To check if you have sucessfully got a logical matrix or array we use the
% following command islogical(matrix_or_array_name)

islogical (L);

% To find the odd elements from the list 

oddElement=A(L);

% To find the even elements in the list use the NOT operator 

evenElement=A(~L);

% To convert any given logical matrix to any other type of matrix we use
% following command: B=class_name(A);
% where class_name could be im2uint8, im2uint16, im2double, im2single or mat2gray
% or any other known data type. 

convert_matrix_1 = im2double(L);
