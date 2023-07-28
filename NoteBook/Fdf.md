## Pcd Rules

* Within the[FD]sections, PCDs that appear immediately following the line containing address|size or
offset|size values will have their values automatically assigned to the address|size or offset|size
using the same ordering. Additionally, some tokens, such as BaseAddress, which use a format of token
= value, can have a PCD's value set at the same time. The PCD must be on the same line, and be
separated from the value by field separator character.If there are two values on the line, separated
by a field separator character, the PCD names that will be assigned the values must appear on the
next line, and must also be separated by the field separator character.


## Section

* Sections are terminated by the start of another section or the end of the file.
* Duplicate sections (two sections with identical section tags) will be merged by tools, with the second 
section appended to the first.
* The [Rules] and [VTF] sections allow the use of architectural modifiers, however the content must
specific to an individual architecture or common to all architectures.

## !include Statements

* The included file content must match the
content type of the current section definition, contain complete sections, or combination of both.


## [FD] Sections

* Multiple FD sections can be defined in a FDF file.
* Define statements and a description of what goes into the Flash Device Image.
* It's required for platform images, and not required for OptionROM images.

There are five valid Token names defined by this specification.
- BaseAddress       The base address of the FLASH Device.
- Size              The size in bytes of the FLASH Device
- ErasePolarity     Either 0 or 1, depending on the erase polarity of the Flash Device.
- BlockSize         One or More - Size of a block, optionally followed by number of blocks. Multiple
BlockSize legal, and the first statement represents block 0 (the first block) and subsequent statements are BlockSize
statements represent blocks 1 - N.
- NumBlocks         Zero or one - The number of continuous blocks of size, BlockSize. If NumBlocks is not present, the number
of blocks defaults to 1. An optional PcdName "|" character. The may follow the Token statement and is separated from the statement using a pipe PcdName is assigned $(VALUE). Only one PcdName can be assigned a Token's Value.

Although sub-regions existed in EDK FDF files, EDK II FDF does not use the concept of subregions.？？