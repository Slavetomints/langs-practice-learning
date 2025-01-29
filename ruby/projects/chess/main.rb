require_relative 'lib/player'
require_relative 'lib/board'

class Game
  def initialize
    @white_player = Chess::Player.new(:white)
    @black_player = Chess::Player.new(:black)
    @board = Chess::ChessBoard.new
  end
end

Game.new