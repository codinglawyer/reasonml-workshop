open SharedTypes;

let component = ReasonReact.statelessComponent("BoardRow");

let make = (~gameState: gameState, ~row: row, _children) => {
  ...component,
  render: _ =>
    <div className="board-row">
      <Square value={Marked(Cross)} gameState />
    </div>,
};