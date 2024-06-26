%-------------------------
% Resume in Latex
% Author : Jake Gutierrez
% Based off of: https://github.com/sb2nov/resume
% License : MIT
%------------------------

\documentclass[letterpaper,11pt]{article}

\usepackage{latexsym}
\usepackage[empty]{fullpage}
\usepackage{titlesec}
\usepackage{marvosym}
\usepackage[usenames,dvipsnames]{color}
\usepackage{verbatim}
\usepackage{enumitem}
\usepackage[hidelinks]{hyperref}
\usepackage{fancyhdr}
\usepackage[english]{babel}
\usepackage{tabularx}
\usepackage{fontawesome5}
\usepackage{multicol}
\setlength{\multicolsep}{-3.0pt}
\setlength{\columnsep}{-1pt}
\input{glyphtounicode}


%----------FONT OPTIONS----------
% sans-serif
% \usepackage[sfdefault]{FiraSans}
% \usepackage[sfdefault]{roboto}
% \usepackage[sfdefault]{noto-sans}
% \usepackage[default]{sourcesanspro}

% serif
% \usepackage{CormorantGaramond}
% \usepackage{charter}


\pagestyle{fancy}
\fancyhf{} % clear all header and footer fields
\fancyfoot{}
\renewcommand{\headrulewidth}{0pt}
\renewcommand{\footrulewidth}{0pt}

% Adjust margins
\addtolength{\oddsidemargin}{-0.6in}
\addtolength{\evensidemargin}{-0.5in}
\addtolength{\textwidth}{1.19in}
\addtolength{\topmargin}{-.7in}
\addtolength{\textheight}{1.4in}

\urlstyle{same}

\raggedbottom
\raggedright
\setlength{\tabcolsep}{0in}

% Sections formatting
\titleformat{\section}{
  \vspace{-4pt}\scshape\raggedright\large\bfseries
}{}{0em}{}[\color{black}\titlerule \vspace{-5pt}]

% Ensure that generate pdf is machine readable/ATS parsable
\pdfgentounicode=1

