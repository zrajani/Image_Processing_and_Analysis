%Initialize

clc;
clear all;
close all;

%% Example is extracyed from MATLAB website

I = imread('pout.tif');    % This image is avaliable in MATLAB in-built

imshow(I);


whos I;   % Check how the image appears in the workspace

imhist(I);   % Checking the image contrast

