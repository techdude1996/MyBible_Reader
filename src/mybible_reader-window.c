/* mybible_reader-window.c
 *
 * Copyright 2018 Ethan Snyder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mybible_reader-config.h"
#include "mybible_reader-window.h"

struct _Mybible_readerWindow
{
    GtkApplicationWindow  parent_instance;

    /* Template widgets */
    GtkHeaderBar        *header_bar;
    GtkLabel            *label;
};

G_DEFINE_TYPE (Mybible_readerWindow, mybible_reader_window, GTK_TYPE_APPLICATION_WINDOW)

static void mybible_reader_window_class_init (Mybible_readerWindowClass *klass)
{
    GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

    gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/Mybible_Reader/mybible_reader-window.ui");
    gtk_widget_class_bind_template_child (widget_class, Mybible_readerWindow, header_bar);
    gtk_widget_class_bind_template_child (widget_class, Mybible_readerWindow, label);
}

static void
mybible_reader_window_init (Mybible_readerWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
