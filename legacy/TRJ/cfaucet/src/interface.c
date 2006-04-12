/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gnome.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

GtkWidget*
create_aboutbox ()
{
  const gchar *authors[] = {
    "Glyph Lefkowitz <glyph@twistedmatrix.com>",
    NULL
  };
  GtkWidget *aboutbox;

  aboutbox = gnome_about_new ("GTKFaucet", VERSION,
                        _("(c) Twisted Matrix Enterprises 1999"),
                        authors,
                        _("This is the GNOME-ized version of the Twisted Reality project."),
                        "gtkfaucet/faucet.gif");
  gtk_widget_set_name (aboutbox, "aboutbox");
  gtk_object_set_data (GTK_OBJECT (aboutbox), "aboutbox", aboutbox);
  gtk_window_set_modal (GTK_WINDOW (aboutbox), TRUE);
  gtk_window_set_wmclass (GTK_WINDOW (aboutbox), "GTKFaucet", "GTKFaucet");

  return aboutbox;
}

GtkWidget*
create_gamewindow ()
{
  GtkWidget *gamewindow;
  GtkWidget *vbox1;
  GtkWidget *NameLabel;
  GtkWidget *vpaned1;
  GtkWidget *hpaned1;
  GtkWidget *scrolledwindow1;
  GtkWidget *description_field;
  GtkWidget *scrolledwindow2;
  GtkWidget *items_field;
  GtkWidget *scrolledwindow3;
  GtkWidget *happenings_field;
  GtkWidget *CommandPanel;

  gamewindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (gamewindow, "gamewindow");
  gtk_object_set_data (GTK_OBJECT (gamewindow), "gamewindow", gamewindow);
  gtk_window_set_title (GTK_WINDOW (gamewindow), _("Reality Faucet"));
  gtk_window_set_position (GTK_WINDOW (gamewindow), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size (GTK_WINDOW (gamewindow), 640, 480);
  gtk_window_set_policy (GTK_WINDOW (gamewindow), TRUE, TRUE, FALSE);
  gtk_window_set_wmclass (GTK_WINDOW (gamewindow), "Reality", "Reality");

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_ref (vbox1);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "vbox1", vbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (gamewindow), vbox1);

  NameLabel = gtk_label_new (_("NameLabel"));
  gtk_widget_set_name (NameLabel, "NameLabel");
  gtk_widget_ref (NameLabel);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "NameLabel", NameLabel,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (NameLabel);
  gtk_box_pack_start (GTK_BOX (vbox1), NameLabel, FALSE, FALSE, 0);

  vpaned1 = gtk_vpaned_new ();
  gtk_widget_set_name (vpaned1, "vpaned1");
  gtk_widget_ref (vpaned1);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "vpaned1", vpaned1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vpaned1);
  gtk_box_pack_start (GTK_BOX (vbox1), vpaned1, TRUE, TRUE, 0);

  hpaned1 = gtk_hpaned_new ();
  gtk_widget_set_name (hpaned1, "hpaned1");
  gtk_widget_ref (hpaned1);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "hpaned1", hpaned1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hpaned1);
  gtk_container_add (GTK_CONTAINER (vpaned1), hpaned1);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow1, "scrolledwindow1");
  gtk_widget_ref (scrolledwindow1);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "scrolledwindow1", scrolledwindow1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow1);
  gtk_container_add (GTK_CONTAINER (hpaned1), scrolledwindow1);
  gtk_widget_set_usize (scrolledwindow1, 370, 255);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  description_field = gtk_text_new (NULL, NULL);
  gtk_widget_set_name (description_field, "description_field");
  gtk_widget_ref (description_field);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "description_field", description_field,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (description_field);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), description_field);
  GTK_WIDGET_UNSET_FLAGS (description_field, GTK_CAN_FOCUS);
  gtk_widget_realize (description_field);
  gtk_text_insert (GTK_TEXT (description_field), NULL, NULL, NULL,
                   _("Description Not Updated!"), 24);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow2, "scrolledwindow2");
  gtk_widget_ref (scrolledwindow2);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "scrolledwindow2", scrolledwindow2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow2);
  gtk_container_add (GTK_CONTAINER (hpaned1), scrolledwindow2);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow2), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  items_field = gtk_text_new (NULL, NULL);
  gtk_widget_set_name (items_field, "items_field");
  gtk_widget_ref (items_field);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "items_field", items_field,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (items_field);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), items_field);
  GTK_WIDGET_UNSET_FLAGS (items_field, GTK_CAN_FOCUS);
  gtk_widget_realize (items_field);
  gtk_text_insert (GTK_TEXT (items_field), NULL, NULL, NULL,
                   _("ItemList Not Updated!"), 21);

  scrolledwindow3 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (scrolledwindow3, "scrolledwindow3");
  gtk_widget_ref (scrolledwindow3);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "scrolledwindow3", scrolledwindow3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow3);
  gtk_container_add (GTK_CONTAINER (vpaned1), scrolledwindow3);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow3), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  happenings_field = gtk_text_new (NULL, NULL);
  gtk_widget_set_name (happenings_field, "happenings_field");
  gtk_widget_ref (happenings_field);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "happenings_field", happenings_field,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (happenings_field);
  gtk_container_add (GTK_CONTAINER (scrolledwindow3), happenings_field);
  GTK_WIDGET_UNSET_FLAGS (happenings_field, GTK_CAN_FOCUS);
  gtk_widget_realize (happenings_field);
  gtk_text_insert (GTK_TEXT (happenings_field), NULL, NULL, NULL,
                   _("Reality Faucet 1.1.2 Protocol V3"), 32);

  CommandPanel = gtk_entry_new ();
  gtk_widget_set_name (CommandPanel, "CommandPanel");
  gtk_widget_ref (CommandPanel);
  gtk_object_set_data_full (GTK_OBJECT (gamewindow), "CommandPanel", CommandPanel,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (CommandPanel);
  gtk_box_pack_start (GTK_BOX (vbox1), CommandPanel, FALSE, FALSE, 0);

  gtk_signal_connect (GTK_OBJECT (gamewindow), "delete_event",
                      GTK_SIGNAL_FUNC (on_gamewindow_delete_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CommandPanel), "key_press_event",
                      GTK_SIGNAL_FUNC (on_CommandPanel_key_press_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (CommandPanel), "activate",
                      GTK_SIGNAL_FUNC (on_CommandPanel_activate),
                      NULL);

  gtk_widget_grab_focus (CommandPanel);
  return gamewindow;
}

GtkWidget*
create_loginwindow ()
{
  GtkWidget *loginwindow;
  GtkWidget *vbox2;
  GtkWidget *versetc;
  GtkWidget *table1;
  GtkWidget *chrnm;
  GtkWidget *pwd;
  GtkWidget *hstnm;
  GtkWidget *charname_entry;
  GtkWidget *pw_entry;
  GtkWidget *hostname_entry;
  GtkWidget *login_progress;
  GtkWidget *hbuttonbox1;
  GtkWidget *engageButton;

  loginwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (loginwindow, "loginwindow");
  gtk_object_set_data (GTK_OBJECT (loginwindow), "loginwindow", loginwindow);
  gtk_window_set_title (GTK_WINDOW (loginwindow), _("Reality Login"));
  gtk_window_set_position (GTK_WINDOW (loginwindow), GTK_WIN_POS_CENTER);
  gtk_window_set_policy (GTK_WINDOW (loginwindow), FALSE, FALSE, TRUE);
  gtk_window_set_wmclass (GTK_WINDOW (loginwindow), "Reality", "Reality");

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox2, "vbox2");
  gtk_widget_ref (vbox2);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "vbox2", vbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (loginwindow), vbox2);

  versetc = gtk_label_new (_("GTK Faucet 1.1.2\nProtocol V3"));
  gtk_widget_set_name (versetc, "versetc");
  gtk_widget_ref (versetc);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "versetc", versetc,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (versetc);
  gtk_box_pack_start (GTK_BOX (vbox2), versetc, FALSE, FALSE, 0);

  table1 = gtk_table_new (3, 2, FALSE);
  gtk_widget_set_name (table1, "table1");
  gtk_widget_ref (table1);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "table1", table1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox2), table1, TRUE, TRUE, 0);

  chrnm = gtk_label_new (_("Character Name:"));
  gtk_widget_set_name (chrnm, "chrnm");
  gtk_widget_ref (chrnm);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "chrnm", chrnm,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (chrnm);
  gtk_table_attach (GTK_TABLE (table1), chrnm, 0, 1, 0, 1,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (chrnm), GTK_JUSTIFY_RIGHT);

  pwd = gtk_label_new (_("Password:"));
  gtk_widget_set_name (pwd, "pwd");
  gtk_widget_ref (pwd);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "pwd", pwd,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pwd);
  gtk_table_attach (GTK_TABLE (table1), pwd, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (pwd), GTK_JUSTIFY_RIGHT);

  hstnm = gtk_label_new (_("Hostname:"));
  gtk_widget_set_name (hstnm, "hstnm");
  gtk_widget_ref (hstnm);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "hstnm", hstnm,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hstnm);
  gtk_table_attach (GTK_TABLE (table1), hstnm, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (hstnm), GTK_JUSTIFY_RIGHT);

  charname_entry = gtk_entry_new ();
  gtk_widget_set_name (charname_entry, "charname_entry");
  gtk_widget_ref (charname_entry);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "charname_entry", charname_entry,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (charname_entry);
  gtk_table_attach (GTK_TABLE (table1), charname_entry, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  pw_entry = gtk_entry_new ();
  gtk_widget_set_name (pw_entry, "pw_entry");
  gtk_widget_ref (pw_entry);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "pw_entry", pw_entry,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pw_entry);
  gtk_table_attach (GTK_TABLE (table1), pw_entry, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_visibility (GTK_ENTRY (pw_entry), FALSE);

  hostname_entry = gtk_entry_new ();
  gtk_widget_set_name (hostname_entry, "hostname_entry");
  gtk_widget_ref (hostname_entry);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "hostname_entry", hostname_entry,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hostname_entry);
  gtk_table_attach (GTK_TABLE (table1), hostname_entry, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_entry_set_text (GTK_ENTRY (hostname_entry), _("reality.divunal.com"));

  login_progress = gtk_progress_bar_new ();
  gtk_widget_set_name (login_progress, "login_progress");
  gtk_widget_ref (login_progress);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "login_progress", login_progress,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (login_progress);
  gtk_box_pack_start (GTK_BOX (vbox2), login_progress, FALSE, FALSE, 0);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_set_name (hbuttonbox1, "hbuttonbox1");
  gtk_widget_ref (hbuttonbox1);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "hbuttonbox1", hbuttonbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox2), hbuttonbox1, TRUE, TRUE, 0);

  engageButton = gnome_stock_button (GNOME_STOCK_BUTTON_OK);
  gtk_widget_set_name (engageButton, "engageButton");
  gtk_widget_ref (engageButton);
  gtk_object_set_data_full (GTK_OBJECT (loginwindow), "engageButton", engageButton,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (engageButton);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), engageButton);
  GTK_WIDGET_SET_FLAGS (engageButton, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (loginwindow), "delete_event",
                      GTK_SIGNAL_FUNC (on_loginwindow_delete_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (loginwindow), "destroy_event",
                      GTK_SIGNAL_FUNC (on_loginwindow_destroy_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (loginwindow), "destroy",
                      GTK_SIGNAL_FUNC (on_loginwindow_destroy),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (charname_entry), "activate",
                      GTK_SIGNAL_FUNC (on_charname_entry_activate),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (pw_entry), "activate",
                      GTK_SIGNAL_FUNC (on_pw_entry_activate),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (engageButton), "clicked",
                      GTK_SIGNAL_FUNC (on_engageButton_clicked),
                      NULL);

  gtk_widget_grab_focus (charname_entry);
  gtk_widget_grab_default (engageButton);
  return loginwindow;
}

GtkWidget*
create_answerdialog ()
{
  GtkWidget *answerdialog;
  GtkWidget *vbox3;
  GtkWidget *tarea_scrollwindow;
  GtkWidget *tarea;
  GtkWidget *hbuttonbox2;
  GtkWidget *answerdialog_ok;

  answerdialog = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (answerdialog, "answerdialog");
  gtk_object_set_data (GTK_OBJECT (answerdialog), "answerdialog", answerdialog);
  gtk_window_set_title (GTK_WINDOW (answerdialog), _("Reality Message"));
  gtk_window_set_default_size (GTK_WINDOW (answerdialog), 240, 150);
  gtk_window_set_policy (GTK_WINDOW (answerdialog), FALSE, FALSE, FALSE);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox3, "vbox3");
  gtk_widget_ref (vbox3);
  gtk_object_set_data_full (GTK_OBJECT (answerdialog), "vbox3", vbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (answerdialog), vbox3);

  tarea_scrollwindow = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (tarea_scrollwindow, "tarea_scrollwindow");
  gtk_widget_ref (tarea_scrollwindow);
  gtk_object_set_data_full (GTK_OBJECT (answerdialog), "tarea_scrollwindow", tarea_scrollwindow,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (tarea_scrollwindow);
  gtk_box_pack_start (GTK_BOX (vbox3), tarea_scrollwindow, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (tarea_scrollwindow), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  tarea = gtk_text_new (NULL, NULL);
  gtk_widget_set_name (tarea, "tarea");
  gtk_widget_ref (tarea);
  gtk_object_set_data_full (GTK_OBJECT (answerdialog), "tarea", tarea,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (tarea);
  gtk_container_add (GTK_CONTAINER (tarea_scrollwindow), tarea);
  gtk_widget_realize (tarea);
  gtk_text_insert (GTK_TEXT (tarea), NULL, NULL, NULL,
                   _("This is a generic error message."), 32);

  hbuttonbox2 = gtk_hbutton_box_new ();
  gtk_widget_set_name (hbuttonbox2, "hbuttonbox2");
  gtk_widget_ref (hbuttonbox2);
  gtk_object_set_data_full (GTK_OBJECT (answerdialog), "hbuttonbox2", hbuttonbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox2);
  gtk_box_pack_start (GTK_BOX (vbox3), hbuttonbox2, FALSE, TRUE, 0);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (hbuttonbox2), 20);
  gtk_button_box_set_child_size (GTK_BUTTON_BOX (hbuttonbox2), 85, 24);

  answerdialog_ok = gnome_stock_button (GNOME_STOCK_BUTTON_OK);
  gtk_widget_set_name (answerdialog_ok, "answerdialog_ok");
  gtk_widget_ref (answerdialog_ok);
  gtk_object_set_data_full (GTK_OBJECT (answerdialog), "answerdialog_ok", answerdialog_ok,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (answerdialog_ok);
  gtk_container_add (GTK_CONTAINER (hbuttonbox2), answerdialog_ok);
  GTK_WIDGET_SET_FLAGS (answerdialog_ok, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (answerdialog_ok), "clicked",
                      GTK_SIGNAL_FUNC (on_answerdialog_ok_clicked),
                      NULL);

  return answerdialog;
}

GtkWidget*
create_responsewindow ()
{
  GtkWidget *responsewindow;
  GtkWidget *vbox5;
  GtkWidget *descriptive_text_scrollwindow;
  GtkWidget *descriptive_text;
  GtkWidget *hbuttonbox3;
  GtkWidget *ok_button;
  GtkWidget *notok_button;

  responsewindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (responsewindow, "responsewindow");
  gtk_object_set_data (GTK_OBJECT (responsewindow), "responsewindow", responsewindow);
  gtk_window_set_title (GTK_WINDOW (responsewindow), _("Unnamed Response Window"));

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox5, "vbox5");
  gtk_widget_ref (vbox5);
  gtk_object_set_data_full (GTK_OBJECT (responsewindow), "vbox5", vbox5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (responsewindow), vbox5);

  descriptive_text_scrollwindow = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_set_name (descriptive_text_scrollwindow, "descriptive_text_scrollwindow");
  gtk_widget_ref (descriptive_text_scrollwindow);
  gtk_object_set_data_full (GTK_OBJECT (responsewindow), "descriptive_text_scrollwindow", descriptive_text_scrollwindow,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (descriptive_text_scrollwindow);
  gtk_box_pack_start (GTK_BOX (vbox5), descriptive_text_scrollwindow, TRUE, TRUE, 0);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (descriptive_text_scrollwindow), GTK_POLICY_NEVER, GTK_POLICY_ALWAYS);

  descriptive_text = gtk_text_new (NULL, NULL);
  gtk_widget_set_name (descriptive_text, "descriptive_text");
  gtk_widget_ref (descriptive_text);
  gtk_object_set_data_full (GTK_OBJECT (responsewindow), "descriptive_text", descriptive_text,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (descriptive_text);
  gtk_container_add (GTK_CONTAINER (descriptive_text_scrollwindow), descriptive_text);
  gtk_text_set_editable (GTK_TEXT (descriptive_text), TRUE);

  hbuttonbox3 = gtk_hbutton_box_new ();
  gtk_widget_set_name (hbuttonbox3, "hbuttonbox3");
  gtk_widget_ref (hbuttonbox3);
  gtk_object_set_data_full (GTK_OBJECT (responsewindow), "hbuttonbox3", hbuttonbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox3);
  gtk_box_pack_start (GTK_BOX (vbox5), hbuttonbox3, FALSE, TRUE, 0);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox3), GTK_BUTTONBOX_SPREAD);

  ok_button = gnome_stock_button (GNOME_STOCK_BUTTON_OK);
  gtk_widget_set_name (ok_button, "ok_button");
  gtk_widget_ref (ok_button);
  gtk_object_set_data_full (GTK_OBJECT (responsewindow), "ok_button", ok_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox3), ok_button);
  GTK_WIDGET_SET_FLAGS (ok_button, GTK_CAN_DEFAULT);

  notok_button = gnome_stock_button (GNOME_STOCK_BUTTON_CANCEL);
  gtk_widget_set_name (notok_button, "notok_button");
  gtk_widget_ref (notok_button);
  gtk_object_set_data_full (GTK_OBJECT (responsewindow), "notok_button", notok_button,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (notok_button);
  gtk_container_add (GTK_CONTAINER (hbuttonbox3), notok_button);
  GTK_WIDGET_SET_FLAGS (notok_button, GTK_CAN_DEFAULT);

  gtk_signal_connect (GTK_OBJECT (ok_button), "clicked",
                      GTK_SIGNAL_FUNC (on_ok_button_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (notok_button), "clicked",
                      GTK_SIGNAL_FUNC (on_notok_button_clicked),
                      NULL);

  return responsewindow;
}

