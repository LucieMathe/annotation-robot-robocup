#include "traitement/robotInformation.h"

namespace traitement
{

RobotInformation::RobotInformation(){
	numRobotInformation = 0;
  penalty = 0;
	secs_till_unpenalised = 0;
	yellow_card_count = 0;
	red_card_count = 0;
}

RobotInformation::~RobotInformation(){
}

int RobotInformation::getNumRobotInformation() const{
  return numRobotInformation;
}

int RobotInformation::getPenalty() const{
  return penalty;
}

int RobotInformation::getSecsTillUnpenalised() const{
  return secs_till_unpenalised;
}

int RobotInformation::getYellowCardCount() const{
  return yellow_card_count;
}

int RobotInformation::getRedCardCount() const{
  return red_card_count;
}

int RobotInformation::sizeOfQueue(){
	return oldPos.size();
}

Position RobotInformation :: getPosition(){
	Position toSend = oldPos.front();
	oldPos.pop();
	oldPos.push(toSend);
	return toSend;
}

void RobotInformation::update(Position pos){
  if (oldPos.size()>=500)
  	oldPos.pop();
  oldPos.push(pos);
}


}
