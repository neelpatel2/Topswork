# Q.7 Explain what does django-admin.py make messages command is used for?
"""
The django-admin.py makemessages command is used to extract translatable strings from your Django application and prepare message files for localization (i.e., translating the app into different languages).

Purpose of makemessages:
In Django, if you want to support multiple languages in your application, you can mark strings for translation using the gettext function or
the _() shorthand. The makemessages command scans the source code for such translatable strings and generates .po files, which contain the 
original strings and their translations.

"""
