open SharedTypes;

type action =
  | Restart;

let initialState = {
  board: [
    [Empty, Empty, Empty],
    [Empty, Empty, Empty],
    [Empty, Empty, Empty],
  ],
  gameState: Playing(Cross),
};

let component = ReasonReact.reducerComponent("Game");

let make = _children => {
  ...component,
  initialState: () => initialState,
  reducer: (action: action, state: state) =>
    switch (action) {
    | Restart => ReasonReact.Update(initialState)
    },
  render: ({state, send}) =>
    <div className="game">
      <Board
        state
        onRestart={_evt => send(Restart)}
      />
    </div>,
};