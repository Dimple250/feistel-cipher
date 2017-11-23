#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    const QRect r = QApplication::desktop()->availableGeometry();
    this->resize(r.width()*0.50, r.height()*0.80);

    n=6;
    m=4;

    createMap();

     text=("Старый_дом_стоял_в_тени."
                  "Под_окном_полз_злой_паук"
                  "Птицы_летели_за_горизонт"
                  "Утро_было_особо_туманным");

    //qDebug()<<text.length()/8;


    MainWidget=new QWidget(this);
    tablewidget=new QTableWidget;
    tablewidget->horizontalHeader()->hide();
    tablewidget->verticalHeader()->hide();

    tablewidget->setRowCount(n);
    tablewidget->setColumnCount(m);

        tableHeight = tablewidget->horizontalHeader()->height() +
                          tablewidget->verticalHeader()->length() + 2;

        tableWidth = tablewidget->verticalHeader()->width() +
                              tablewidget->horizontalHeader()->length() + 2;

    setCentralWidget(MainWidget);

    Chiper();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createMap(){

    alphabet["A"]=0;alphabet["Б"]=1;
    alphabet["В"]=2;alphabet["Г"]=3;
    alphabet["Д"]=4;alphabet["Е"]=5;
    alphabet["Ё"]=6;alphabet["Ж"]=7;
    alphabet["З"]=8;alphabet["И"]=9;
    alphabet["Й"]=10;alphabet["К"]=11;
    alphabet["Л"]=12;alphabet["М"]=13;
    alphabet["Н"]=14;alphabet["О"]=15;
    alphabet["П"]=16;alphabet["Р"]=17;
    alphabet["С"]=18;alphabet["Т"]=19;
    alphabet["У"]=20;alphabet["Ф"]=21;
    alphabet["Х"]=22;alphabet["Ц"]=23;
    alphabet["Ч"]=24;alphabet["Ш"]=25;
    alphabet["Щ"]=26;alphabet["Ъ"]=27;
    alphabet["Ы"]=28;alphabet["Ь"]=29;
    alphabet["Э"]=30;alphabet["Ю"]=31;
    alphabet["Я"]=32;alphabet["."]=33;
    alphabet[","]=34;alphabet["_"]=35;


    NumbersAlphabet[0]="A";NumbersAlphabet[1]="Б";
    NumbersAlphabet[2]="В";NumbersAlphabet[3]="Г";
    NumbersAlphabet[4]="Д";NumbersAlphabet[5]="Е";
    NumbersAlphabet[6]="Ё";NumbersAlphabet[7]="Ж";
    NumbersAlphabet[8]="З";NumbersAlphabet[9]="И";
    NumbersAlphabet[10]="Й";NumbersAlphabet[11]="К";
    NumbersAlphabet[12]="Л";NumbersAlphabet[13]="М";
    NumbersAlphabet[14]="Н";NumbersAlphabet[15]="О";
    NumbersAlphabet[16]="П";NumbersAlphabet[17]="Р";
    NumbersAlphabet[18]="С";NumbersAlphabet[19]="Т";
    NumbersAlphabet[20]="У";NumbersAlphabet[21]="Ф";
    NumbersAlphabet[22]="Х";NumbersAlphabet[23]="Ц";
    NumbersAlphabet[24]="Ч";NumbersAlphabet[25]="Ш";
    NumbersAlphabet[26]="Щ";NumbersAlphabet[27]="Ъ";
    NumbersAlphabet[28]="Ы";NumbersAlphabet[29]="Ь";
    NumbersAlphabet[30]="Э";NumbersAlphabet[31]="Ю";
    NumbersAlphabet[32]="Я";NumbersAlphabet[33]=".";
    NumbersAlphabet[34]=",";NumbersAlphabet[35]="_";
}

void MainWindow::createBlok(int NumberbOfBlok){
    Rk1="";
    RLo="";
    R1="";
    L1="";
    Lo="";
    Ro="";
    for(int i=0;i<4;i++){
    Lo+=bloks[NumberbOfBlok][i];
    Ro+=bloks[NumberbOfBlok][i+4];
    }

    for(int i=0;i<4;i++){
        Rk1+=NumbersAlphabet[(alphabet[Ro[i]+""]+alphabet[key[i]+""])%36];
    }
    for(int i=0;i<4;i++){
        R1+=NumbersAlphabet[(alphabet[Lo[i]+""]+alphabet[Rk1[i]+""])%36];
    }
    for(int i=0;i<4;i++){
         RLo+=NumbersAlphabet[(alphabet[R1[i]+""]+alphabet[key2[i]+""])%36];
    }
    for(int i=0;i<4;i++){
        L1+=NumbersAlphabet[(alphabet[Ro[i]+""]+alphabet[RLo[i]+""])%36];
  }
}

void MainWindow::Chiper(){

    text=text.toUpper();
    key="шарп";
    key=key.toUpper();
    key2="праш";
    key2=key2.toUpper();

    Result="";

    for (int i = 0; i < text.count(); i+=8)
        bloks<<text.mid(i,8);

    int KolBloks=0;
    while(KolBloks<bloks.length()){
      createBlok(KolBloks);
      Result+=R1+" "+L1+" ";
      KolBloks++;
    }

    qDebug()<<Result;
    //saveCSV();
    createTables();
}

