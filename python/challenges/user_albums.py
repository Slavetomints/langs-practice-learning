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

while True:
    print('\nPlease add in the required information to add your album')
    print('Enter "q" at any time to quit')

    artist_name = input('\nWhat is the name of the artist? ')
    if artist_name == 'q':
        break    

    album_title = input('\nWhat is the album title? ')
    if album_title == 'q':
        break    
    
    number_of_songs = input('\nHow many songs are in the album? ')
    if number_of_songs == 'q':
        break

    album = make_album(artist_name, album_title, number_of_songs)
    print(album)

