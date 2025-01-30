# frozen_string_literal: true

module Chess
  module GamePieces
    class ChessBoard
      def initialize
        @board = Array.new(8, Array.new(8))
        setup_board
        print_board
      end

      def setup_board(white_pieces, black_pieces)
        @board = [[black_pieces.rook1, black_pieces.knight1, black_pieces.bishop1, black_pieces.queen, black_pieces.king, black_pieces.bishop2, black_pieces.knight2, black_pieces.rook2],
                  [black_pieces.pawn1, black_pieces.pawn2, black_pieces.pawn3, black_pieces.pawn4, black_pieces.pawn5, black_pieces.pawn6, black_pieces.pawn7, black_pieces.pawn8],
                  [nil, nil, nil, nil, nil, nil, nil, nil],
                  [nil, nil, nil, nil, nil, nil, nil, nil],
                  [nil, nil, nil, nil, nil, nil, nil, nil],
                  [nil, nil, nil, nil, nil, nil, nil, nil],
                  [white_pieces.pawn1, white_pieces.pawn2, white_pieces.pawn3, white_pieces.pawn4, white_pieces.pawn5, white_pieces.pawn6, white_pieces.pawn7, white_pieces.pawn8],
                  [white_pieces.rook1, white_pieces.knight1, white_pieces.bishop1, white_pieces.queen, white_pieces.king, white_pieces.bishop2, white_pieces.knight2, white_pieces.rook2]]
      end

      def print_board
        @board.each do |row|
          print "#{row}\n"
        end
      end
    end
  end
end
