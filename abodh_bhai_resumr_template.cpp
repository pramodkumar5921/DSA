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
	{\Huge \scshape \textbf{Abodh shah}} \\ \vspace{1pt}
	\small \raisebox{-0.1\height}\faPhone\ +91 9310173723~ \href{https://mail.google.com/mail/u/0/#inbox}{\raisebox{-0.2\height}\faEnvelope\  \underline{abodh5921@gmail.com}} ~
	\href{https://www.linkedin.com/in/abodh-shah-44605a209/}{\raisebox{-0.2\height}\faLinkedin\  \underline{LinkedIn}} ~
        \href{https://github.com/ABODHKUMAR}{\raisebox{-0.2\height}\faGithub\  \underline{GitHub}} ~
	\vspace{-8pt}
\end{center}


%-----------EDUCATION-----------
\section{Education}
  \resumeSubHeadingListStart
	\resumeSubheading
  	{Netaji Subhas University of Technology}{Dec 2019 - Aug 2023}
  	{B.Tech in ECE (CGPA - 7.20)}{Delhi, India}
	\resumeSubheading
	{Sarvodaya Co-Ed Vidyalaya, B-4 Paschim Vihar}{Apr 2017- Mar 2018}
  	{Class XII (Percentage 87.2)}{Delhi, India}
	% \resumeSubheading
 % {Government Sarvodaya Bal Vidyalaya}{Apr 2018- Mar 2020}
 %  	{Class X (Percentage 86)}{Delhi, India}
 %  	{C.R.P.F PUBLIC SCHOOL}{Apr 2009 - Mar 2019}
% 	{Class X (Percentage - 89.98)}{Delhi, India}
  \resumeSubHeadingListEnd

% -----------EXPERIENCE-----------
\section{Experience}
  \resumeSubHeadingListStart
	\resumeSubheading
  	{Associate Software Engineer (SurePass) }{ March 2023 -- Present}
  	{Python Developer}{Netaji subhas place , Delhi}
  	\resumeItemListStart
    	\resumeItem{Python Developer adept in advanced web scraping techniques using \textbf{BeautifulSoup, Scrapy, and the Requests library} to extract and parse data from a variety of online platforms.}
	\resumeItemListEnd
        \resumeItemListStart
    	\resumeItem{Proficient in leveraging \textbf{ Python, NumPy, and Pandas to develop resilient web scraping scripts }, facilitating efficient data collection and analysis across diverse projects and applications.}
	\resumeItemListEnd

        \resumeSubheading
  	{Engineer Trainee (PureSoftware) }{ July 2023 -- jan 2024}
  	{INTERNSHIP}{Noida , Delhi}
  	\resumeItemListStart
    	\resumeItem{Actively contributed to a dynamic \textbf{Web development team as an intern}, leveraging industry best practices and
cutting-edge technologies to support project objectives.}
	\resumeItemListEnd
        \resumeItemListStart
    	\resumeItem{ Acquired skills in \textbf{Html, Css, JavaScript, React.js, Node.js, Mongodb, and Rest Api,} contributing to comprehensive
project development.}
	\resumeItemListEnd
    
  \resumeSubHeadingListEnd
\vspace{-13pt}



%-----------Achievements-----------
\section{Achievements }
 \begin{itemize}[leftmargin=0.0in, label={}]
	\resumeItemListStart
    	\resumeItem{Secured \textbf{Global Rank 2895} in \textbf{LeetCode Biweekly 113} among 26680+ participants}
  
    	\resumeItem {\href{https://ninjasfiles.s3.amazonaws.com/certificate155847451993c64296668e85d57662898753c26.pdf}{\textbf{Coding Ninjas \faIcon{external-link-alt}} }\textbf{Top Ranked (1st)} on a leaderboard in an intensive coding \textbf{Competitive Programming } Coding Ninja }
        	\resumeItem {\href{https://leetcode.com/Abodh5921/}{\textbf{Leetcode \faIcon{external-link-alt}} }Rated \textbf{1679 | 550+(Problem) | Among Top 4.00\%} )}

     
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

%-----------PROJECTS-----------
\section{PROJECTS}
    
	\resumeSubHeadingListStart
  	\resumeProjectHeading
      	{\href{https://outstanding-foal-umbrella.cyclic.app/}{\textbf{\large{\underline{E-commerce Website }}} \faIcon{external-link-alt} \href{Project Link}{\raisebox{-0.1\height}\faExternalLink }} $|$
      	\large{\underline{Html , Css , Javascript , React.js Node.js , Mongodb }}}{}
      	\resumeItemListStart
      	\vspace{1pt}
        	\resumeItem{\normalsize{Created an E-commerce website using React.js, Node.js, Express.js,Mongodb, and Material UI , offering
products such as mobiles, laptops, and more. The site includes user login, powerful search functionality, and a
secure payment gateway.
\vspace{1pt}
 \textbf{}}}
    \resumeItem{\normalsize{Implemented order tracking for users to view their order history and track deliveries. Developed an admin
panel to manage user accounts, orders, and product listings
}}
 
 % \resumeItem{\normalsize{ensuring a seamless and engaging user experience .
 % \textbf{}}}
 
      	\resumeItemListEnd
      	\vspace{-13pt}
	\resumeProjectHeading
      	{\href{https://www.youtube.com/watch?v=qBVmFCpo0u4}{\textbf{\large{\underline{CHAT-BOT}}} \faIcon{external-link-alt} \href{https://www.youtube.com/watch?v=qBVmFCpo0u4}{\raisebox{-0.1\height} }}  $|$ \large{\underline{Openai Api , NLP , SQL , Javascript}}}{}
    	\resumeItemListStart
    	\vspace{5pt}
    	\resumeItem{\normalsize{
    Leveraged OpenAI API to design and construct a sophisticated chat bot with natural language processing
capabilities.
 \textbf{}}}
 \resumeItem{\normalsize{ Implemented various functionalities such as language understanding, context management, and response
generation using the OpenAI API, enhancing user interaction and experience.
 \textbf{}}}
      	\resumeItemListEnd
  	\vspace{-13pt}
    	\resumeProjectHeading
{\href{https://www.youtube.com/watch?v=Vpt1YdYe8ns}{\textbf{\large{\underline{MOVIE RECOMMENDED SYSTEM}}} \faIcon{external-link-alt}} $|$ \large{\underline{Python ,Numpy , Pandas}}}{}
\resumeItemListStart
\vspace{5pt}
\resumeItem{\normalsize{
 Based on Machine learning algorithm , the system recommends the user the top 5 similar movies based on the
user’s search query}}
% \resumeItem{\normalsize{Implemented predictive text functionality, refining the Auto-Complete codebase for optimal performance and responsiveness.}}
% \resumeItem{\normalsize{Implemented \textbf{EmailJS} for smooth communication with website visitors, streamlining inquiry handling.}}
\resumeItemListEnd

  	\vspace{-13pt}
	\resumeSubHeadingListEnd
\vspace{0pt}
%
\vspace{0pt}
% %-----------Achievements-----------
% \section{Achievements }
%  \begin{itemize}[leftmargin=0.0in, label={}]
% 	\resumeItemListStart
%     \resumeItem{Secured \textbf{India Rank 66} and \textbf{Global Rank 276} at \textbf{Google Kickstart 2023 Round B} among 10k+ participants \href{}{}}
%     \resumeItem{Secured \textbf{Global Rank 1328} in \textbf{Codeforces Round 880 Division 2} among 13k+ participants}
%     \resumeItem{Secured \textbf{first position} in \textbf{Hack Unicorn 2.0} where we built \textbf{Bhartiya Kanoon}, a trusted protocol for India's legal records}
%     	\resumeItem{Secured \textbf{Global Rank 121} in \textbf{Codechef Starters 76 Division 2} among 1600+ participants}
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

%
%-----------PROGRAMMING SKILLS-----------
\section{Skills}
 \begin{itemize}[leftmargin=0.15in, label={}]
	\small{\item{
 	\textbf{Languages}{: C++, Python , Javascript } \\
 	\textbf{Technologies}{ MySql , Mongodb , } \\
  \textbf{Tools}{ Pycharm , VScode , JupiterNotebook , } \\
 	\textbf{Coursework}{: Data Structures and Algorithms, Operating Systems, OOPS, DBMS , Computer Networks , Linux } \\
	}}
 \end{itemize}
 \vspace{-16pt}
% -----------EXPERIENCE-----------
% \section{Experience}
%   \resumeSubHeadingListStart
% 	\resumeSubheading
%   	{Competitive programming Lead | GDSC}{June 2023 --  Present}
%   	{College NSUT}{}
%   	\resumeItemListStart
%     	\resumeItem{Guiding students in \textbf{DSA} and \textbf{Competitive Programming}, addressing \textbf{50+} queries to foster excellence.}
% 	\resumeItemListEnd
%   \resumeSubHeadingListEnd
% \vspace{-13pt}

% %-----------Extracurricular Activities-----------
% \section{Extracurricular Activities}
% \resumeSubHeadingListStart
%   \resumeProjectHeading
%     {\textbf{\large{\underline{Google Developer Students Club (GDSC)}}} $|$ \large{\underline{CP Lead}}}{}
%     \resumeItemListStart
%     \resumeItem{\normalsize{Mentored students in \textbf{Competitive Programming} and various \textbf{Tech disciplines}.}}
%       \resumeItem{\normalsize{Organized insightful post-contest discussions for continuous learning.}}
%       \resumeItem{\normalsize{Organized numerous sessions on \textbf{DSA} and \textbf{competitive programming }, impacting over 100+ students.}}
%     \resumeItemListEnd
%   % \resumeProjectHeading
%     {\textbf{\large{\underline{Hobbies}}} \large{\underline{}}}{}
%     \resumeItemListStart
%       \resumeItem{\normalsize{Avid novel reader with a diverse literary taste, cultivating a passion for continuous learning and creative thinking.}}
%       \resumeItem{\normalsize{Dedicated practitioner of yoga, fostering mental and physical well-being through consistent practice..}}
%     \resumeItemListEnd
% \resumeSubHeadingListEnd
% %
% \vspace{0pt}
% %-----------Achievements-----------
% \section{Extracurricular Activities}
%  \begin{itemize}[leftmargin=0.15in, label={}]
% 	\resumeItemListStart
%     	\resumeItem{\href{https://drive.google.com/file/d/1rCto-CsRo9QTYpsge-yzJSBs4ZgiUiki/view?usp=sharing}{\textbf{Udemy} }Web developer bootcamp 2021}
%     	\resumeItem{\href{https://drive.google.com/file/d/1KfuKT3uftLuXPy8bVw4rv5ezqknRt047/view?usp=sharing}{\textbf{CS50x}}:  Introduction to Computer Science by \textbf{Harvard University}}
%   	\resumeItemListEnd
%  \end{itemize}
%  \vspace{-10pt}

\end{document}
