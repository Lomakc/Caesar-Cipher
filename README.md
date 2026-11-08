# Caesar-Cipher
The XOR operation has the property where (A ^ Key) ^ Key = A. The exact same function both encrypts and decrypts the buffer.


Key Differences
XOR Cipher: Inverts bits directly; handles arbitrary binary data or special characters without alteration.

Caesar Cipher: Modulo 26 arithmetic over the Latin alphabet; non-alphabetical characters (numbers, punctuation, spaces) pass through unchanged.
