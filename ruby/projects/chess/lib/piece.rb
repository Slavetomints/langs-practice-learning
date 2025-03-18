# frozen_string_literal: true

require_relative 'locatable'

module Chess
  class Piece
    include Locatable
    def initialize(color, starting_square)
      @color = color
      @location = starting_square
      @icon = "■".colorize(find_color(@location))
    end

    def puts
      if @location[1] == '8'
        puts @icon
      else
        print @icon
      end
    end
  end
end
