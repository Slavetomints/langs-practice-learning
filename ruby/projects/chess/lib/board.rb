module Chess
  class ChessBoard
    def initialize
      @board = new_board
      puts @board
    end

    def new_board
      Array.new(8, Array.new(8, "@"))
    end
  end
end