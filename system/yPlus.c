yPlus1
{
    // Mandatory entries (unmodifiable)
    type            yPlus;
    libs            (fieldFunctionObjects);

    // Optional (inherited) entries
    writePrecision  8;
    writeToFile     true;
    useUserTime     true;
    region          region0;
    enabled         true;
    log             true;
    timeStart       0;
    timeEnd         1000;
    executeControl  timeStep;
    executeInterval 1;
    writeControl    timeStep;
    writeInterval   100;
}
