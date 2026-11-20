#include<iostream>
using namespace std;
void board(char nums[3][3]){

  for (int i=0;i<3;i++){
    cout<<"-------------------------"<<endl;
    for(int j=0;j<3;j++){
      cout<<"|  \t";
    }
    cout<<"|"<<endl;
    for(int j=0;j<3;j++){
      cout<<"| "<<nums[i][j]<<"\t";
    }
    cout<<"|"<<endl;
    for(int j=0;j<3;j++){
      cout<<"|  \t";
    }
    cout<<"|"<<endl;
  }
  cout<<"-------------------------"<<endl;
}

int main(){
  char nums[3][3]={
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
  };
  int n,row_pos{},col_pos{};
  board(nums);
  int player=1;
  while(1){
    if(player==1){
      cout<<endl<<"Player X , Enter the position to play : ";
      cin>>n;
      if((n==1)||(n==2)||(n==3)){
        row_pos=0;
      }else if((n==4)||(n==5)||(n==6)){
        row_pos=1;
      }else if((n==7)||(n==8)||(n==9)){
        row_pos=2;
      }else{}
      if((n==1)||(n==4)||(n==7)){
        col_pos=0;
      }else if((n==2)||(n==5)||(n==8)){
        col_pos=1;
      }else if((n==3)||(n==6)||(n==9)){
        col_pos=2;
      }else{}
      nums[row_pos][col_pos]='X';
      board(nums);

      if(((nums[0][0]==nums[1][1])&& (nums[0][0]==nums[2][2])&&(nums[0][0]=='X'))||((nums[0][2]==nums[1][1])&& (nums[0][2]==nums[2][0])&&(nums[0][0]=='X'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='X'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='X'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='X'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='X'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='X'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='X'))){
        cout<<endl<<"The Winner is Player X";
        break;
      }else if(((nums[0][0]==nums[1][1])&& (nums[0][0]==nums[2][2])&&(nums[0][0]=='O'))||((nums[0][2]==nums[1][1])&& (nums[0][2]==nums[2][0])&&(nums[0][0]=='O'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='O'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='O'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='O'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='O'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='O'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='O'))){
        cout<<endl<<"The Winner is Player O";
        break;
      }else if(((nums[0][0]=='X')||(nums[0][0]=='O'))&&((nums[0][1]=='X')||(nums[0][1]=='O'))&&((nums[0][2]=='X')||(nums[0][2]=='O'))&&((nums[1][0]=='X')||(nums[1][0]=='O'))&&((nums[1][1]=='X')||(nums[1][1]=='O'))&&((nums[1][2]=='X')||(nums[1][2]=='O'))&&((nums[2][0]=='X')||(nums[2][0]=='O'))&&((nums[2][1]=='X')||(nums[2][1]=='O'))&&((nums[2][2]=='X')||(nums[2][2]=='O'))){
        cout<<endl<<"The Game is a Draw";
        break;
      }else{}
      player=2;
    }else{

      cout<<endl<<"Player O , Enter the position to play : ";
      cin>>n;
      if((n==1)||(n==2)||(n==3)){
        row_pos=0;
      }else if((n==4)||(n==5)||(n==6)){
        row_pos=1;
      }else if((n==7)||(n==8)||(n==9)){
        row_pos=2;
      }else{}
      if((n==1)||(n==4)||(n==7)){
        col_pos=0;
      }else if((n==2)||(n==5)||(n==8)){
        col_pos=1;
      }else if((n==3)||(n==6)||(n==9)){
        col_pos=2;
      }else{}
      nums[row_pos][col_pos]='O';
      board(nums);

      if(((nums[0][0]==nums[1][1])&& (nums[0][0]==nums[2][2])&&(nums[0][0]=='X'))||((nums[0][2]==nums[1][1])&& (nums[0][2]==nums[2][0])&&(nums[0][0]=='X'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='X'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='X'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='X'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='X'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='X'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='X'))){
        cout<<endl<<"The Winner is Player X";
        break;
      }else if(((nums[0][0]==nums[1][1])&& (nums[0][0]==nums[2][2])&&(nums[0][0]=='O'))||((nums[0][2]==nums[1][1])&& (nums[0][2]==nums[2][0])&&(nums[0][0]=='O'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='O'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='O'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='O'))||((nums[0][0]==nums[0][1])&& (nums[0][0]==nums[0][2])&&(nums[0][0]=='O'))||((nums[1][0]==nums[1][1])&& (nums[1][0]==nums[1][2])&&(nums[1][0]=='O'))||((nums[2][0]==nums[2][1])&& (nums[2][0]==nums[2][2])&&(nums[2][0]=='O'))){
        cout<<endl<<"The Winner is Player O";
        break;
      }else if(((nums[0][0]=='X')||(nums[0][0]=='O'))&&((nums[0][1]=='X')||(nums[0][1]=='O'))&&((nums[0][2]=='X')||(nums[0][2]=='O'))&&((nums[1][0]=='X')||(nums[1][0]=='O'))&&((nums[1][1]=='X')||(nums[1][1]=='O'))&&((nums[1][2]=='X')||(nums[1][2]=='O'))&&((nums[2][0]=='X')||(nums[2][0]=='O'))&&((nums[2][1]=='X')||(nums[2][1]=='O'))&&((nums[2][2]=='X')||(nums[2][2]=='O'))){
        cout<<endl<<"The Game is a Draw";
        break;
      }else{}

      player=1;
    }


  }
  return 0;
}