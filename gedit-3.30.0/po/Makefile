# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2004-2008 Rodney Dawes <dobey.pwns@gmail.com>
#
# This file may be copied and used freely without restrictions.  It may
# be used in projects which are not available under a GNU Public License,
# but which still want to provide support for the GNU gettext functionality.
#
# - Modified by Owen Taylor <otaylor@redhat.com> to use GETTEXT_PACKAGE
#   instead of PACKAGE and to look for po2tbl in ./ not in intl/
#
# - Modified by jacob berkman <jacob@ximian.com> to install
#   Makefile.in.in and po2tbl.sed.in for use with glib-gettextize
#
# - Modified by Rodney Dawes <dobey.pwns@gmail.com> for use with intltool
#
# We have the following line for use by intltoolize:
# INTLTOOL_MAKEFILE

GETTEXT_PACKAGE = gedit
PACKAGE = gedit
VERSION = 3.30.0

SHELL = /bin/bash

srcdir = .
top_srcdir = ..
top_builddir = ..


prefix = /usr/local
exec_prefix = ${prefix}
datadir = ${datarootdir}
datarootdir = ${prefix}/share
libdir = ${exec_prefix}/lib
localedir = ${datarootdir}/locale
subdir = po
install_sh = ${SHELL} /home/suraj/Downloads/sourceCode/gedit-3.30.0/install-sh
# Automake >= 1.8 provides /usr/bin/mkdir -p.
# Until it can be supposed, use the safe fallback:
mkdir_p = $(install_sh) -d

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

GMSGFMT = /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
INTLTOOL_UPDATE = /usr/bin/intltool-update
INTLTOOL_EXTRACT = /usr/bin/intltool-extract
MSGMERGE = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --dist
GENPOT   = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --pot

ALL_LINGUAS = 

PO_LINGUAS=$(shell if test -r $(srcdir)/LINGUAS; then grep -v "^\#" $(srcdir)/LINGUAS; else echo "$(ALL_LINGUAS)"; fi)

USER_LINGUAS=$(shell if test -n "$(LINGUAS)"; then LLINGUAS="$(LINGUAS)"; ALINGUAS="$(ALL_LINGUAS)"; for lang in $$LLINGUAS; do if test -n "`grep \^$$lang$$ $(srcdir)/LINGUAS 2>/dev/null`" -o -n "`echo $$ALINGUAS|tr ' ' '\n'|grep \^$$lang$$`"; then printf "$$lang "; fi; done; fi)

USE_LINGUAS=$(shell if test -n "$(USER_LINGUAS)" -o -n "$(LINGUAS)"; then LLINGUAS="$(USER_LINGUAS)"; else if test -n "$(PO_LINGUAS)"; then LLINGUAS="$(PO_LINGUAS)"; else LLINGUAS="$(ALL_LINGUAS)"; fi; fi; for lang in $$LLINGUAS; do printf "$$lang "; done)

POFILES=$(shell LINGUAS="$(PO_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.po "; done)

DISTFILES = Makefile.in.in POTFILES.in $(POFILES)
EXTRA_DISTFILES = ChangeLog POTFILES.skip Makevars LINGUAS

