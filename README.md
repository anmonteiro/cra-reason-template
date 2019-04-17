<h1 align="center">
  CRA Reason Template
 </h1>

<pre align="center">
  $ yarn create react-app my-app --scripts-version cra-reason-template
</pre>

This package includes scripts and configuration to provide an easy way to get
started building [ReasonReact](https://reasonml.github.io/reason-react/)
applications with [Create React
App](https://github.com/facebook/create-react-app).

For getting to know `Create React App`, please visit its official
documentation:

- [Getting
  Started](https://facebook.github.io/create-react-app/docs/getting-started) –
  How to create a new app.
- [User Guide](https://facebook.github.io/create-react-app/) – How to develop
  apps bootstrapped with Create React App.

## Getting Started

### Creating a new application

#### Using NPM

```shell;
$ npm install -g create-react-app
$ create-react-app my-app --scripts-version cra-reason-template
```

#### Using Yarn

```shell;
$ yarn create react-app my-app --scripts-version cra-reason-template
```

#### Using [NPX](https://www.npmjs.com/package/npx)

```shell;
$ npx create-react-app my-app --scripts-version cra-reason-template
```

### Running the development server

#### Using NPM

```shell
$ npm run bs:watch
$ npm run start # on a different shell session
```

#### Using Yarn

```shell
$ yarn bs:watch
$ yarn start # on a different shell session
```

### Creating a production build

#### Using NPM

```shell
$ npm run bs:make
$ npm run build
```

#### Using Yarn

```shell
$ npm run bs:make
$ yarn build
```

## Origins

This work is based on the work done in
[reason-scripts](https://github.com/rrdelaney/reason-scripts). The main
difference between both projects is that `reason-scripts` tries to integrate
the [BuckleScript](https://bucklescript.github.io) toolchain too much
(subjective) with Webpack, when they don't really play very well together.

`cra-reason-template` tries to eschew added complexity by deliberately exposing
the BuckleScript compilation as a pre-requisite to launching the `Create React
App` process.

## Copyright & License

Distributed under the MIT license (see [LICENSE](./LICENSE)).

