#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    current1=0;
    num_sum=0;
    num_true=0;
    num_batch=0;
    batch=10;
    current_word=0;
    connect(this,SIGNAL(dazichecked()),this,SLOT(updata_hanzi()));
    ui->setupUi(this);
    for(int i=0;i<Number;i++)
    {
        num_words[i]=i;
    }
    int temp=0;
    int flag=0;
    qsrand(4);
    while(flag<Number)
    {
        int n1=qrand()%Number;
        int n2=qrand()%Number;
        if(n1!=n2)
        {
            temp=num_words[n1];
            num_words[n1]=num_words[n2];
            num_words[n2]=temp;
            flag++;
        }
    }
//    for(int i=0;i<Number;i++)
//    {
//           qDebug()<<num_words[i];
//    }
    QString str1="";
    for(int i=0;i<batch;i++)
    {
        str1.append(hanzi[num_words[num_batch+i]]+" ");
    }
    ui->hertory->setPlainText(str1);
    ui->Edit_currrent->setText(hanzi[num_words[current1]]);
    ui->Edit_currrent->setReadOnly(true);
    ui->hertory->setReadOnly(true);
    ui->Edit_input->setPlaceholderText("请将输入法调成英文小写");
    ui->len_word->setPlaceholderText("请输入正整数");
    ui->ord_words->setPlaceholderText("请输入正整数<401");
    ui->extime_words->setPlaceholderText("请输入正整数");
    ui->accura_words->setPlaceholderText("请输入正整数<100");

    ui->check_true->setCheckState(Qt::Checked);
    ui->check_false->setCheckState(Qt::Unchecked);
    ui->len_word->setText("10");
    ui->ord_words->setText("0");
    ui->extime_words->setText("3");
    ui->accura_words->setText("80");
    ui->Edit_currrent->setStyleSheet("font:64pt;border:10px groove gray;border-radius:20px;padding:2px 4px");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Edit_input_textEdited(const QString &arg1)
{
    if(arg1.length()>2 && flagtrue==1)
    {
        flagtoomanyword=1;
    }
    if(arg1.length()>3 && flagtrue==0)
    {
        flagtoomanyword=1;
    }
    if(arg1.length()==2 && flagtrue==1){
        num_sum++;
        if(QString::compare( arg1.toLower(), words[num_words[current_word]] )==0)
        {
            num_true++;
            ui->Edit_currrent->setStyleSheet("color:black;font:64pt;border:10px groove gray;border-radius:20px;padding:2px 4px");
            emit dazichecked();
        }
        else
        {
            if(flagtoomanyword==1)
            {
                flagtoomanyword=0;
                num_sum--;
    //          qDebug()<<"toomanyword";
              return;
            }
             ui->Edit_currrent->setStyleSheet("border:10px groove gray;border-radius:20px;padding:2px 4px;color:red;font:64pt;");
             if(flagfalse==1)
             {
                 ui->Edit_input->clear();
             }
        }

        float accuracy=(float)num_true/num_sum*100;
        ui->accuracy->setText(QString("%1%").arg(QString::number(accuracy, 'f', 2)));
    }
    else if(arg1.length()==3 && flagtrue==0)
    {
        num_sum++;
        if(QString::compare( arg1.toLower(), words[num_words[current_word]]+" " )==0){
            num_true++;
            ui->Edit_currrent->setStyleSheet("color:black;font:64pt;border:10px groove gray;border-radius:20px;padding:2px 4px");
            emit dazichecked();
        }
        else
        {
            if(flagtoomanyword==1)
            {
                flagtoomanyword=0;
                num_sum--;
    //          qDebug()<<"toomanyword";
              return;
            }
             ui->Edit_currrent->setStyleSheet("border:10px groove gray;border-radius:20px;padding:2px 4px;color:red;font:64pt;");
             if(flagfalse==1)
             {
                 ui->Edit_input->clear();
             }
        }

        //无论对错都更新正确率
        float accuracy=(float)num_true/num_sum*100;
        ui->accuracy->setText(QString("%1%").arg(QString::number(accuracy, 'f', 2)));
    }
}
void MainWindow::updata_hanzi(){
    current1++;
    float accuracy=(float)num_true/num_sum*100;
    QString str1="";
    if(batch+num_batch<Number)
    {
        for(int i=0;i<batch;i++)
        {
            str1.append(hanzi[num_words[num_batch+i]]+" ");
        }
    }
    else
    {
        for(int i=0;i<batch;i++)
        {
            str1.append(hanzi[num_words[Number-batch+i]]+" ");
        }
    }
    ui->hertory->setPlainText(str1);
    if(current1%(batch*extime)==0)
    {
        dida++;
        if(dida%10==0)
        {
            num_true=0;
            num_sum=0;
            current1=0;
        }
        if(accuracy>accuracyrate)
        {
            num_batch++;
            ui->len_word->setText(QString("%1").arg(QString::number(batch,10)));
            ui->ord_words->setText(QString("%1").arg(QString::number(num_batch,10)));
            ui->extime_words->setText(QString("%1").arg(QString::number(extime,10)));
            ui->accura_words->setText(QString("%1").arg(QString::number(accuracyrate,10)));
        }
    }
    ui->Edit_currrent->clear();
    ui->Edit_input->clear();
    QTime time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
    if(batch+num_batch>=Number)
    {
        current_word=qrand()%batch+Number-batch;
    }
    else
    {
        current_word=qrand()%batch+num_batch;
    }
    if(num_batch==Number-2)
    {
        num_batch=0;
        ui->ord_words->setText("0");
    }
    ui->Edit_currrent->setText(hanzi[num_words[current_word]]);
}

