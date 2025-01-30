# frozen_string_literal: true

require_relative 'lib/player'
require_relative 'lib/board'

class Game
  def initialize
    @white_player = Chess::Player.new(:white)
    @black_player = Chess::Player.new(:black)
    @board = Chess::GamePieces::ChessBoard.new
    @white_pieces = Chess::GamePieces::Pieces.new(:white)
    @black_pieces = Chess::GamePieces::Pieces.new(:black)
    @board.setup_board(@white_pieces, @black_pieces)
  end
end

Game.new
