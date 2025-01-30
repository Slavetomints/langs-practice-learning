# frozen_string_literal: true

module Chess
  module GamePieces
    class Pieces
      attr_accessor :queen, :king,
                    :rook1, :rook2,
                    :bishop1, :bishop2,
                    :pawn1, :pawn2,
                    :pawn3, :pawn4,
                    :pawn5, :pawn6,
                    :pawn7, :pawn8

      def initialize(_color)
        @queen = Chess::GamePieces::Queen.new(:color)
        @king = Chess::GamePieces::King.new(:color)
        @rook1 = Chess::GamePieces::Rook.new(:color)
        @rook2 = Chess::GamePieces::Rook.new(:color)
        @bishop1 = Chess::GamePieces::Bishop.new(:color)
        @bishop2 = Chess::GamePieces::Bishop.new(:color)
        @knight1 = Chess::GamePieces::Knight.new(:color)
        @knight2 = Chess::GamePieces::Knight.new(:color)
        @pawn1 = Chess::GamePieces::Pawn.new(:color)
        @pawn2 = Chess::GamePieces::Pawn.new(:color)
        @pawn3 = Chess::GamePieces::Pawn.new(:color)
        @pawn4 = Chess::GamePieces::Pawn.new(:color)
        @pawn5 = Chess::GamePieces::Pawn.new(:color)
        @pawn6 = Chess::GamePieces::Pawn.new(:color)
        @pawn7 = Chess::GamePieces::Pawn.new(:color)
        @pawn8 = Chess::GamePieces::Pawn.new(:color)
      end
    end
  end
end
