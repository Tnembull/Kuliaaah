# Huffman Coding Algorithm

    $ ./Huffman

    Huffman coding algorithm
    by Bulin (@m.nur.ashiddiqi)

    Usage: huffman [OPTIONS] input [output]
      The default action is to encode input file.
      -d	Decode file.

## Example

    $ cat input.txt
    
    Saya adalah mahasiswa jurusan ilmu komputer unila!.
    
    $ ./Huffman input.txt
    
    22
    a       0.196078        00
            0.117647        100
    u       0.098039        010
    m       0.058824        1010
    s       0.058824        0111
    l       0.058824        0110
    i       0.058824        11111
    h       0.039216        11110
    n       0.039216        10111
    r       0.039216        10110
    d       0.019608        111001
    j       0.019608        111000
    e       0.019608        111011
    o       0.019608        111010
    p       0.019608        110101
    S       0.019608        110100
    k       0.019608        110111
    .       0.019608        110110
    t       0.019608        110001
    !       0.019608        110000
    w       0.019608        110011
    y       0.019608        110010

    11010000110010001000011100100011000111101001010001111000011111111011111001100100111000010101100100111001011110011111011010100101001101111110101010110101010110001111011101101000101011111111011000110000110110
