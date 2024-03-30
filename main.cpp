//========================================================================================
// Name        : HP Question App.cpp
// Author      : Nafargi
// Copyright   : Your copyright notice
// Source Of Questions : https://www.sanfoundry.com/cplusplus-interview-questions-answers/
//========================================================================================

#include <iostream>

using namespace std;

struct Question{
  string QuestionType;
  string ChooseText[4];
  string Explanation;

  int CorrectAnswer;

};


int CorrectAnswerCounter(int correct){

  int answer;
    cout<<"Choose 1-4: "<<endl;
    cin>>answer;

    while(answer >4 || answer <1){
         cout<<"Invalid Input : "<<endl;
         cin>>answer;
    }

    if(answer==correct){
        cout<<"Bravo You get it: "<<endl;
    return 1;
    }

    else{
        cout<<"Incorrct : "<<endl;
    return 0;
    }

}


 void ShowExplanation(Question explanation){
   int choice;

    cout << "Do you want to see Explanation  \n 1.YES  2.NO : "<<endl<<endl;
    cin>>choice;

    while(choice!=1 && choice!=2){
        cout <<"Invalid Input "<<endl;
        cin>>choice;
    }

    if(choice==1){
        cout <<explanation.Explanation<<endl<<endl;
    }
 }

 int  DisplayQuestion(Question questionNO){
    cout<< questionNO.QuestionType << endl;

    for (int i = 0 ; i < 4; i++){
        cout << questionNO.ChooseText[i]<<endl<<endl;
    }

    return CorrectAnswerCounter(questionNO.CorrectAnswer);

}

int main()
{
    int score=0;


    Question question1;
	question1.QuestionType = " 1. Who invented C++?";
	question1.ChooseText[0] = "   1. Dennis Ritchie";
	question1.ChooseText[1] = "   2. Ken Thompson";
	question1.ChooseText[2] = "   3. Brian Kernighan";
	question1.ChooseText[3] = "   4. Bjarne Stroustrup";
	question1.Explanation = "Explanation: Bjarne Stroustrup is the original creator of C++ in 1979 at AT&T Bell Labs.";
    question1.CorrectAnswer = 4;


	Question question2;
	question2.QuestionType = "2. What is C++??";
	question2.ChooseText[0] = "   1. C++ is an object oriented programming language";
	question2.ChooseText[1] = "   2. C++ is a procedural programming language";
	question2.ChooseText[2] = "   3. C++ supports both procedural and object oriented programming language";
	question2.ChooseText[3] = "   4. C++ is a functional programming language";
	question2.Explanation = "Explanation: C++ supports both procedural(step by step instruction) and \n object oriented programming (using the concept of classes and objects)..";
    question2.CorrectAnswer = 3;


	Question question3;
	question3.QuestionType = "3.What happens if the following C++ statement is compiled and executed? \n int *ptr = NULL; \n delete ptr;?";
	question3.ChooseText[0] = "  1. The program is not semantically correct";
	question3.ChooseText[1] = "  2. The program is compiled and executed successfully";
	question3.ChooseText[2] = "  3. The program gives a compile-time error";
	question3.ChooseText[3] = "  4. The program compiled successfully but throws an error during run-time";
	question3.Explanation = "Explanation: The above statement is syntactically and semantically correct as C++ \n allows the programmer to delete a NULL pointer, therefore, the program is compiled and executed successfully.";
    question3.CorrectAnswer = 2;


	Question question4;
	question4.QuestionType = "4.Which of the following is correct about this pointer in C++?";
	question4.ChooseText[0] = "  1. this pointer is passed as a hidden argument in all static variables of a class";
	question4.ChooseText[1] = "  2. this pointer is passed as a hidden argument in all the functions of a class";
	question4.ChooseText[2] = "  3. this pointer is passed as a hidden argument in all non-static functions of a class";
	question4.ChooseText[3] = "  4. this pointer is passed as a hidden argument in all static functions of a class";
	question4.Explanation = " Explanation: As static functions are a type of global function for a class so all the \n object shares the common instance of that static function whereas all the objects \n have there own instance for non-static functions and hence they \n are passed as a hidden argument in all the non-static \n members but not in static members.";
    question4.CorrectAnswer = 3;


	Question question5;
	question5.QuestionType = "5.Which of the following correctly declares an array in C++?";
	question5.ChooseText[0] = "  1. array{10};";
	question5.ChooseText[1] = "  2. array array[10];";
	question5.ChooseText[2] = "  3. int array;";
	question5.ChooseText[3] = "  4. int array[10];";
	question5.Explanation = "Explanation: Because array variable and values need to be declared after the datatype only.";
	question5.CorrectAnswer = 4;


    score +=DisplayQuestion(question1);
    ShowExplanation(question1);

	score += DisplayQuestion(question2);
    ShowExplanation(question2);

	score +=DisplayQuestion(question3);
    ShowExplanation(question3);

	score += DisplayQuestion(question4);
    ShowExplanation(question4);

	score += DisplayQuestion(question5);
    ShowExplanation(question5);

    cout << "Your total score is " <<score<< endl;
    cin.get();
    return 0;
}
