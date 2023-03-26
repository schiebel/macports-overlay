
This repository is my overlay for `MacPorts <https://www.macports.org/>`_ which is used to customize my MacPorts Portfile distribution by checking out this repository as :code:`/opt/local/ports` and configuring the sources like::

    bash-3.2$ cat /opt/local/etc/macports/sources.conf
    file:///opt/local/ports [nosync]
    rsync://rsync.macports.org/release/ports [default]
    bash-3.2$

This is just my personal development sandbox so unfortunately, it is **incomplete**, **out of date**, and likely **broken**... so caveat emptor.
