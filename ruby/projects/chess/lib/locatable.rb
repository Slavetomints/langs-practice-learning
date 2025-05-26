# frozen_string_literal: true

module Locatable
  def find_color(location_arr)
    if %w[1 3 5 7].include?(location_arr[1])
      if %w[A C E G].include?(location_arr[0])
        :green
      else
        :red
      end
    elsif %w[A C E G].include?(location_arr[0])
      :red
    else
      :green
    end
  end
end
