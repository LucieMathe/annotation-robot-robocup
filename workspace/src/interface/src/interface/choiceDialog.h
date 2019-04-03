#ifndef CHOICEDIALOG_H
#define CHOICEDIALOG_H

#include <QWidget>
#include <QObject>
#include <QDialog>
#include <QFormLayout>
#include <QCheckBox>
#include <QGroupBox>
#include <QButtonGroup>
#include <QComboBox>
#include <QDialogButtonBox>

#include <annotateImage/team.h>
#include "choiceComboBox.h"
#include <string>

using namespace annotateImage;

class ChoiceDialog : public QDialog
{
  Q_OBJECT

  public :
    ChoiceDialog();

    std::map<int,Team> teamMap;

    QCheckBox * positionCheck;
    QCheckBox * directionCheck;
    QCheckBox * traceCheck;
    QCheckBox * ballCheck;
    QCheckBox * targetCheck;

    ChoiceComboBox * traceBox;
    ChoiceComboBox * ballBox;
    ChoiceComboBox * targetBox;

    void setInitGeneral(bool position, bool direction, bool trace, bool ball, bool target);
    void setCurrentTrace(int team, int robot);
    void setCurrentBall(int team, int robot);
    void setCurrentTarget(int team, int robot);
    void setTeamMap(std::map<int,Team> & teams);

    bool getGeneralPosition();
    bool getGeneralDirection();
    bool getGeneralTrace();
    bool getGeneralBall();
    bool getGeneralTarget();

    int getNumberRobotBall();
    int getNumberRobotTrace();
    int getNumberRobotTarget();
    int getNumberTeamBall();
    int getNumberTeamTrace();
    int getNumberTeamTarget();

    signals:

    public slots :

};

#endif //CHOICEDIALOG_H
