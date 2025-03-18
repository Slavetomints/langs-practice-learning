# frozen_string_literal: true

module Chess
  class King < Piece
    def initialize(color, starting_square)
      super
      @icon = '♔'.colorize(:color)
    end
  end
end
