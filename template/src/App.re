[@bs.module] external css: Js.t({..}) as 'a = "./App.module.css";

/* The snippet below is what we'd like to have, but it doesn't seem to play
 * well with BuckleScript code generation, because we'd need the default
 * export.
 *
 * [@bs.module] external logo: string = "./logo.svg";
 */
let logo = [%bs.raw {|require('./logo.svg')|}];

[@react.component]
let make = () => {
  <div className=css##app>
    <header className=css##appHeader>
      <img src=logo className=css##appLogo alt="logo" />
      <p>
        {React.string("Edit ")}
        <code> {React.string("src/App.re")} </code>
        {React.string(" and save to reload.")}
      </p>
      <a
        className=css##appLink
        href="https://reasonml.github.io/reason-react"
        target="_blank"
        rel="noopener noreferrer">
        {React.string("Learn Reason React")}
      </a>
    </header>
  </div>;
};
