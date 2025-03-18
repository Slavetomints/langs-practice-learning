# frozen_string_literal: true

module Chess
  class EmptySquare
    include Locatable
    def initialize(location)
      @location = location
      @icon = '■'.colorize(find_color(location))
    end
  end
end
