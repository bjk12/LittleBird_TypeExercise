# LittleBird_TypeExercise
小鹤双拼练习器（用来练习小鹤双拼打字法，**程序（即.exe文件）已经保存在release文件夹中了**）
<br>
![BJK_logo icon](https://github.com/bjk12/LittleBird_TypeExercise/blob/main/bjk1.ico)  
## 目录
* [概述](#概述)
  * [软件简介](#软件简介)
  * [版权说明](#版权说明)
* [使用说明](#使用说明)

## 概述
### 软件简介
&#8195;&#8195;本软件的全称为“**小鹤双拼练习软件**”，希望通过本软件能为打字爱好者或打字工作者提供一个练习小鹤双拼打字法的工具，帮助他们尽快掌握对应键位和节奏并形成肌肉记忆，提高打字速度和正确率。<br>
&#8195;&#8195;小鹤双拼练习软件采用面向对象的设计方法，利用**C++语言**和**Qt Creator 4.5.1开发平台**进行设计编写。本软件的主要特点是通过把文字库分组并将组内文字随机发送给用户进行练习，
同时随着打字数量的增加会加入新的待练习的文字，在保证练习次数的基础上兼顾了随机练习的趣味性。<br>
&#8195;&#8195;在安装并打开本软件后，用户可以通过本软件熟悉和掌握小鹤双拼打字法的键位（如图1）和打字节奏。
本软件为用户提供了极大的参数自由度，用户可以根据自己打字的熟练程度实时修改每组文字的长度、练习起点、每组文字的练习次数、准确度标准，字库顺序和是否自动清除输入区的文字等，
因此可以轻松满足打字初学者、打字爱好者和打字工作者等不同人群对打字练习难度的不同要求，帮助用户在随机打字的练习模式下快速高效而又不觉枯燥地提高自己的打字速度和准确率。<br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image001.jpg" alt="pic4_readme"/></div>
<p align="center">图1</p>

**No picture,No truth:**<br>

界面截图：<br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image015.jpg" alt="pic4_readme"/></div><br>

### 版权说明
已申软著，请勿商用 (＃｀д´)ﾉ<br>
## 使用说明

<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image022.jpg" alt="pic4_readme"/></div>
<p align="center">图2</p>
&#8195;&#8195;如图2所示，小鹤双拼练习软件的界面主要包括文字组显示区、打字练习区和参数设定区。<br>
&#8195;&#8195;界面主要包括文字组显示框、正确率显示框、待打文字显示框、输入文本框、私练文本框、文字组长度设定框、练习起点设定框、练习次数设定框、准确度设定框、恢复默认设置按钮、
打乱字库顺序按钮、 “输入正确自动换字”复选框和“输入错误自动清除”复选框，各个控件对应功能或作用会在下一节进行详细介绍。双击桌面快捷方式即可启动本软件。<br>
&#8195;&#8195; 本软件的**文字库覆盖了汉语的所有拼音，共计402种** （严格来说共计403种，但有一种读音太生僻了，而且只对应着一个生僻字，故舍去），以此帮助用户练习并充分掌握利用小鹤双拼打字法无一例外地打出所有的汉字。 <br>

&#8195;&#8195;如图3所示，本软件只有一个界面，主要包括文字组显示区、打字练习区和参数设定区。用户双击快捷方式启动本软件，进入界面后就可以看到输入区的提示文字——“请将输入法调成英文小写”，这是因为本软件只是用来训练用户在学习小鹤双拼打字法时的击键速度和准确度，所以只需读取用户按下的是哪两个按钮，即打出的拼音，而不关心其对应汉字是否选择正确，帮助用户省下了在练习打字时选择拼音所对应的特定汉字的时间，使用户可以将全部的时间和精力用于练习和熟悉小鹤双拼打字法的拼写规则和对应键位，高效地提高用户的击键速度和准确度。例如图中的待打文字“多”，用户只需要在输入法为英文小写模式下按照小鹤双拼打字法的规则依次敲击键盘上的“D”键和“O”键即可，软件会根据小鹤双拼打字法的规则判断用户所敲击的键位是否正确并给予相应的反馈。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image023.jpg" alt="pic4_readme"/></div>
<p align="center">图3</p>
&#8195;&#8195;用户进入本界面后，应该按照输入文本框中的提示文字将自己电脑的输入法调成英文小写模式，然后鼠标点击输入文本框，敲击待打文字显示框中的文字所对应的键位即可，若敲击键位正确则输入文本框清空，同时待打文字显示框刷新，显示下一个从文字组显示区随机选出的需要练习的文字, 正确率显示框刷新，显示最近一段时间内用户打字的正确率。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image024.jpg" alt="pic4_readme"/></div>
<p align="center">图4</p>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image025.jpg" alt="pic4_readme"/></div>
<p align="center">图5</p>
&#8195;&#8195;如图4，图5所示，需要注意的是，默认情况下由于“输入正确自动换字”复选框在软件启动后默认是被选中状态，所以用户敲击正确键位后，输入文本框将被自动清空。如果用户想练习敲击键位后按空格确定汉字输入的真实打字节奏或者实时确认自己的键位敲击是否正确，可以用鼠标点击“输入正确自动换字”复选框，复选框中对号消失，即其状态由选中变为未选中，此时用户在敲击完正确键位后再按一下回车才能将输入文本框中的键位交给软件判定。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image026.jpg" alt="pic4_readme"/></div>
<p align="center">图6</p>
&#8195;&#8195;如图6所示，若用户敲击键位错误则输入文本框不会自动清空，同时待打文字显示框变为红色以提醒用户敲击键位错误, 正确率显示框刷新，显示最近一段时间内用户打字的正确率。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image027.jpg" alt="pic4_readme"/></div>
<p align="center">图7</p>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image028.jpg" alt="pic4_readme"/></div>
<p align="center">图8</p>
&#8195;&#8195;如图7，图8所示，默认情况下由于“输入错误自动清除”复选框在软件启动后默认是未选中状态，所以用户敲击错误键位后，输入文本框不会自动清空以便于用户查看和纠正自己错误的击键习惯。如果用户想实现输入错误自动清除的功能，可以用鼠标点击“输入错误自动清除”复选框，复选框中对号出现，即其状态由未选中变为选中，此时用户在敲击完错误键位后软件会立刻处理用户输入的错误键位并刷新相关显示文本框，等待用户再次尝试输入键位，直到输入正确键位为止。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image029.jpg" alt="pic4_readme"/></div>
<p align="center">图9</p>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image030.jpg" alt="pic4_readme"/></div>
<p align="center">图10</p>
&#8195;&#8195;如图9，图10所示，用户练习的文字是从文字组显示框中随机选择出来的，同时文字组显示框中的文字也会随着用户练习次数的增加而不断更新，平均每个文字被练习的次数等于文字库长度乘以每组练习次数，默认设置是每个文字练习10 * 3 = 30 次。<br><br>
&#8195;&#8195;如果用户需要调整自己的练习强度，可以用鼠标点击文字库长度设定框，将默认数量“10”修改成用户的预设值，也可以点击练习次数设定框，将默认数量“3”修改为用户的预设值。需要注意的是。虽然这两个设定框都可以用来修改每个文字的平均练习次数，但修改文字库长度还会影响到文字组显示框中显示的文字数量，请用户自行权衡。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image031.jpg" alt="pic4_readme"/></div>
<p align="center">图11</p>
&#8195;&#8195;如图11所示，用户在修改软件各个参数时设定框均会出现提示文字，提示用户该设定框的最大范围。以练习起点设定框为例，修改此设定框时软件会提示用户“请输入正整数<401”,即用户输入的必须是正整数且小于401。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image032.jpg" alt="pic4_readme"/></div>
<p align="center">图12</p>
&#8195;&#8195;如图12所示，软件会帮助用户循环练习汉字的402种拼音，如果用户需要调整自己的练习起点，可以用鼠标单击练习起点设定框，将默认数量“0”修改成用户的预设值。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image033.jpg" alt="pic4_readme"/></div>
<p align="center">图13</p>
&#8195;&#8195;如图13所示，不建议初学者修改本软件的各项参数，如果用户试图将本软件的各项参数恢复成默认值，可通过单击“恢复默认设置”按钮实现。<br><br>
<div align=center><img src="https://github.com/bjk12/LittleBird_TypeExercise/blob/main/pic4_readme/image034.jpg" alt="pic4_readme"/></div>
<p align="center">图14</p>
&#8195;&#8195;如图14所示，当用户已经使用本软件很长时间后，为了避免熟悉字库的排列顺序而影响练习效果，可以通过单击“打乱字库顺序”按钮，将402种拼音的顺序全部乱序重排以保证随机打字的练习质量。<br>
&#8195;&#8195;<br>
