# Random Sentence Generator
This is a C++ program that generates random sentences given a grammar file!
Include any grammar file with the extention `.g` that has the format
```{
<start>
sentence of <rule>;
}
```
  
Each rule is in the format
```{
<rule>
rule value <nested-rule>, the end.
}
```

# Trump Grammar
The included grammar file is called `Trump.g` and it uses direct quotes
and likely phrases to generate sentences that would likely be spoken, or
have been spoken by the 45th president of the United States.

Trump's grammar is 

```
{
<start>
<enemy> <criticism>! There is <unwarrented-superlative> confidence that the moves that my Administration is making are <unwarrented-superlative-adverb> successful and <ostentation> even though <dubious-excuse>. We'll see what happens when I <trope>, believe me. <threat>    ;
}
```
