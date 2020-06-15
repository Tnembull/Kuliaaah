# Shannon-Fano coding algorithm

    $ ./SFano
    
    Shannon-Fano coding algorithm
    by Bulin (@m.nur.ashiddiqi)

    Usage: shannon [OPTIONS] input [output]
      The default action is to encode input file.
      -d	Decode file.

## Example

    $ cat input.txt

    Saya adalah mahasiswa jurusan ilmu komputer unila!.

    $ ./SFano input.txt

    22
    a       0.196078        00
            0.117647        010
    u       0.098039        0110
    m       0.058824        0111
    s       0.058824        1000
    l       0.058824        1001
    i       0.058824        1010
    h       0.039216        10110
    n       0.039216        10111
    r       0.039216        11000
    d       0.019608        11001
    j       0.019608        110100
    e       0.019608        110101
    o       0.019608        110110
    p       0.019608        110111
    S       0.019608        11100
    k       0.019608        111010
    .       0.019608        111011
    t       0.019608        111100
    !       0.019608        111101
    w       0.019608        111110
    y       0.019608        111111

    11100001111110001000110010010010010110010011100101100010001010100011111000010110100011011000011010000010111010101010010111011001011101011011001111101110110111100110101110000100110101111010100100111101111011