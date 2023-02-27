# Fauxware<a name="Fauxware"></a>

## Contents<a name="contents"></a>

<!-- mdformat-toc start --slug=github --maxlevel=6 --minlevel=1 -->

- [Fauxware](#Fauxware)
  - [Contents](#contents)
  - [Overview](#overview)
  - [Future](#future)

<!-- mdformat-toc end -->

## Introduction<a name="introduction"></a>

 - Assigment was to explore Angr and test for IO Equivalence for Authentication function with cases:
   - Auth1 and Auth2 are identical so equiv is established
   - Auth1 and Auth2 are functionally equiv so equiv is established
   - Auth1 and Auth2 are different and some testcases where difference is established will be printed

## Overview<a name="overview"></a>

  - Initial thought was to generate control flow graphs can compare them. Upon generating CFGs, I realized that this would be diffcult to do because control flows can be different with the same result.
  - Referenced S2E's [Equivalence Testing](http://s2e.systems/docs/EquivalenceTesting.html) page 
  

## Future<a name="future"></a>


