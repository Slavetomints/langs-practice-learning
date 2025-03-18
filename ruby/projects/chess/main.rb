# frozen_string_literal: true

require_relative 'lib/player'
require_relative 'lib/board'

require 'colorize'

class Game
  def initialize
    @white_player = Chess::Player.new(:white)
    @black_player = Chess::Player.new(:black)
    @board = Chess::ChessBoard.new
    @board.setup_board
  end
end

Game.new
