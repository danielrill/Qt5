#include <QMainWindow>

namespace Ui{
class Notepad;
}

class Notepad : public QMainWindow
{
	Q_OBJECT
	
public:
	explizit Notepad(QWidget *parent = nullptr);
	~Notepad();
	
private slots:
	void newDocument();
	
	void open();
	
	void save();
	
	void saveAs();
	
	void print();
	
	void exit();
	
	void copy();
	
	void cut();
	
	void paste();
	
	void undo();
	
	void redo();
	
	void selectFont();
	
	void setFontBold(bool bold);
	
	void setFondUnderline(bool underline);
	
	void setFontItalic(bool italic);
	
	void about();
	
private:
	Ui::Notepad *ui;
	QString currentFile;
};
