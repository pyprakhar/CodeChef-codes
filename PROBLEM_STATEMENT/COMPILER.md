<div class="problem-statement mathjax-support" id="problem-statement">
  <h3 class=" mathjax-support"> Problem-Statement </h3>   
<p class=" mathjax-support">Lira is now very keen on compiler development. :) </p>
<p class=" mathjax-support">She knows that one of the most important components of a compiler, is its parser.</p>
<p class=" mathjax-support">A parser is, in simple terms, a software component that processes text, and checks it's semantic correctness, or, if you prefer, if the text is properly built.</p>
<p class=" mathjax-support">As an example, in declaring and initializing an integer, in C/C++, you can't do something like:</p>
<p class=" mathjax-support"> int = x ;4</p>
<p class=" mathjax-support">as the semantics of such statement is incorrect, as we all know that the datatype must precede an identifier and only afterwards should come the equal sign and the initialization value, so, the corrected statement should be:</p>
<p class=" mathjax-support"> int x = 4;</p>
<p class=" mathjax-support">Today, Lira is concerned with an abstract instruction which is composed of the characters "&lt;" and "&gt;" , which she will use on the design of her language, L++ :D.</p>
<p class=" mathjax-support">She is using it as an abstraction for generating XML code Tags in an easier fashion and she understood that, for an expression to be valid, a "&lt;" symbol must always have a corresponding "&gt;" character somewhere (not necessary immediately) after it. Moreover, each "&gt;" symbol should correspond to exactly one "&lt;" symbol.</p>
<p class=" mathjax-support">So, for instance, the instructions:</p>
<p class=" mathjax-support"> <b class=" mathjax-support"> &lt;&lt;&gt;&gt; </b></p>
<p class=" mathjax-support"><b class=" mathjax-support"> &lt;&gt; </b></p>
<p class=" mathjax-support"><b class=" mathjax-support"> &lt;&gt;&lt;&gt; </b></p>
<p class=" mathjax-support">are all valid. While:</p>
<p class=" mathjax-support"><b class=" mathjax-support"> &gt;&gt; </b></p>
<p class=" mathjax-support"><b class=" mathjax-support"> &gt;&lt;&gt;&lt; </b></p>
<p class=" mathjax-support">are not.</p>
<p class=" mathjax-support">Given some expressions which represent some instructions to be analyzed by Lira's compiler, you should tell the length of the longest prefix of each of these expressions that is valid, or <b class=" mathjax-support">0</b> if there's no such a prefix.</p>

<h3 class=" mathjax-support">Input</h3>
<p class=" mathjax-support">Input will consist of an integer <b class=" mathjax-support">T</b> denoting the number of test cases to follow.</p>
<p class=" mathjax-support">Then, <b class=" mathjax-support">T</b> strings follow, each on a single line, representing a possible expression in L++.</p>

<h3 class=" mathjax-support">Output</h3>
For each expression you should output the length of the longest prefix that is valid or <b class=" mathjax-support">0</b> if there's no such a prefix. 


<h3 class=" mathjax-support">Constraints</h3>

<li class=" mathjax-support"><b class=" mathjax-support">1</b> ≤ <b class=" mathjax-support">T</b> ≤ <b class=" mathjax-support">500</b></li>
<li class=" mathjax-support"><b class=" mathjax-support">1</b> ≤ <b class=" mathjax-support">The length of a single expression</b> ≤ <b class=" mathjax-support">10<sup class=" mathjax-support">6</sup></b></li>
<li class=" mathjax-support">The total size all the input expressions is no more than <b class=" mathjax-support">5*10<sup class=" mathjax-support">6</sup></b></li>

<p class=" mathjax-support">&nbsp;</p>
<h3 class=" mathjax-support">Example</h3>
<pre class=" mathjax-support"><b class=" mathjax-support">Input:</b>
3
&lt;&lt;&gt;&gt;
&gt;&lt;
&lt;&gt;&gt;&gt;
<b class=" mathjax-support">Output:</b>
4
0
2

</pre>
<p class=" mathjax-support">&nbsp;</p>
            
            
            
            
            
        

       
