let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <div className="title"></div>
      <Game />
    </div>,
};