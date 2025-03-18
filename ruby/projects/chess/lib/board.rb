# frozen_string_literal: true

require_relative 'piece'
require_relative 'bishop'
require_relative 'king'
require_relative 'knight'
require_relative 'pawn'
require_relative 'queen'
require_relative 'rook'

module Chess
  class ChessBoard
    def initialize
      @board = Array.new(8, Array.new(8))
      setup_board
      print_board
    end

    def setup_board
      @board = [[Rook.new(:green, 'A1'), Knight.new(:green, 'A2'), Bishop.new(:green, 'A3'), Queen.new(:green, 'A4'), King.new(:green, 'A5'), Bishop.new(:green, 'A6'), Knight.new(:green, 'A7'), Rook.new(:green, 'A8')],
                [nil, nil, nil, nil, nil, nil, nil, nil],
                [nil, nil, nil, nil, nil, nil, nil, nil],
                [nil, nil, nil, nil, nil, nil, nil, nil],
                [nil, nil, nil, nil, nil, nil, nil, nil],
                [nil, nil, nil, nil, nil, nil, nil, nil],
                [nil, nil, nil, nil, nil, nil, nil, nil],
                [nil, nil, nil, nil, nil, nil, nil, nil]]
    end

    def print_board
      @board.each do |row|
        row.each(&:puts)
      end
    end
  end
end
