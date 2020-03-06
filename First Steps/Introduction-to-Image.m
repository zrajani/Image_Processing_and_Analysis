%Initialize

clc;
clear all;
close all;

%% Example is extracyed from MATLAB website

I = imread('pout.tif');    % This image is avaliable in MATLAB in-built

imshow(I);


whos I;   % Check how the image appears in the workspace

figure
imhist(I);   % Checking the image contrast

% Improve the contrast of the image

I2 = histeq(I);
figure
imshow(I2)

