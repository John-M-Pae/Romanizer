# Romanizer
Conversions between arabic and roman numerals in multiple languages.

- [Romanizer](#romanizer)
  - [Description](#description)
  - [Languages to be Covered](#languages-to-be-covered)
    - [Inital goal](#inital-goal)
  - [Roman Numeral Standard](#roman-numeral-standard)
    - [Subtractive notation](#subtractive-notation)
    - [Large values](#large-values)
    - [Zero values](#zero-values)
    - [Fractions](#fractions)

## Description
The familiar task of converting conventional arabic numerals to their roman counterparts is a familiar challenge for the amateur programmer. Of all the classic coding challenges which are tossed around (fizzbuzz, fibonacci, ect.) I enjoy this the most due to my favor for the use of roman numerals. I use them in my personal notes frequently and often consider them to be an aesthetic addition to simple counting notation.
<br>
I find that in any language the more difficult kind of operation is translation, since this requires an understanding which is flexible enough to be employed under a different syntax with a different set of conventions. So in order to test my understanding of basic programing structures I will try to write the same functionality in many different languages.

## Languages to be Covered
The intention is not to write the conversion in as many languages as I can, the intention is to test my knowledge in languages which are common and that I have some experience with. An initial list I have prepared includes

 - C++
 - Java
 - Javascript  / HTML / CSS
 - Racket
 - Rust
 - Python
 
I don't claim to be an expert in each of these, and I hope that as I expand the scope of the project over time my experience with each of the systems as a whole will expand.

### Inital goal
The primary aim here it to be able to take any valid number and convert it into the roman representation. As a follow up implementing the reverse opperation will be the secondary goal of the project.

## Roman Numeral Standard
The roman numeral system is a base 10 number system which divides each significant figure into two domains, with a symbol denoting the upper and lower halves of the domain. For relatively small values these domains are denoted as:

|domain: | ones | tens | hundreds | thousands | ten-thousands | hundred-thousands |
|--------|:----:|:----:|:--------:|:---------:|:-------------:|:-----------------:|
|base    |  I   |  X   |    C     |    ↀ     |       ↂ      |        ↈ         |
|upper   |  V   |  L   |    D     |    ↁ     |        ↇ       |                   |

For each domain these symbols would be used as a tally to show the value of each decimal place of the number.
</br>
For example: the number 62 has a tenths place of 60 which is the 1<sup>st</sup> place in the upper half of the tens domain so the tenths place is written as *LX*, the ones place is 2<sup>nd</sup> in the lower half of the ones domain so the ones place is written *II*, taken together the whole number is written *LXII*.

### Subtractive notation
Of course roman numerals were made up by humans, and so there are deviations and irregularities to be found. The first of these is the issue of subtractive abbreviations for certain values which would otherwise require 4 consecutive iterations of a symbol, these abbreviations are as follows:

| value  | 4  | 9  | 40 | 90  | 400 | 900 |
|--------|----|----|----|-----|-----|-----|
| symbol | IV | IX | XL | XC  | CD  | Cↀ |

Each of these compositions can be written as "*a* before *b*", so in the case of 90 the symbol *XC* is read as "10 before 100".

### Large values
I am choosing to a system of large values based on the *apostrophus* system which was in use during the roman empire, this system does not include values passed 100,000 in value as this would have been used as a shorthand way to communicate simply the idea of "*very big number*". Other than the aesthetic element this means that I will be forcing myself to include non-ASCII standard unicode characters in the various implementations of the project.

### Zero values
So far as I can tell there are two conventions for representing the quantity 0 in the roman system, this first of these which appears to be contemporary to the roman era is the use the full latin word *"nulla"* literally meaning none to represent the value. A more contemporary choice is to use the character *Z* instead following the convention of the apothecaries' system of weights and measures which is based on roman standards of measurement. I will choose to use the apothecaries' notation as it restricts as many digits as possible to a single character. If this choice should change in the future the implementations should be able to accommodate the change.

### Fractions
The roman decimal system is duodecimal and divides the domain into a lower and upper domain just like the higher digits. In this case the upper symbol is *S* denoting the value of 1/2, with patterns of dots used as the base of the range. These patterns are as follows:

| fraction: | 1/12 | 1/6 | 1/4 | 1/3 | 5/12 |
|-----------|:----:|:---:|:---:|:---:|:----:|
| pattern:  |  ·   |  :  |  ∴  |  ∷  |  ⁙   |