%-------------------------
% Custom commands
\newcommand{\resumeItem}[1]{
  \item\small{
	{#1 \vspace{-2pt}}
  }
}

\newcommand{\classesList}[4]{
	\item\small{
    	{#1 #2 #3 #4 \vspace{-2pt}}
  }
}

\newcommand{\resumeSubheading}[4]{
  \vspace{-2pt}\item
	\begin{tabular*}{1.0\textwidth}[t]{l@{\extracolsep{\fill}}r}
  	\textbf{#1} & \textbf{\small #2} \\
  	\textit{\small#3} & \textit{\small #4} \\
	\end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeSubSubheading}[2]{
	\item
	\begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
  	\textit{\small#1} & \textit{\small #2} \\
	\end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeProjectHeading}[2]{
	\item
	\begin{tabular*}{1.001\textwidth}{l@{\extracolsep{\fill}}r}
  	\small#1 & \textbf{}\\
	\end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeSubItem}[1]{\resumeItem{#1}\vspace{-4pt}}

\renewcommand\labelitemi{$\vcenter{\hbox{\tiny$\bullet$}}$}
\renewcommand\labelitemii{$\vcenter{\hbox{\tiny$\bullet$}}$}

\newcommand{\resumeSubHeadingListStart}{\begin{itemize}[leftmargin=0.0in, label={}]}
\newcommand{\resumeSubHeadingListEnd}{\end{itemize}}
\newcommand{\resumeItemListStart}{\begin{itemize}}
\newcommand{\resumeItemListEnd}{\end{itemize}\vspace{-5pt}}

%-------------------------------------------
%%%%%%  RESUME STARTS HERE  %%%%%%%%%%%%%%%%%%%%%%%%%%%%


\begin{document}

%----------HEADING----------
% \begin{tabular*}{\textwidth}{l@{\extracolsep{\fill}}r}
%   \textbf{\href{http://sourabhbajaj.com/}{\Large Sourabh Bajaj}} & Email : \href{mailto:sourabh@sourabhbajaj.com}{sourabh@sourabhbajaj.com}\\
%   \href{http://sourabhbajaj.com/}{http://www.sourabhbajaj.com} & Mobile : +1-123-456-7890 \\
% \end{tabular*}

\begin{center}
	{\Huge \scshape \textbf{Sachin shah}} \\ \vspace{1pt}
	\small \raisebox{-0.1\height}\faPhone\ +91 8851603212~ \href{https://mail.google.com/mail/u/0/#inbox}{\raisebox{-0.2\height}\faEnvelope\  \underline{sachin05112001@gmail.com}} ~
	\href{https://www.linkedin.com/in/sachin-ba22961a9/}{\raisebox{-0.2\height}\faLinkedin\  \underline{LinkedIn}} ~
        % \href{https://github.com/pramodkumar5921}{\raisebox{-0.2\height}\faGithub\  \underline{GitHub}} ~
	\vspace{-8pt}
\end{center}

%-----------EDUCATION-----------
\section{Education}
  \resumeSubHeadingListStart
	\resumeSubheading
  	{Delhi University(SOL)}{may 2019 - Aug 2022}
  	{B.Com (CGPA - 8.20)}{Delhi, India}
	\resumeSubheading
	{G.R.M Pubilc School}{Apr 2017- Mar 2019}
  	{Class XII (Percentage 74)}{Delhi, India}
	\resumeSubheading
 {Rajindra Public School Nihal Vihar}{Apr 2015 - Mar 2017}
  	{Class X (Percentage 72)}{Delhi, India}
 %  	{C.R.P.F PUBLIC SCHOOL}{Apr 2009 - Mar 2019}
% 	{Class X (Percentage - 89.98)}{Delhi, India}
  \resumeSubHeadingListEnd

% -----------EXPERIENCE-----------
% \section{Experience}
%   \resumeSubHeadingListStart
% 	\resumeSubheading
%   	{Senior  }{June 2023 -- Present}
%   	{Teaching Assistant}{Remote}
%   	\resumeItemListStart
%     	\resumeItem{Helping students excel in \textbf{DSA, Competitive Programming} and solved  \textbf{100+} doubts during this period}
% 	\resumeItemListEnd
    
%   \resumeSubHeadingListEnd
% \vspace{-13pt}



%-----------Achievements-----------
% \section{Achievements }
%  \begin{itemize}[leftmargin=0.0in, label={}]
% 	\resumeItemListStart
%     	\resumeItem{Secured \textbf{Global Rank 2931} in \textbf{LeetCode Biweekly 113} among 26680+ participants}

%     \resumeItem {\href{https://codeforces.com/profile/coder_43}{\textbf{Codeforces  \faIcon{external-link-alt}}} Rated\textbf{ 862|newbie } solved \textbf{ 50+ } Highly rated Question (Handle:\textbf{ coder_43})}
  
%     	\resumeItem {\href{https://ninjasfiles.s3.amazonaws.com/certificate_92ddccc0111bff19_644a6d7645378e5da131829cf7bf8cee.pdf}{\textbf{Coding Ninjas \faIcon{external-link-alt}} }\textbf{Top Ranked (1st)} on a leaderboard in an intensive coding \textbf{Competitive Programming } Coding Ninja }
%         	\resumeItem {\href{https://leetcode.com/pramodkumar808751528270/}{\textbf{Leetcode \faIcon{external-link-alt}} }Rated \textbf{1666 | 550+(Problem) | Among Top 4.00\%} )}

     
%   	\resumeItemListEnd
%  \end{itemize}
%  \vspace{-10pt}
 
%  %
% %-----------Profile Links-----------
% \section{Profile Links}
%  \begin{itemize}[leftmargin=0.0in, label={}]
% 	\resumeItemListStart
%  	\resumeItem {\href{https://www.codechef.com/users/rishabh_rs}{\textbf{Codechef \faIcon{external-link-alt}}} Rated\textbf{ 1818 | 4 Star} among 200k+ users (Handle:\textbf{ rishabh\_rs})}
  
%     	\resumeItem {\href{https://codeforces.com/profile/r3hab.rs}{\textbf{Codeforces \faIcon{external-link-alt}} }Rated \textbf{1485 | Specialist } among 15k+ users (Handle: \textbf{r3hab.rs})}
%         	\resumeItem {\href{https://leetcode.com/redhair_rs/}{\textbf{Leetcode \faIcon{external-link-alt}} }Rated \textbf{1892 | 700+(Problem) | Among Top 4.69\%} Users (Handle: \textbf{redhairrs})}
%     	\resumeItem {\href{https://github.com/redhairrs}{\textbf{Github \faIcon{external-link-alt}}}}
%   	\resumeItemListEnd
%  \end{itemize}
%  \vspace{-16pt}

%-----------PROJECTS-----------
% \section{PROJECTS}
    
% 	\resumeSubHeadingListStart
%   	\resumeProjectHeading
%       	{\href{https://github.com/pramodkumar5921/Snake-Game-Project/blob/master/Snake_Game.py}{\textbf{\large{\underline{SNAKE-GAME}}} \faIcon{external-link-alt} \href{Project Link}{\raisebox{-0.1\height}\faExternalLink }} $|$
%       	\large{\underline{Python}}}{}
%       	\resumeItemListStart
%       	\vspace{3pt}
%         	\resumeItem{\normalsize{Developed a classic Snake game using Python , showcasing proficiency in game development and
% programming logic.
%  \textbf{}}}
%     \resumeItem{\normalsize{Implemented efficient algorithms for snake movement, food generation, and collision detection,
% }}
 
 % \resumeItem{\normalsize{ensuring a seamless and engaging user experience .
 % \textbf{}}}
 
%       	\resumeItemListEnd
%       	\vspace{-13pt}
% 	\resumeProjectHeading
%       	{\href{https://github.com/pramodkumar5921/DSA/blob/main/sudoku_solver.cpp}{\textbf{\large{\underline{Sudoku-Solver}}} \faIcon{external-link-alt} \href{Project Link}{\raisebox{-0.1\height} }}  $|$ \large{\underline{C++,Recursion,BackTracking}}}{}
%     	\resumeItemListStart
%     	\vspace{5pt}
%     	\resumeItem{\normalsize{
%     Implemented an efficient Sudoku Solver algorithm in C++, showcasing strong problem-solving skills.
%  \textbf{}}}
%  % \resumeItem{\normalsize{ Applied \textbf{read/write operations} on \textbf{txt file} to save hi-score.
%  % \textbf{}}}
%       	\resumeItemListEnd
%   	\vspace{-13pt}
%     	\resumeProjectHeading
% {\href{https://github.com/pramodkumar5921/DSA/blob/main/Auto_complete_2.cpp}{\textbf{\large{\underline{Auto-Complete}}} \faIcon{external-link-alt}} $|$ \large{\underline{C++,Tries}}}{}
% \resumeItemListStart
% \vspace{5pt}
% \resumeItem{\normalsize{
% Developed an Auto-Complete feature using C++ to enhance user experience, showcasing proficiency in data structures and algorithms..}}
% \resumeItem{\normalsize{Implemented predictive text functionality, refining the Auto-Complete codebase for optimal performance and responsiveness.}}
% % \resumeItem{\normalsize{Implemented \textbf{EmailJS} for smooth communication with website visitors, streamlining inquiry handling.}}
% \resumeItemListEnd

%   	\vspace{-13pt}
% 	\resumeSubHeadingListEnd
% \vspace{0pt}
%
% \vspace{0pt}
%-----------Achievements-----------
\section{Achievements }
 \begin{itemize}[leftmargin=0.0in, label={}]
	\resumeItemListStart
    \resumeItem{Secured \textbf{India Rank 60345 in SSC EXAM} among 15 lakh+ participants \href{}{}}
    % \resumeItem{Secured \textbf{in \textbf{Civil defence} among 13k+ participants}
    \resumeItem{Secured \textbf{first position} in \textbf{science technology 2.0} where we built \textbf{Wind mill}, project in 10th standard}
    	% \resumeItem{Secured \textbf{Global Rank 121} in \textbf{Codechef Starters 76 Division 2} among 1600+ participants}
  	\resumeItemListEnd
 \end{itemize}
 \vspace{-10pt}
 
%  %
% %-----------Profile Links-----------
% \section{Profile Links}
%  \begin{itemize}[leftmargin=0.0in, label={}]
% 	\resumeItemListStart
%  	\resumeItem {\href{https://www.codechef.com/users/rishabh_rs}{\textbf{Codechef \faIcon{external-link-alt}}} Rated\textbf{ 1818 | 4 Star} among 200k+ users (Handle:\textbf{ rishabh\_rs})}
  
%     	\resumeItem {\href{https://codeforces.com/profile/r3hab.rs}{\textbf{Codeforces \faIcon{external-link-alt}} }Rated \textbf{1485 | Specialist } among 15k+ users (Handle: \textbf{r3hab.rs})}
%         	\resumeItem {\href{https://leetcode.com/redhair_rs/}{\textbf{Leetcode \faIcon{external-link-alt}} }Rated \textbf{1892 | 700+(Problem) | Among Top 4.69\%} Users (Handle: \textbf{redhairrs})}
%     	\resumeItem {\href{https://github.com/redhairrs}{\textbf{Github \faIcon{external-link-alt}}}}
%   	\resumeItemListEnd
%  \end{itemize}
%  \vspace{-16pt}

%
%-----------PROGRAMMING SKILLS-----------
\section{Skills}
 \begin{itemize}[leftmargin=0.15in, label={}]
	\small{\item{
 	\textbf{Languages}{: Hindi,English.} \\
 	\textbf{Technologies}{ MS-Word,Power-Point,Tally,Advanced Excel} \\
 	\textbf{Coursework}{: Accountancy and Economics,Advanced Mathematics.} \\
	}}
 \end{itemize}
 \vspace{-16pt}
% -----------EXPERIENCE-----------
\section{Experience}
  \resumeSubHeadingListStart
	\resumeSubheading
  	{Teaching Assistant - G.K  study Point }{June 19 --  Dec 2021}
  	{Institute}{G.K study point}
  	\resumeItemListStart
    	\resumeItem{Guiding student in \textbf{ Mathematics} addressing \textbf{1500+} queries to foster excellence.}
	\resumeItemListEnd
  \resumeSubHeadingListEnd
  
\resumeSubHeadingListStart
	\resumeSubheading
  	{Tele Calling - Bajaj Finserv}{June 2022 --  Dec 2022}
  	{Company Bajaj Finserv}{}
  	\resumeItemListStart
    	\resumeItem{Guiding Customers  in \textbf{Loan Dealing } and \textbf{information Provide about Loan}, addressing \textbf{500+} queries to foster excellence.}
	\resumeItemListEnd
  \resumeSubHeadingListEnd\resumeSubHeadingListStart
	\resumeSubheading
  	{Backened staff - Eureka Forbes }{Jan 2023 --  Present}
  	{Company Eureka Forbes}{}
  	\resumeItemListStart
    	\resumeItem{Guiding Customers  in \textbf{AMC } and \textbf{information Provide about RO}, addressing \textbf{700+} queries to foster excellence.}
	\resumeItemListEnd
   	\resumeItemListStart
    	\resumeItem{Guiding  staff  in \textbf{field Executive }to foster excellence.}
	\resumeItemListEnd
  \resumeSubHeadingListEnd
\vspace{-13pt}

\section{Hobbies }
  \resumeSubHeadingListStart
    	\resumeItem{Avid novel reader with a diverse literary taste , cultivating a passion for continous learning and creative thinking.}
	\resumeItemListEnd
 \resumeItem{Dedicated practitioner of yoga, fostering mental and physical well-being through consistent pratice.}
	\resumeItemListEnd
  \resumeSubHeadingListEnd
  
%-----------Extracurricular Activities-----------
% \section{Extracurricular Activities}
% \resumeSubHeadingListStart
%   \resumeProjectHeading
%     {\textbf{\large{\underline{Google Developer Students Club (GDSC)}}} $|$ \large{\underline{CP Lead}}}{}
%     \resumeItemListStart
%     \resumeItem{\normalsize{Mentored students in \textbf{Competitive Programming} and various \textbf{Tech disciplines}.}}
%       \resumeItem{\normalsize{Organized insightful post-contest discussions for continuous learning.}}
%       \resumeItem{\normalsize{Organized numerous sessions on \textbf{DSA} and \textbf{competitive programming }, impacting over 100+ students.}}
%     \resumeItemListEnd
  % \resumeProjectHeading
  
% % %-----------Achievements-----------
% \section{Extracurricular Activities}
%  \begin{itemize}[leftmargin=0.15in, label={}]
% 	\resumeItemListStart
%     	\resumeItem{\href{https://drive.google.com/file/d/1rCto-CsRo9QTYpsge-yzJSBs4ZgiUiki/view?usp=sharing}{\textbf{Udemy} }Web developer bootcamp 2021}
%     	\resumeItem{\href{https://drive.google.com/file/d/1KfuKT3uftLuXPy8bVw4rv5ezqknRt047/view?usp=sharing}{\textbf{CS50x}}:  Introduction to Computer Science by \textbf{Harvard University}}
%   	\resumeItemListEnd
%  \end{itemize}
%  \vspace{-10pt}

\end{document}
