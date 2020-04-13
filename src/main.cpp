// #include "mainWindow.h"
// #include "plugins.h"
// #include "quietJob.h"

bool IsQuiet(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		QString arg = argv[i];	
		if (arg.toLower() == "\\q" || arg.toLower() == "\\arch")
			return true;
	}
	return false;
}

int main(int argc, char *argv[])
{
	// VEGA_ADD_QTPLUGINS_PATH(argv[0]);

	// QApplication app(argc, argv);

	// if (IsQuiet(argc, argv))
	// {
		// QuietJob* job = new QuietJob(argc, argv);
		// job->Init();
		// if (!IsExistSystemXml())
		// {
			// job->ErrorLog(0, u8"Отсутствуют файлы конфигурации");
			// job->Close();
			// return 800;
		// }

		// job->Run();
		// job->Close();

		// if (job->IsError())
			// return 1;
	// }
	// else
	// {
		// app.setStyle(QStyleFactory::create("Vega"));
		
		// VEGA_LOAD_QTTRANSLATION(app);

		// if (!IsExistSystemXml())
		// {
			// QMessageBox msgBox(QMessageBox::Critical, u8"Отсутствуют файлы конфигурации", u8"Ошибка загрузки файлов конфигурации.", QMessageBox::Ok);
			// msgBox.exec();
			// return 800;
		// }
		
		// TreeModel model;
		// model.scanDir();
		// MainWindow wnd(&model, argc, argv);
		// wnd.show();

		// return app.exec();
	// }
	return 0;
}