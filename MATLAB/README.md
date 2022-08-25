# Installation of MATLAB on Ubuntu 20.04 LTS

### Issues:

1. <u> Upon completion of the install of the software the text will appear big enough and weird screen on screens having 4K/ HD Display </u>

Solution: Use the following commands to resolve the issue and get the things working properly

``` 
s= settings;
s.matlab.desktop.DisplayScaleFactor;
s.matlab.desktop.DisplayScaleFactor.PersonalValue=1;
```

The personal value takes value in range of 1-5