POTFILES = \
	../data/org.gnome.gedit.appdata.xml.in \
	../data/org.gnome.gedit.desktop.in.in \
	../data/org.gnome.gedit.gschema.xml.in \
	../gedit/gedit-app.c \
	../gedit/gedit-app-osx.c \
	../gedit/gedit.c \
	../gedit/gedit-close-confirmation-dialog.c \
	../gedit/gedit-commands-file.c \
	../gedit/gedit-commands-help.c \
	../gedit/gedit-commands-search.c \
	../gedit/gedit-debug.c \
	../gedit/gedit-document.c \
	../gedit/gedit-documents-panel.c \
	../gedit/gedit-encodings-combo-box.c \
	../gedit/gedit-encoding-items.c \
	../gedit/gedit-encodings-dialog.c \
	../gedit/gedit-file-chooser-dialog-gtk.c \
	../gedit/gedit-file-chooser-dialog-osx.c \
	../gedit/gedit-highlight-mode-dialog.c \
	../gedit/gedit-highlight-mode-selector.c \
	../gedit/gedit-io-error-info-bar.c \
	../gedit/gedit-notebook.c \
	../gedit/gedit-notebook-popup-menu.c \
	../gedit/gedit-open-document-selector.c \
	../gedit/gedit-plugins-engine.c \
	../gedit/gedit-preferences-dialog.c \
	../gedit/gedit-print-job.c \
	../gedit/gedit-print-preview.c \
	../gedit/gedit-progress-info-bar.c \
	../gedit/gedit-replace-dialog.c \
	../gedit/gedit-statusbar.c \
	../gedit/gedit-tab.c \
	../gedit/gedit-tab-label.c \
	../gedit/gedit-utils.c \
	../gedit/gedit-view.c \
	../gedit/gedit-view-frame.c \
	../gedit/gedit-window.c \
	../gedit/resources/gtk/menus-common.ui \
	../gedit/resources/gtk/menus.ui \
	../gedit/resources/gtk/menus-traditional.ui \
	../gedit/resources/ui/gedit-encodings-dialog.ui \
	../gedit/resources/ui/gedit-highlight-mode-dialog.ui \
	../gedit/resources/ui/gedit-highlight-mode-selector.ui \
	../gedit/resources/ui/gedit-open-document-selector.ui \
	../gedit/resources/ui/gedit-preferences-dialog.ui \
	../gedit/resources/ui/gedit-print-preferences.ui \
	../gedit/resources/ui/gedit-print-preview.ui \
	../gedit/resources/ui/gedit-replace-dialog.ui \
	../gedit/resources/ui/gedit-shortcuts.ui \
	../gedit/resources/ui/gedit-tab-label.ui \
	../gedit/resources/ui/gedit-window.ui \
	../plugins/checkupdate/checkupdate.plugin.desktop.in \
	../plugins/checkupdate/gedit-check-update-plugin.c \
	../plugins/checkupdate/org.gnome.gedit.plugins.checkupdate.gschema.xml.in \
	../plugins/docinfo/docinfo.plugin.desktop.in \
	../plugins/docinfo/gedit-docinfo-plugin.c \
	../plugins/docinfo/resources/ui/gedit-docinfo-plugin.ui \
	../plugins/externaltools/data/build.desktop.in \
	../plugins/externaltools/data/open-terminal-here.desktop.in \
	../plugins/externaltools/data/open-terminal-here-osx.desktop.in \
	../plugins/externaltools/data/remove-trailing-spaces.desktop.in \
	../plugins/externaltools/data/run-command.desktop.in \
	../plugins/externaltools/data/send-to-fpaste.desktop.in \
	../plugins/externaltools/externaltools.plugin.desktop.in \
	../plugins/externaltools/org.gnome.gedit.plugins.externaltools.gschema.xml.in \
	../plugins/externaltools/tools/appactivatable.py \
	../plugins/externaltools/tools/capture.py \
	../plugins/externaltools/tools/functions.py \
	../plugins/externaltools/tools/__init__.py \
	../plugins/externaltools/tools/manager.py \
	../plugins/externaltools/tools/outputpanel.py \
	../plugins/externaltools/tools/outputpanel.ui \
	../plugins/externaltools/tools/tools.ui \
	../plugins/externaltools/tools/windowactivatable.py \
	../plugins/filebrowser/filebrowser.plugin.desktop.in \
	../plugins/filebrowser/gedit-file-bookmarks-store.c \
	../plugins/filebrowser/gedit-file-browser-plugin.c \
	../plugins/filebrowser/gedit-file-browser-store.c \
	../plugins/filebrowser/gedit-file-browser-utils.c \
	../plugins/filebrowser/gedit-file-browser-view.c \
	../plugins/filebrowser/gedit-file-browser-widget.c \
	../plugins/filebrowser/org.gnome.gedit.plugins.filebrowser.gschema.xml.in \
	../plugins/filebrowser/resources/ui/gedit-file-browser-menus.ui \
	../plugins/filebrowser/resources/ui/gedit-file-browser-widget.ui \
	../plugins/modelines/modelines.plugin.desktop.in \
	../plugins/pythonconsole/org.gnome.gedit.plugins.pythonconsole.gschema.xml.in \
	../plugins/pythonconsole/pythonconsole/config.ui \
	../plugins/pythonconsole/pythonconsole/__init__.py \
	../plugins/pythonconsole/pythonconsole.plugin.desktop.in \
	../plugins/quickhighlight/quickhighlight.plugin.desktop.in \
	../plugins/quickopen/quickopen/__init__.py \
	../plugins/quickopen/quickopen.plugin.desktop.in \
	../plugins/quickopen/quickopen/popup.py \
	../plugins/snippets/snippets/appactivatable.py \
	../plugins/snippets/snippets/document.py \
	../plugins/snippets/snippets/exporter.py \
	../plugins/snippets/snippets/importer.py \
	../plugins/snippets/snippets/manager.py \
	../plugins/snippets/snippets/placeholder.py \
	../plugins/snippets/snippets.plugin.desktop.in \
	../plugins/snippets/snippets/snippets.ui \
	../plugins/snippets/snippets/windowactivatable.py \
	../plugins/sort/gedit-sort-plugin.c \
	../plugins/sort/resources/ui/gedit-sort-plugin.ui \
	../plugins/sort/sort.plugin.desktop.in \
	../plugins/spell/gedit-spell-app-activatable.c \
	../plugins/spell/gedit-spell-plugin.c \
	../plugins/spell/spell.plugin.desktop.in \
	../plugins/time/gedit-time-plugin.c \
	../plugins/time/org.gnome.gedit.plugins.time.gschema.xml.in \
	../plugins/time/resources/ui/gedit-time-dialog.ui \
	../plugins/time/resources/ui/gedit-time-setup-dialog.ui \
	../plugins/time/time.plugin.desktop.in

