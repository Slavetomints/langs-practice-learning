# frozen_string_literal: true

module Chess
  class Pawn < Piece
    def initialize(color, starting_square)
      super
      @first_move = true
      @icon = '♙'.colorize(:color)
    end
  end
end
