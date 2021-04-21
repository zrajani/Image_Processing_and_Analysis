% Initialize

clear all;
close all;
clc;

% Basic image processing commands

% All illustrations Lena image is basically used

image_test=imread('Lenna.png');   % imread (filename) gets the image added
                                  % in MATLAB scripts extensions like .jpeg, 
                                  % .png , .jpg file are
                                  % usually read in the script in matlab

imshow(image_test);               % After any sucessful excecution of commands 
                                  % the result can display on the console using
                                  % imshow(file or var_name) containing the
                                  % image data
close all; 

% Creating image from Random data (Gray Image like QR code)

A = rand(50);

imwrite(A,'imgGray.png');

imshow(A);

% Writing Image data into folder destination

load clown.mat;             % Load the image from the inbuilt files
                            % When the data gets loaded in MATLAB it loads
                            % X and map variable in the dataspace and using
                            % this variable we illustrate the concept of
                            % writing image data.
                            
imwrite(X,map,'clown.png'); % Write the data of the image in the file using
                            % different parameters
                            
%% Quiting MATLAB

quit;                             % Exit MATLAB  or shutdown MATLAB 