void MainWindow::createTables(){

    int sum=0;

   // QVector<QTableWidget>* masstables;

    QGridLayout* grdlayout=new QGridLayout;

    tablewidget=new QTableWidget;
    tablewidget->horizontalHeader()->hide();
    tablewidget->verticalHeader()->hide();
    tablewidget->setRowCount(n);
    tablewidget->setColumnCount(m);
    tablewidget->setMaximumHeight(tableHeight);
    tablewidget->setMinimumWidth(tableWidth);


    QTableWidgetItem* tableitem=0;


    int KolBloks=0;
    //while(KolBloks<bloks.length()){

        createBlok(KolBloks);

        for(int i=0;i<4;i++){
         tableitem=new QTableWidgetItem(Ro[i]+"");
         tablewidget->setItem(0,i,tableitem);
         tableitem=new QTableWidgetItem(key[i]+"");
         tablewidget->setItem(1,i,tableitem);
         tableitem=new QTableWidgetItem(QString("%1").arg(alphabet[Ro[i]+""]));
         tablewidget->setItem(2,i,tableitem);
         tableitem=new QTableWidgetItem(QString("%1").arg(alphabet[key[i]+""]));
         tablewidget->setItem(3,i,tableitem);
         sum=(tablewidget->item(2,i)->text().toInt()+tablewidget->item(3,i)->text().toInt())%36;
         tableitem=new QTableWidgetItem(QString("%1").arg(sum));
         tablewidget->setItem(4,i,tableitem);
         tableitem=new QTableWidgetItem(NumbersAlphabet[sum]);
         tablewidget->setItem(5,i,tableitem);
        }
        //masstables->push_back(*tablewidget);

        tablewidget=new QTableWidget;
        tablewidget->horizontalHeader()->hide();
        tablewidget->verticalHeader()->hide();
        tablewidget->setRowCount(n);
        tablewidget->setColumnCount(m);
        tablewidget->setMaximumHeight(tableHeight);
        tablewidget->setMinimumWidth(tableWidth);

        for(int i=0;i<4;i++){
         tableitem=new QTableWidgetItem(Lo[i]+"");
         tablewidget->setItem(0,i,tableitem);
         tableitem=new QTableWidgetItem(key[i]+"");
         tablewidget->setItem(1,i,tableitem);
         tableitem=new QTableWidgetItem(QString("%1").arg(alphabet[Ro[i]+""]));
         tablewidget->setItem(2,i,tableitem);
         tableitem=new QTableWidgetItem(QString("%1").arg(alphabet[key[i]+""]));
         tablewidget->setItem(3,i,tableitem);
         sum=(tablewidget->item(2,i)->text().toInt()+tablewidget->item(3,i)->text().toInt())%36;
         tableitem=new QTableWidgetItem(QString("%1").arg(sum));
         tablewidget->setItem(4,i,tableitem);
         tableitem=new QTableWidgetItem(NumbersAlphabet[sum]);
         tablewidget->setItem(5,i,tableitem);
        }
         //masstables->push_back(*tablewidget);

         //grdlayout->addWidget(masstables->data(),0,0);
        // grdlayout->addWidget(masstables->data(),0,1);

    //}

        MainWidget->setLayout(grdlayout);

}

void MainWindow::saveCSV(){

    text=text.toUpper();
    key="шарп";
    key=key.toUpper();
    key2="праш";
    key2=key2.toUpper();


    QFile f("/home/deus/Desktop/Книга2.csv");

        if( !f.open( QIODevice::WriteOnly ) )
        {
        }
            QTextStream ts( &f );
            QStringList strList;


    int KolBloks=0;
    while(KolBloks<bloks.length()){
         createBlok(KolBloks);

        ts<<";;;;\"Blok"+QString::number(KolBloks+1)+"\"\n";


        for(int i=0;i<4;i++){
        ts<<"\""+Ro[i]+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+Lo[i]+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+key[i]+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+Rk1[i]+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[Ro[i]+""])+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[Lo[i]+""])+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[key[i]+""])+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[Rk1[i]+""])+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number((alphabet[Ro[i]+""]+alphabet[key[i]+""])%36)+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number((alphabet[Lo[i]+""]+alphabet[Rk1[i]+""])%36)+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+NumbersAlphabet[(alphabet[Ro[i]+""]+alphabet[key[i]+""])%36]+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+NumbersAlphabet[(alphabet[Lo[i]+""]+alphabet[Rk1[i]+""])%36]+"\";";
        }
        ts<<"\"\"\n";
        ts<<"\"\"\n";



        for(int i=0;i<4;i++){
        ts<<"\""+R1[i]+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+Ro[i]+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+key2[i]+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+RLo[i]+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[R1[i]+""])+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[Ro[i]+""])+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[key2[i]+""])+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number(alphabet[RLo[i]+""])+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number((alphabet[R1[i]+""]+alphabet[key2[i]+""])%36)+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+QString::number((alphabet[Ro[i]+""]+alphabet[RLo[i]+""])%36)+"\";";
        }

        ts<<"\"\"\n";
        for(int i=0;i<4;i++){
          ts<<"\""+NumbersAlphabet[(alphabet[R1[i]+""]+alphabet[key2[i]+""])%36]+"\";";
        }
        ts<<"\"\";";
        for(int i=0;i<4;i++){
          ts<<"\""+NumbersAlphabet[(alphabet[Ro[i]+""]+alphabet[RLo[i]+""])%36]+"\";";
        }
        ts<<"\"\"\n";
        ts<<"\"\"\n";

      KolBloks++;
    }
    /*ts<<";;;;;;;;;\"Result=""\";";
    for(int i=0;i<Result.length();i++){
        //if(i%5==0&&i!=0){
         //   ts<<";";
        //}
        ts<<Result[i];
    }*/

    f.close();

}