CATALOGS=$(shell LINGUAS="$(USE_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.gmo "; done)

.SUFFIXES:
.SUFFIXES: .po .pox .gmo .mo .msg .cat

AM_DEFAULT_VERBOSITY = 0
INTLTOOL_V_MSGFMT = $(INTLTOOL__v_MSGFMT_$(V))
INTLTOOL__v_MSGFMT_= $(INTLTOOL__v_MSGFMT_$(AM_DEFAULT_VERBOSITY))
INTLTOOL__v_MSGFMT_0 = @echo "  MSGFMT" $@;

.po.pox:
	$(MAKE) $(GETTEXT_PACKAGE).pot
	$(MSGMERGE) $* $(GETTEXT_PACKAGE).pot -o $*.pox

.po.mo:
	$(INTLTOOL_V_MSGFMT)$(MSGFMT) -o $@ $<

.po.gmo:
	$(INTLTOOL_V_MSGFMT)file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && gencat $@ $*.msg


all: all-yes

all-yes: $(CATALOGS)
all-no:

$(GETTEXT_PACKAGE).pot: $(POTFILES)
	$(GENPOT)

install: install-data
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  dir=$(DESTDIR)$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $$dir; \
	  if test -r $$lang.gmo; then \
	    $(INSTALL_DATA) $$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $$lang.gmo as $$dir/$(GETTEXT_PACKAGE).mo"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $(srcdir)/$$lang.gmo as" \
		 "$$dir/$(GETTEXT_PACKAGE).mo"; \
	  fi; \
	  if test -r $$lang.gmo.m; then \
	    $(INSTALL_DATA) $$lang.gmo.m $$dir/$(GETTEXT_PACKAGE).mo.m; \
	    echo "installing $$lang.gmo.m as $$dir/$(GETTEXT_PACKAGE).mo.m"; \
	  else \
	    if test -r $(srcdir)/$$lang.gmo.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$lang.gmo.m \
		$$dir/$(GETTEXT_PACKAGE).mo.m; \
	      echo "installing $(srcdir)/$$lang.gmo.m as" \
		   "$$dir/$(GETTEXT_PACKAGE).mo.m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done

# Empty stubs to satisfy archaic automake needs
dvi info ctags tags CTAGS TAGS ID:

# Define this as empty until I found a useful application.
install-exec installcheck:

uninstall:
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo.m; \
	done

check: all $(GETTEXT_PACKAGE).pot
	rm -f missing notexist
	srcdir=$(srcdir) $(INTLTOOL_UPDATE) -m
	if [ -r missing -o -r notexist ]; then \
	  exit 1; \
	fi

mostlyclean:
	rm -f *.pox $(GETTEXT_PACKAGE).pot *.old.po cat-id-tbl.tmp
	rm -f .intltool-merge-cache

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES stamp-it
	rm -f *.mo *.msg *.cat *.cat.m *.gmo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f Makefile.in.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: $(DISTFILES)
	dists="$(DISTFILES)"; \
	extra_dists="$(EXTRA_DISTFILES)"; \
	for file in $$extra_dists; do \
	  test -f $(srcdir)/$$file && dists="$$dists $(srcdir)/$$file"; \
	done; \
	for file in $$dists; do \
	  test -f $$file || file="$(srcdir)/$$file"; \
	  ln $$file $(distdir) 2> /dev/null \
	    || cp -p $$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(GETTEXT_PACKAGE).pot
	tmpdir=`pwd`; \
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  echo "$$lang:"; \
	  result="`$(MSGMERGE) -o $$tmpdir/$$lang.new.po $$lang`"; \
	  if $$result; then \
	    if cmp $(srcdir)/$$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	      rm -f $$tmpdir/$$lang.new.po; \
            else \
	      if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	        :; \
	      else \
	        echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	        rm -f $$tmpdir/$$lang.new.po; \
	        exit 1; \
	      fi; \
	    fi; \
	  else \
	    echo "msgmerge for $$lang.gmo failed!"; \
	    rm -f $$tmpdir/$$lang.new.po; \
	  fi; \
	done

Makefile POTFILES: stamp-it
	@if test ! -f $@; then \
	  rm -f stamp-it; \
	  $(MAKE) stamp-it; \
	fi

stamp-it: Makefile.in.in $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/Makefile.in CONFIG_HEADERS= CONFIG_LINKS= \
	       $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
