def make_album(artist_name, album_title, number_of_songs=None):
    """Make dictionary based on album information"""
    if number_of_songs:
        album = {
            'name': artist_name.title(), 
            'title': album_title.title(), 
            'number of songs': number_of_songs
            }
    else:
        album = {
            'name': artist_name.title(), 
            'title': album_title.title()
            }
    return album

album = make_album('sabaton', 'the last stand',)
print(album)
album = make_album('scissor sisters', 'ta-dah')
print(album)
album = make_album('tom cardy', 'big dumb idiot', '12')
print(album)