# Fauxware<a name="Fauxware"></a>

## Contents<a name="contents"></a>

<!-- mdformat-toc start --slug=github --maxlevel=6 --minlevel=1 -->

- [Fauxware](#Fauxware)
  - [Contents](#contents)
  - [Overview](#overview)
  - [Problems](#problems)
  - [Future](#future)

<!-- mdformat-toc end -->

## Introduction<a name="introduction"></a>

 - Assigment was to explore Angr and test for IO Equivalence for Authentication function with cases:
   - Auth1 and Auth2 are identical so equiv is established
   - Auth1 and Auth2 are functionally equiv so equiv is established
   - Auth1 and Auth2 are different and some testcases where difference is established will be printed

## Overview<a name="overview"></a>

  - Extension to Fauxware manual equiv

## Problems<a name="problems"></a>
 - fauxware and fauxware-mod did not behave as intended and was not functionally equivalent within angr. However, testing the two binaries outside of angr leads to functionally equivalence. 
   - The cause of this error is **potentially a bug** in angr itself. 
   - I made the strcmp external function callable and called it with concrete values. 
   - One of the test case was strcmp("asdf", "a") which yeilded 0. This suggests that angr's strcmp finds "asdf" and "a" as equivlent, which is not true. In fact, strcmp seems to yeild 0 if one string is a substring starting from the begining of the other string. 
   - This doesn't seem to affect the solver, we can see evidently that the solver obtained correct explorations. 
## Future<a name="future"></a>
 - Look into v-spells darpa

