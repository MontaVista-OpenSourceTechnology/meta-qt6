QT_LTS_GIT ?= "git://codereview.qt-project.org"
QT_LTS_GIT_PROTOCOL ?= "ssh"
QT_LTS_MODULE_REPO ?= "tqtc-${QT_MODULE}.git"
QT_LTS_MODULE_BRANCH := "tqtc/lts-${QT_MODULE_BRANCH}"

QT_GIT = "${QT_LTS_GIT}"
QT_GIT_PROTOCOL = "${QT_LTS_GIT_PROTOCOL}"
QT_MODULE_REPO = "${QT_LTS_MODULE_REPO}"
QT_MODULE_BRANCH = "${QT_LTS_MODULE_BRANCH}"