void MainWindow::on_len_word_returnPressed()
{
    batch=ui->len_word->text().toInt();
}

void MainWindow::on_ord_words_returnPressed()
{
    num_batch=ui->ord_words->text().toInt();
}

void MainWindow::on_extime_words_returnPressed()
{
    extime=ui->extime_words->text().toInt();
}

void MainWindow::on_accura_words_returnPressed()
{
    accuracyrate=ui->accura_words->text().toInt();
}

void MainWindow::on_resetButton_clicked()
{

    flagtrue=1;
    flagfalse=0;
    Number =402;
    current1=0;
    num_sum=0;
    num_true=0;
    num_batch=0;
    batch=10;
    current_word=0;
    accuracyrate=80;
    extime=2;
    ui->Edit_currrent->clear();
    ui->Edit_input->clear();
    flagtoomanyword=0;
    ui->accuracy->clear();
    QString str1="";
    for(int i=0;i<batch;i++)
    {
        str1.append(hanzi[num_words[num_batch+i]]+" ");
    }
    ui->hertory->setPlainText(str1);
    ui->Edit_currrent->setText(hanzi[num_words[current1]]);
    ui->Edit_currrent->setStyleSheet("color:black;font:64pt;border:10px groove gray;border-radius:20px;padding:2px 4px");
    ui->len_word->setText("10");
    ui->ord_words->setText("0");
    ui->extime_words->setText("3");
    ui->accura_words->setText("80");

    ui->check_true->setCheckState(Qt::Checked);
    ui->check_false->setCheckState(Qt::Unchecked);
}

void MainWindow::on_check_true_stateChanged(int arg1)
{
    if(arg1==2)
    {
        flagtrue=1;
    }
    else
    {
        flagtrue=0;
    }
}

void MainWindow::on_check_false_stateChanged(int arg1)
{
    if(arg1==2)
    {
        flagfalse=1;
    }
    else
    {
        flagfalse=0;
    }
}

void MainWindow::on_siziEdit_textEdited(const QString &arg1)
{
    if(arg1.length()==3)
    {
        ui->siziEdit->clear();
    }
}

void MainWindow::on_disruptbutton_clicked()
{
    QTime time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
    int temp=0;
    int flag=0;
    while(flag<Number)//记得改回2
    {
        int n1=qrand()%Number;
        int n2=qrand()%Number;
        if(n1!=n2)
        {
            temp=num_words[n1];
            num_words[n1]=num_words[n2];
            num_words[n2]=temp;
            flag++;
        }
    }
    on_resetButton_clicked();
}
