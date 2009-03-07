
#include <iostream>
#include <gtkmm/main.h>
#include "main-window.hh"

int
main(int argc, char** argv)
{
    Gtk::Main kit(argc, argv);

    MainWindow* main_window = 0;

    main_window = MainWindow::create();

    try {
        if (main_window) kit.run(*main_window); 
        delete main_window;
    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }

    return 0;
}
