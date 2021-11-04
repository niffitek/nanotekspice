# nanotekspice
Tek2-Project at Epitech Berlin for object oriented programming

There are many programming languages: C, Lisp, Basic, APL, Intercal. . .
Each has its specificities and may be efficient in a different way.
They generally rely on a compiler to work.

The compiler transforms code written in something similar to human language into a more primitive form.
This primitive form is called assembly language when displayed in a human-readable format, or machine
language when displayed under the format read by the microprocessor.
Much like there are many programming languages, there are many assembly languages: at least one per
processor family, sometimes even one per single processor.

Of course, knowing an assembly language for a microprocessor may not be enough to be efficient: processors aren’t the only components in machines.
You may need to know how your machine works in order to create a
useful assembly language: which address corresponds to the graphics
card?

Which trap is assigned to this specific system call?
Hidden behind assembly and machine languages is the hardware itself.
Hardware is built from digital electronic components: chipsets.
Chipsets are tiny little functions with input and outputs that can be linked
together to create more powerful functions, just like in software.
These functions are exclusively based on boolean logic, meaning the only inputs and outputs are true and
false.

NanoTekSpice is a logic simulator that builds a graph (the nodes of which will be simulated digital electronic
components, inputs or outputs) from a configuration file, and injects values into that graph to get results.
