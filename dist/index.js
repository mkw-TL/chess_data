// modules are defined as an array
// [ module function, map of requires ]
//
// map of requires is short require name -> numeric require
//
// anything defined in a previous bundle is accessed via the
// orig method which is the require for previous bundles

(function (modules, entry, mainEntry, parcelRequireName, globalName) {
  /* eslint-disable no-undef */
  var globalObject =
    typeof globalThis !== 'undefined'
      ? globalThis
      : typeof self !== 'undefined'
      ? self
      : typeof window !== 'undefined'
      ? window
      : typeof global !== 'undefined'
      ? global
      : {};
  /* eslint-enable no-undef */

  // Save the require from previous bundle to this closure if any
  var previousRequire =
    typeof globalObject[parcelRequireName] === 'function' &&
    globalObject[parcelRequireName];

  var cache = previousRequire.cache || {};
  // Do not use `require` to prevent Webpack from trying to bundle this call
  var nodeRequire =
    typeof module !== 'undefined' &&
    typeof module.require === 'function' &&
    module.require.bind(module);

  function newRequire(name, jumped) {
    if (!cache[name]) {
      if (!modules[name]) {
        // if we cannot find the module within our internal map or
        // cache jump to the current global require ie. the last bundle
        // that was added to the page.
        var currentRequire =
          typeof globalObject[parcelRequireName] === 'function' &&
          globalObject[parcelRequireName];
        if (!jumped && currentRequire) {
          return currentRequire(name, true);
        }

        // If there are other bundles on this page the require from the
        // previous one is saved to 'previousRequire'. Repeat this as
        // many times as there are bundles until the module is found or
        // we exhaust the require chain.
        if (previousRequire) {
          return previousRequire(name, true);
        }

        // Try the node require function if it exists.
        if (nodeRequire && typeof name === 'string') {
          return nodeRequire(name);
        }

        var err = new Error("Cannot find module '" + name + "'");
        err.code = 'MODULE_NOT_FOUND';
        throw err;
      }

      localRequire.resolve = resolve;
      localRequire.cache = {};

      var module = (cache[name] = new newRequire.Module(name));

      modules[name][0].call(
        module.exports,
        localRequire,
        module,
        module.exports,
        this
      );
    }

    return cache[name].exports;

    function localRequire(x) {
      var res = localRequire.resolve(x);
      return res === false ? {} : newRequire(res);
    }

    function resolve(x) {
      var id = modules[name][1][x];
      return id != null ? id : x;
    }
  }

  function Module(moduleName) {
    this.id = moduleName;
    this.bundle = newRequire;
    this.exports = {};
  }

  newRequire.isParcelRequire = true;
  newRequire.Module = Module;
  newRequire.modules = modules;
  newRequire.cache = cache;
  newRequire.parent = previousRequire;
  newRequire.register = function (id, exports) {
    modules[id] = [
      function (require, module) {
        module.exports = exports;
      },
      {},
    ];
  };

  Object.defineProperty(newRequire, 'root', {
    get: function () {
      return globalObject[parcelRequireName];
    },
  });

  globalObject[parcelRequireName] = newRequire;

  for (var i = 0; i < entry.length; i++) {
    newRequire(entry[i]);
  }

  if (mainEntry) {
    // Expose entry point to Node, AMD or browser globals
    // Based on https://github.com/ForbesLindesay/umd/blob/master/template.js
    var mainExports = newRequire(mainEntry);

    // CommonJS
    if (typeof exports === 'object' && typeof module !== 'undefined') {
      module.exports = mainExports;

      // RequireJS
    } else if (typeof define === 'function' && define.amd) {
      define(function () {
        return mainExports;
      });

      // <script>
    } else if (globalName) {
      this[globalName] = mainExports;
    }
  }
})({"2UeK4":[function(require,module,exports) {
var global = arguments[3];
var HMR_HOST = null;
var HMR_PORT = null;
var HMR_SECURE = false;
var HMR_ENV_HASH = "d6ea1d42532a7575";
module.bundle.HMR_BUNDLE_ID = "0a8ecb283d214d75";
"use strict";
/* global HMR_HOST, HMR_PORT, HMR_ENV_HASH, HMR_SECURE, chrome, browser, __parcel__import__, __parcel__importScripts__, ServiceWorkerGlobalScope */ /*::
import type {
  HMRAsset,
  HMRMessage,
} from '@parcel/reporter-dev-server/src/HMRServer.js';
interface ParcelRequire {
  (string): mixed;
  cache: {|[string]: ParcelModule|};
  hotData: {|[string]: mixed|};
  Module: any;
  parent: ?ParcelRequire;
  isParcelRequire: true;
  modules: {|[string]: [Function, {|[string]: string|}]|};
  HMR_BUNDLE_ID: string;
  root: ParcelRequire;
}
interface ParcelModule {
  hot: {|
    data: mixed,
    accept(cb: (Function) => void): void,
    dispose(cb: (mixed) => void): void,
    // accept(deps: Array<string> | string, cb: (Function) => void): void,
    // decline(): void,
    _acceptCallbacks: Array<(Function) => void>,
    _disposeCallbacks: Array<(mixed) => void>,
  |};
}
interface ExtensionContext {
  runtime: {|
    reload(): void,
    getURL(url: string): string;
    getManifest(): {manifest_version: number, ...};
  |};
}
declare var module: {bundle: ParcelRequire, ...};
declare var HMR_HOST: string;
declare var HMR_PORT: string;
declare var HMR_ENV_HASH: string;
declare var HMR_SECURE: boolean;
declare var chrome: ExtensionContext;
declare var browser: ExtensionContext;
declare var __parcel__import__: (string) => Promise<void>;
declare var __parcel__importScripts__: (string) => Promise<void>;
declare var globalThis: typeof self;
declare var ServiceWorkerGlobalScope: Object;
*/ var OVERLAY_ID = "__parcel__error__overlay__";
var OldModule = module.bundle.Module;
function Module(moduleName) {
    OldModule.call(this, moduleName);
    this.hot = {
        data: module.bundle.hotData[moduleName],
        _acceptCallbacks: [],
        _disposeCallbacks: [],
        accept: function(fn) {
            this._acceptCallbacks.push(fn || function() {});
        },
        dispose: function(fn) {
            this._disposeCallbacks.push(fn);
        }
    };
    module.bundle.hotData[moduleName] = undefined;
}
module.bundle.Module = Module;
module.bundle.hotData = {};
var checkedAssets /*: {|[string]: boolean|} */ , assetsToDispose /*: Array<[ParcelRequire, string]> */ , assetsToAccept /*: Array<[ParcelRequire, string]> */ ;
function getHostname() {
    return HMR_HOST || (location.protocol.indexOf("http") === 0 ? location.hostname : "localhost");
}
function getPort() {
    return HMR_PORT || location.port;
}
// eslint-disable-next-line no-redeclare
var parent = module.bundle.parent;
if ((!parent || !parent.isParcelRequire) && typeof WebSocket !== "undefined") {
    var hostname = getHostname();
    var port = getPort();
    var protocol = HMR_SECURE || location.protocol == "https:" && !/localhost|127.0.0.1|0.0.0.0/.test(hostname) ? "wss" : "ws";
    var ws = new WebSocket(protocol + "://" + hostname + (port ? ":" + port : "") + "/");
    // Web extension context
    var extCtx = typeof chrome === "undefined" ? typeof browser === "undefined" ? null : browser : chrome;
    // Safari doesn't support sourceURL in error stacks.
    // eval may also be disabled via CSP, so do a quick check.
    var supportsSourceURL = false;
    try {
        (0, eval)('throw new Error("test"); //# sourceURL=test.js');
    } catch (err) {
        supportsSourceURL = err.stack.includes("test.js");
    }
    // $FlowFixMe
    ws.onmessage = async function(event /*: {data: string, ...} */ ) {
        checkedAssets = {} /*: {|[string]: boolean|} */ ;
        assetsToAccept = [];
        assetsToDispose = [];
        var data /*: HMRMessage */  = JSON.parse(event.data);
        if (data.type === "update") {
            // Remove error overlay if there is one
            if (typeof document !== "undefined") removeErrorOverlay();
            let assets = data.assets.filter((asset)=>asset.envHash === HMR_ENV_HASH);
            // Handle HMR Update
            let handled = assets.every((asset)=>{
                return asset.type === "css" || asset.type === "js" && hmrAcceptCheck(module.bundle.root, asset.id, asset.depsByBundle);
            });
            if (handled) {
                console.clear();
                // Dispatch custom event so other runtimes (e.g React Refresh) are aware.
                if (typeof window !== "undefined" && typeof CustomEvent !== "undefined") window.dispatchEvent(new CustomEvent("parcelhmraccept"));
                await hmrApplyUpdates(assets);
                // Dispose all old assets.
                let processedAssets = {} /*: {|[string]: boolean|} */ ;
                for(let i = 0; i < assetsToDispose.length; i++){
                    let id = assetsToDispose[i][1];
                    if (!processedAssets[id]) {
                        hmrDispose(assetsToDispose[i][0], id);
                        processedAssets[id] = true;
                    }
                }
                // Run accept callbacks. This will also re-execute other disposed assets in topological order.
                processedAssets = {};
                for(let i = 0; i < assetsToAccept.length; i++){
                    let id = assetsToAccept[i][1];
                    if (!processedAssets[id]) {
                        hmrAccept(assetsToAccept[i][0], id);
                        processedAssets[id] = true;
                    }
                }
            } else fullReload();
        }
        if (data.type === "error") {
            // Log parcel errors to console
            for (let ansiDiagnostic of data.diagnostics.ansi){
                let stack = ansiDiagnostic.codeframe ? ansiDiagnostic.codeframe : ansiDiagnostic.stack;
                console.error("\uD83D\uDEA8 [parcel]: " + ansiDiagnostic.message + "\n" + stack + "\n\n" + ansiDiagnostic.hints.join("\n"));
            }
            if (typeof document !== "undefined") {
                // Render the fancy html overlay
                removeErrorOverlay();
                var overlay = createErrorOverlay(data.diagnostics.html);
                // $FlowFixMe
                document.body.appendChild(overlay);
            }
        }
    };
    ws.onerror = function(e) {
        console.error(e.message);
    };
    ws.onclose = function() {
        console.warn("[parcel] \uD83D\uDEA8 Connection to the HMR server was lost");
    };
}
function removeErrorOverlay() {
    var overlay = document.getElementById(OVERLAY_ID);
    if (overlay) {
        overlay.remove();
        console.log("[parcel] ✨ Error resolved");
    }
}
function createErrorOverlay(diagnostics) {
    var overlay = document.createElement("div");
    overlay.id = OVERLAY_ID;
    let errorHTML = '<div style="background: black; opacity: 0.85; font-size: 16px; color: white; position: fixed; height: 100%; width: 100%; top: 0px; left: 0px; padding: 30px; font-family: Menlo, Consolas, monospace; z-index: 9999;">';
    for (let diagnostic of diagnostics){
        let stack = diagnostic.frames.length ? diagnostic.frames.reduce((p, frame)=>{
            return `${p}
<a href="/__parcel_launch_editor?file=${encodeURIComponent(frame.location)}" style="text-decoration: underline; color: #888" onclick="fetch(this.href); return false">${frame.location}</a>
${frame.code}`;
        }, "") : diagnostic.stack;
        errorHTML += `
      <div>
        <div style="font-size: 18px; font-weight: bold; margin-top: 20px;">
          🚨 ${diagnostic.message}
        </div>
        <pre>${stack}</pre>
        <div>
          ${diagnostic.hints.map((hint)=>"<div>\uD83D\uDCA1 " + hint + "</div>").join("")}
        </div>
        ${diagnostic.documentation ? `<div>📝 <a style="color: violet" href="${diagnostic.documentation}" target="_blank">Learn more</a></div>` : ""}
      </div>
    `;
    }
    errorHTML += "</div>";
    overlay.innerHTML = errorHTML;
    return overlay;
}
function fullReload() {
    if ("reload" in location) location.reload();
    else if (extCtx && extCtx.runtime && extCtx.runtime.reload) extCtx.runtime.reload();
}
function getParents(bundle, id) /*: Array<[ParcelRequire, string]> */ {
    var modules = bundle.modules;
    if (!modules) return [];
    var parents = [];
    var k, d, dep;
    for(k in modules)for(d in modules[k][1]){
        dep = modules[k][1][d];
        if (dep === id || Array.isArray(dep) && dep[dep.length - 1] === id) parents.push([
            bundle,
            k
        ]);
    }
    if (bundle.parent) parents = parents.concat(getParents(bundle.parent, id));
    return parents;
}
function updateLink(link) {
    var href = link.getAttribute("href");
    if (!href) return;
    var newLink = link.cloneNode();
    newLink.onload = function() {
        if (link.parentNode !== null) // $FlowFixMe
        link.parentNode.removeChild(link);
    };
    newLink.setAttribute("href", // $FlowFixMe
    href.split("?")[0] + "?" + Date.now());
    // $FlowFixMe
    link.parentNode.insertBefore(newLink, link.nextSibling);
}
var cssTimeout = null;
function reloadCSS() {
    if (cssTimeout) return;
    cssTimeout = setTimeout(function() {
        var links = document.querySelectorAll('link[rel="stylesheet"]');
        for(var i = 0; i < links.length; i++){
            // $FlowFixMe[incompatible-type]
            var href /*: string */  = links[i].getAttribute("href");
            var hostname = getHostname();
            var servedFromHMRServer = hostname === "localhost" ? new RegExp("^(https?:\\/\\/(0.0.0.0|127.0.0.1)|localhost):" + getPort()).test(href) : href.indexOf(hostname + ":" + getPort());
            var absolute = /^https?:\/\//i.test(href) && href.indexOf(location.origin) !== 0 && !servedFromHMRServer;
            if (!absolute) updateLink(links[i]);
        }
        cssTimeout = null;
    }, 50);
}
function hmrDownload(asset) {
    if (asset.type === "js") {
        if (typeof document !== "undefined") {
            let script = document.createElement("script");
            script.src = asset.url + "?t=" + Date.now();
            if (asset.outputFormat === "esmodule") script.type = "module";
            return new Promise((resolve, reject)=>{
                var _document$head;
                script.onload = ()=>resolve(script);
                script.onerror = reject;
                (_document$head = document.head) === null || _document$head === void 0 || _document$head.appendChild(script);
            });
        } else if (typeof importScripts === "function") {
            // Worker scripts
            if (asset.outputFormat === "esmodule") return import(asset.url + "?t=" + Date.now());
            else return new Promise((resolve, reject)=>{
                try {
                    importScripts(asset.url + "?t=" + Date.now());
                    resolve();
                } catch (err) {
                    reject(err);
                }
            });
        }
    }
}
async function hmrApplyUpdates(assets) {
    global.parcelHotUpdate = Object.create(null);
    let scriptsToRemove;
    try {
        // If sourceURL comments aren't supported in eval, we need to load
        // the update from the dev server over HTTP so that stack traces
        // are correct in errors/logs. This is much slower than eval, so
        // we only do it if needed (currently just Safari).
        // https://bugs.webkit.org/show_bug.cgi?id=137297
        // This path is also taken if a CSP disallows eval.
        if (!supportsSourceURL) {
            let promises = assets.map((asset)=>{
                var _hmrDownload;
                return (_hmrDownload = hmrDownload(asset)) === null || _hmrDownload === void 0 ? void 0 : _hmrDownload.catch((err)=>{
                    // Web extension bugfix for Chromium
                    // https://bugs.chromium.org/p/chromium/issues/detail?id=1255412#c12
                    if (extCtx && extCtx.runtime && extCtx.runtime.getManifest().manifest_version == 3) {
                        if (typeof ServiceWorkerGlobalScope != "undefined" && global instanceof ServiceWorkerGlobalScope) {
                            extCtx.runtime.reload();
                            return;
                        }
                        asset.url = extCtx.runtime.getURL("/__parcel_hmr_proxy__?url=" + encodeURIComponent(asset.url + "?t=" + Date.now()));
                        return hmrDownload(asset);
                    }
                    throw err;
                });
            });
            scriptsToRemove = await Promise.all(promises);
        }
        assets.forEach(function(asset) {
            hmrApply(module.bundle.root, asset);
        });
    } finally{
        delete global.parcelHotUpdate;
        if (scriptsToRemove) scriptsToRemove.forEach((script)=>{
            if (script) {
                var _document$head2;
                (_document$head2 = document.head) === null || _document$head2 === void 0 || _document$head2.removeChild(script);
            }
        });
    }
}
function hmrApply(bundle /*: ParcelRequire */ , asset /*:  HMRAsset */ ) {
    var modules = bundle.modules;
    if (!modules) return;
    if (asset.type === "css") reloadCSS();
    else if (asset.type === "js") {
        let deps = asset.depsByBundle[bundle.HMR_BUNDLE_ID];
        if (deps) {
            if (modules[asset.id]) {
                // Remove dependencies that are removed and will become orphaned.
                // This is necessary so that if the asset is added back again, the cache is gone, and we prevent a full page reload.
                let oldDeps = modules[asset.id][1];
                for(let dep in oldDeps)if (!deps[dep] || deps[dep] !== oldDeps[dep]) {
                    let id = oldDeps[dep];
                    let parents = getParents(module.bundle.root, id);
                    if (parents.length === 1) hmrDelete(module.bundle.root, id);
                }
            }
            if (supportsSourceURL) // Global eval. We would use `new Function` here but browser
            // support for source maps is better with eval.
            (0, eval)(asset.output);
            // $FlowFixMe
            let fn = global.parcelHotUpdate[asset.id];
            modules[asset.id] = [
                fn,
                deps
            ];
        } else if (bundle.parent) hmrApply(bundle.parent, asset);
    }
}
function hmrDelete(bundle, id) {
    let modules = bundle.modules;
    if (!modules) return;
    if (modules[id]) {
        // Collect dependencies that will become orphaned when this module is deleted.
        let deps = modules[id][1];
        let orphans = [];
        for(let dep in deps){
            let parents = getParents(module.bundle.root, deps[dep]);
            if (parents.length === 1) orphans.push(deps[dep]);
        }
        // Delete the module. This must be done before deleting dependencies in case of circular dependencies.
        delete modules[id];
        delete bundle.cache[id];
        // Now delete the orphans.
        orphans.forEach((id)=>{
            hmrDelete(module.bundle.root, id);
        });
    } else if (bundle.parent) hmrDelete(bundle.parent, id);
}
function hmrAcceptCheck(bundle /*: ParcelRequire */ , id /*: string */ , depsByBundle /*: ?{ [string]: { [string]: string } }*/ ) {
    if (hmrAcceptCheckOne(bundle, id, depsByBundle)) return true;
    // Traverse parents breadth first. All possible ancestries must accept the HMR update, or we'll reload.
    let parents = getParents(module.bundle.root, id);
    let accepted = false;
    while(parents.length > 0){
        let v = parents.shift();
        let a = hmrAcceptCheckOne(v[0], v[1], null);
        if (a) // If this parent accepts, stop traversing upward, but still consider siblings.
        accepted = true;
        else {
            // Otherwise, queue the parents in the next level upward.
            let p = getParents(module.bundle.root, v[1]);
            if (p.length === 0) {
                // If there are no parents, then we've reached an entry without accepting. Reload.
                accepted = false;
                break;
            }
            parents.push(...p);
        }
    }
    return accepted;
}
function hmrAcceptCheckOne(bundle /*: ParcelRequire */ , id /*: string */ , depsByBundle /*: ?{ [string]: { [string]: string } }*/ ) {
    var modules = bundle.modules;
    if (!modules) return;
    if (depsByBundle && !depsByBundle[bundle.HMR_BUNDLE_ID]) {
        // If we reached the root bundle without finding where the asset should go,
        // there's nothing to do. Mark as "accepted" so we don't reload the page.
        if (!bundle.parent) return true;
        return hmrAcceptCheck(bundle.parent, id, depsByBundle);
    }
    if (checkedAssets[id]) return true;
    checkedAssets[id] = true;
    var cached = bundle.cache[id];
    assetsToDispose.push([
        bundle,
        id
    ]);
    if (!cached || cached.hot && cached.hot._acceptCallbacks.length) {
        assetsToAccept.push([
            bundle,
            id
        ]);
        return true;
    }
}
function hmrDispose(bundle /*: ParcelRequire */ , id /*: string */ ) {
    var cached = bundle.cache[id];
    bundle.hotData[id] = {};
    if (cached && cached.hot) cached.hot.data = bundle.hotData[id];
    if (cached && cached.hot && cached.hot._disposeCallbacks.length) cached.hot._disposeCallbacks.forEach(function(cb) {
        cb(bundle.hotData[id]);
    });
    delete bundle.cache[id];
}
function hmrAccept(bundle /*: ParcelRequire */ , id /*: string */ ) {
    // Execute the module.
    bundle(id);
    // Run the accept callbacks in the new version of the module.
    var cached = bundle.cache[id];
    if (cached && cached.hot && cached.hot._acceptCallbacks.length) cached.hot._acceptCallbacks.forEach(function(cb) {
        var assetsToAlsoAccept = cb(function() {
            return getParents(module.bundle.root, id);
        });
        if (assetsToAlsoAccept && assetsToAccept.length) {
            assetsToAlsoAccept.forEach(function(a) {
                hmrDispose(a[0], a[1]);
            });
            // $FlowFixMe[method-unbinding]
            assetsToAccept.push.apply(assetsToAccept, assetsToAlsoAccept);
        }
    });
}

},{}],"bB7Pu":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
var _lichessPgnViewer = require("lichess-pgn-viewer");
var _lichessPgnViewerDefault = parcelHelpers.interopDefault(_lichessPgnViewer);
document.addEventListener("DOMContentLoaded", ()=>{
    let domElements = document.getElementsByTagName("h2");
    console.log(domElements);
    let pgn_str = domElements[0].innerText;
    console.log(pgn_str);
    domElements[0].style.display = "none";
    const lpv = (0, _lichessPgnViewerDefault.default)(domElements, {
        pgn: pgn_str
    });
});

},{"lichess-pgn-viewer":"95kBe","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"95kBe":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "default", ()=>start);
var _pgnViewer = require("./pgnViewer");
var _pgnViewerDefault = parcelHelpers.interopDefault(_pgnViewer);
var _main = require("./view/main");
var _mainDefault = parcelHelpers.interopDefault(_main);
var _snabbdom = require("snabbdom");
var _config = require("./config");
var _configDefault = parcelHelpers.interopDefault(_config);
function start(element, cfg) {
    const patch = (0, _snabbdom.init)([
        (0, _snabbdom.classModule),
        (0, _snabbdom.attributesModule)
    ]);
    const opts = (0, _configDefault.default)(element, cfg);
    const ctrl = new (0, _pgnViewerDefault.default)(opts, redraw);
    const blueprint = (0, _mainDefault.default)(ctrl);
    element.innerHTML = "";
    let vnode = patch(element, blueprint);
    ctrl.div = vnode.elm;
    function redraw() {
        vnode = patch(vnode, (0, _mainDefault.default)(ctrl));
    }
    return ctrl;
}

},{"./pgnViewer":"gZHA0","./view/main":"b9QIT","snabbdom":"Rkydo","./config":"a2LYF","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"gZHA0":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
var _chessops = require("chessops");
var _translation = require("./translation");
var _translationDefault = parcelHelpers.interopDefault(_translation);
var _utilJs = require("chessground/dist/util.js");
var _path = require("./path");
var _game = require("./game");
var _pgn = require("./pgn");
class PgnViewer {
    constructor(opts, redraw){
        this.opts = opts;
        this.redraw = redraw;
        this.flipped = false;
        this.pane = "board";
        this.autoScrollRequested = false;
        this.curNode = ()=>this.game.nodeAt(this.path) || this.game.moves;
        this.curData = ()=>this.game.dataAt(this.path) || this.game.initial;
        this.goTo = (to, focus = true)=>{
            var _a, _b;
            const path = to == "first" ? (0, _path.Path).root : to == "prev" ? this.path.init() : to == "next" ? (_b = (_a = this.game.nodeAt(this.path)) === null || _a === void 0 ? void 0 : _a.children[0]) === null || _b === void 0 ? void 0 : _b.data.path : this.game.pathAtMainlinePly("last");
            this.toPath(path || this.path, focus);
        };
        this.canGoTo = (to)=>to == "prev" || to == "first" ? !this.path.empty() : !!this.curNode().children[0];
        this.toPath = (path, focus = true)=>{
            this.path = path;
            this.pane = "board";
            this.autoScrollRequested = true;
            this.redrawGround();
            this.redraw();
            if (focus) this.focus();
        };
        this.focus = ()=>{
            var _a;
            return (_a = this.div) === null || _a === void 0 ? void 0 : _a.focus();
        };
        this.toggleMenu = ()=>{
            this.pane = this.pane == "board" ? "menu" : "board";
            this.redraw();
        };
        this.togglePgn = ()=>{
            this.pane = this.pane == "pgn" ? "board" : "pgn";
            this.redraw();
        };
        this.orientation = ()=>{
            const base = this.opts.orientation || "white";
            return this.flipped ? (0, _chessops.opposite)(base) : base;
        };
        this.flip = ()=>{
            this.flipped = !this.flipped;
            this.pane = "board";
            this.redrawGround();
            this.redraw();
        };
        this.cgState = ()=>{
            var _a;
            const data = this.curData();
            const lastMove = (0, _game.isMoveData)(data) ? (0, _utilJs.uciToMove)(data.uci) : (_a = this.opts.chessground) === null || _a === void 0 ? void 0 : _a.lastMove;
            return {
                fen: data.fen,
                orientation: this.orientation(),
                check: data.check,
                lastMove,
                turnColor: data.turn
            };
        };
        this.analysisUrl = ()=>this.game.metadata.isLichess && this.game.metadata.externalLink || `https://lichess.org/analysis/${this.curData().fen.replace(" ", "_")}?color=${this.orientation()}`;
        this.practiceUrl = ()=>`${this.analysisUrl()}#practice`;
        this.setGround = (cg)=>{
            this.ground = cg;
            this.redrawGround();
        };
        this.redrawGround = ()=>this.withGround((g)=>{
                g.set(this.cgState());
                g.setShapes(this.curData().shapes.map((s)=>({
                        orig: (0, _chessops.makeSquare)(s.from),
                        dest: (0, _chessops.makeSquare)(s.to),
                        brush: s.color
                    })));
            });
        this.withGround = (f)=>this.ground && f(this.ground);
        this.game = (0, _pgn.makeGame)(opts.pgn, opts.lichess);
        opts.orientation = opts.orientation || this.game.metadata.orientation;
        this.translate = (0, _translationDefault.default)(opts.translate);
        this.path = this.game.pathAtMainlinePly(opts.initialPly);
    }
}
exports.default = PgnViewer;

},{"chessops":"3T435","./translation":"6oJFU","./path":"9rRU7","./game":"8MT9F","./pgn":"bwAO9","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3","chessground/dist/util.js":"akuUP"}],"3T435":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "FILE_NAMES", ()=>(0, _typesJs.FILE_NAMES));
parcelHelpers.export(exports, "RANK_NAMES", ()=>(0, _typesJs.RANK_NAMES));
parcelHelpers.export(exports, "COLORS", ()=>(0, _typesJs.COLORS));
parcelHelpers.export(exports, "ROLES", ()=>(0, _typesJs.ROLES));
parcelHelpers.export(exports, "CASTLING_SIDES", ()=>(0, _typesJs.CASTLING_SIDES));
parcelHelpers.export(exports, "isDrop", ()=>(0, _typesJs.isDrop));
parcelHelpers.export(exports, "isNormal", ()=>(0, _typesJs.isNormal));
parcelHelpers.export(exports, "RULES", ()=>(0, _typesJs.RULES));
parcelHelpers.export(exports, "charToRole", ()=>(0, _utilJs.charToRole));
parcelHelpers.export(exports, "defined", ()=>(0, _utilJs.defined));
parcelHelpers.export(exports, "kingCastlesTo", ()=>(0, _utilJs.kingCastlesTo));
parcelHelpers.export(exports, "makeSquare", ()=>(0, _utilJs.makeSquare));
parcelHelpers.export(exports, "makeUci", ()=>(0, _utilJs.makeUci));
parcelHelpers.export(exports, "opposite", ()=>(0, _utilJs.opposite));
parcelHelpers.export(exports, "parseSquare", ()=>(0, _utilJs.parseSquare));
parcelHelpers.export(exports, "parseUci", ()=>(0, _utilJs.parseUci));
parcelHelpers.export(exports, "roleToChar", ()=>(0, _utilJs.roleToChar));
parcelHelpers.export(exports, "squareFile", ()=>(0, _utilJs.squareFile));
parcelHelpers.export(exports, "squareRank", ()=>(0, _utilJs.squareRank));
parcelHelpers.export(exports, "SquareSet", ()=>(0, _squareSetJs.SquareSet));
parcelHelpers.export(exports, "attacks", ()=>(0, _attacksJs.attacks));
parcelHelpers.export(exports, "between", ()=>(0, _attacksJs.between));
parcelHelpers.export(exports, "bishopAttacks", ()=>(0, _attacksJs.bishopAttacks));
parcelHelpers.export(exports, "kingAttacks", ()=>(0, _attacksJs.kingAttacks));
parcelHelpers.export(exports, "knightAttacks", ()=>(0, _attacksJs.knightAttacks));
parcelHelpers.export(exports, "pawnAttacks", ()=>(0, _attacksJs.pawnAttacks));
parcelHelpers.export(exports, "queenAttacks", ()=>(0, _attacksJs.queenAttacks));
parcelHelpers.export(exports, "ray", ()=>(0, _attacksJs.ray));
parcelHelpers.export(exports, "rookAttacks", ()=>(0, _attacksJs.rookAttacks));
parcelHelpers.export(exports, "Board", ()=>(0, _boardJs.Board));
parcelHelpers.export(exports, "Material", ()=>(0, _setupJs.Material));
parcelHelpers.export(exports, "MaterialSide", ()=>(0, _setupJs.MaterialSide));
parcelHelpers.export(exports, "RemainingChecks", ()=>(0, _setupJs.RemainingChecks));
parcelHelpers.export(exports, "defaultSetup", ()=>(0, _setupJs.defaultSetup));
parcelHelpers.export(exports, "IllegalSetup", ()=>(0, _chessJs.IllegalSetup));
parcelHelpers.export(exports, "Castles", ()=>(0, _chessJs.Castles));
parcelHelpers.export(exports, "Chess", ()=>(0, _chessJs.Chess));
parcelHelpers.export(exports, "Position", ()=>(0, _chessJs.Position));
parcelHelpers.export(exports, "PositionError", ()=>(0, _chessJs.PositionError));
parcelHelpers.export(exports, "compat", ()=>_compatJs);
parcelHelpers.export(exports, "debug", ()=>_debugJs);
parcelHelpers.export(exports, "fen", ()=>_fenJs);
parcelHelpers.export(exports, "san", ()=>_sanJs);
parcelHelpers.export(exports, "transform", ()=>_transformJs);
parcelHelpers.export(exports, "variant", ()=>_variantJs);
parcelHelpers.export(exports, "pgn", ()=>_pgnJs);
var _typesJs = require("./types.js");
var _utilJs = require("./util.js");
var _squareSetJs = require("./squareSet.js");
var _attacksJs = require("./attacks.js");
var _boardJs = require("./board.js");
var _setupJs = require("./setup.js");
var _chessJs = require("./chess.js");
var _compatJs = require("./compat.js");
var _debugJs = require("./debug.js");
var _fenJs = require("./fen.js");
var _sanJs = require("./san.js");
var _transformJs = require("./transform.js");
var _variantJs = require("./variant.js");
var _pgnJs = require("./pgn.js");

},{"./types.js":false,"./util.js":"65Nkv","./squareSet.js":false,"./attacks.js":false,"./board.js":false,"./setup.js":false,"./chess.js":false,"./compat.js":false,"./debug.js":false,"./fen.js":false,"./san.js":false,"./transform.js":false,"./variant.js":false,"./pgn.js":false,"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"5rlGs":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "FILE_NAMES", ()=>FILE_NAMES);
parcelHelpers.export(exports, "RANK_NAMES", ()=>RANK_NAMES);
parcelHelpers.export(exports, "COLORS", ()=>COLORS);
parcelHelpers.export(exports, "ROLES", ()=>ROLES);
parcelHelpers.export(exports, "CASTLING_SIDES", ()=>CASTLING_SIDES);
parcelHelpers.export(exports, "isDrop", ()=>isDrop);
parcelHelpers.export(exports, "isNormal", ()=>isNormal);
parcelHelpers.export(exports, "RULES", ()=>RULES);
const FILE_NAMES = [
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h"
];
const RANK_NAMES = [
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8"
];
const COLORS = [
    "white",
    "black"
];
const ROLES = [
    "pawn",
    "knight",
    "bishop",
    "rook",
    "queen",
    "king"
];
const CASTLING_SIDES = [
    "a",
    "h"
];
const isDrop = (v)=>"role" in v;
const isNormal = (v)=>"from" in v;
const RULES = [
    "chess",
    "antichess",
    "kingofthehill",
    "3check",
    "atomic",
    "horde",
    "racingkings",
    "crazyhouse"
];

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"gkKU3":[function(require,module,exports) {
exports.interopDefault = function(a) {
    return a && a.__esModule ? a : {
        default: a
    };
};
exports.defineInteropFlag = function(a) {
    Object.defineProperty(a, "__esModule", {
        value: true
    });
};
exports.exportAll = function(source, dest) {
    Object.keys(source).forEach(function(key) {
        if (key === "default" || key === "__esModule" || dest.hasOwnProperty(key)) return;
        Object.defineProperty(dest, key, {
            enumerable: true,
            get: function() {
                return source[key];
            }
        });
    });
    return dest;
};
exports.export = function(dest, destName, get) {
    Object.defineProperty(dest, destName, {
        enumerable: true,
        get: get
    });
};

},{}],"65Nkv":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "defined", ()=>defined);
parcelHelpers.export(exports, "opposite", ()=>opposite);
parcelHelpers.export(exports, "squareRank", ()=>squareRank);
parcelHelpers.export(exports, "squareFile", ()=>squareFile);
parcelHelpers.export(exports, "roleToChar", ()=>roleToChar);
parcelHelpers.export(exports, "charToRole", ()=>charToRole);
parcelHelpers.export(exports, "parseSquare", ()=>parseSquare);
parcelHelpers.export(exports, "makeSquare", ()=>makeSquare);
parcelHelpers.export(exports, "parseUci", ()=>parseUci);
parcelHelpers.export(exports, "moveEquals", ()=>moveEquals);
parcelHelpers.export(exports, "makeUci", ()=>makeUci);
parcelHelpers.export(exports, "kingCastlesTo", ()=>kingCastlesTo);
parcelHelpers.export(exports, "rookCastlesTo", ()=>rookCastlesTo);
var _typesJs = require("./types.js");
const defined = (v)=>v !== undefined;
const opposite = (color)=>color === "white" ? "black" : "white";
const squareRank = (square)=>square >> 3;
const squareFile = (square)=>square & 0x7;
const roleToChar = (role)=>{
    switch(role){
        case "pawn":
            return "p";
        case "knight":
            return "n";
        case "bishop":
            return "b";
        case "rook":
            return "r";
        case "queen":
            return "q";
        case "king":
            return "k";
    }
};
function charToRole(ch) {
    switch(ch.toLowerCase()){
        case "p":
            return "pawn";
        case "n":
            return "knight";
        case "b":
            return "bishop";
        case "r":
            return "rook";
        case "q":
            return "queen";
        case "k":
            return "king";
        default:
            return;
    }
}
function parseSquare(str) {
    if (str.length !== 2) return;
    const file = str.charCodeAt(0) - "a".charCodeAt(0);
    const rank = str.charCodeAt(1) - "1".charCodeAt(0);
    if (file < 0 || file >= 8 || rank < 0 || rank >= 8) return;
    return file + 8 * rank;
}
const makeSquare = (square)=>(0, _typesJs.FILE_NAMES)[squareFile(square)] + (0, _typesJs.RANK_NAMES)[squareRank(square)];
const parseUci = (str)=>{
    if (str[1] === "@" && str.length === 4) {
        const role = charToRole(str[0]);
        const to = parseSquare(str.slice(2));
        if (role && defined(to)) return {
            role,
            to
        };
    } else if (str.length === 4 || str.length === 5) {
        const from = parseSquare(str.slice(0, 2));
        const to = parseSquare(str.slice(2, 4));
        let promotion;
        if (str.length === 5) {
            promotion = charToRole(str[4]);
            if (!promotion) return;
        }
        if (defined(from) && defined(to)) return {
            from,
            to,
            promotion
        };
    }
    return;
};
const moveEquals = (left, right)=>{
    if (left.to !== right.to) return false;
    if ((0, _typesJs.isDrop)(left)) return (0, _typesJs.isDrop)(right) && left.role === right.role;
    else return (0, _typesJs.isNormal)(right) && left.from === right.from && left.promotion === right.promotion;
};
const makeUci = (move)=>(0, _typesJs.isDrop)(move) ? `${roleToChar(move.role).toUpperCase()}@${makeSquare(move.to)}` : makeSquare(move.from) + makeSquare(move.to) + (move.promotion ? roleToChar(move.promotion) : "");
const kingCastlesTo = (color, side)=>color === "white" ? side === "a" ? 2 : 6 : side === "a" ? 58 : 62;
const rookCastlesTo = (color, side)=>color === "white" ? side === "a" ? 3 : 5 : side === "a" ? 59 : 61;

},{"./types.js":"5rlGs","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"cjFYL":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
/**
 * An immutable set of squares, implemented as a bitboard.
 */ parcelHelpers.export(exports, "SquareSet", ()=>SquareSet);
const popcnt32 = (n)=>{
    n = n - (n >>> 1 & 1431655765);
    n = (n & 858993459) + (n >>> 2 & 858993459);
    return Math.imul(n + (n >>> 4) & 252645135, 16843009) >> 24;
};
const bswap32 = (n)=>{
    n = n >>> 8 & 16711935 | (n & 16711935) << 8;
    return n >>> 16 & 0xffff | (n & 0xffff) << 16;
};
const rbit32 = (n)=>{
    n = n >>> 1 & 1431655765 | (n & 1431655765) << 1;
    n = n >>> 2 & 858993459 | (n & 858993459) << 2;
    n = n >>> 4 & 252645135 | (n & 252645135) << 4;
    return bswap32(n);
};
class SquareSet {
    constructor(lo, hi){
        this.lo = lo | 0;
        this.hi = hi | 0;
    }
    static fromSquare(square) {
        return square >= 32 ? new SquareSet(0, 1 << square - 32) : new SquareSet(1 << square, 0);
    }
    static fromRank(rank) {
        return new SquareSet(0xff, 0).shl64(8 * rank);
    }
    static fromFile(file) {
        return new SquareSet(16843009 << file, 16843009 << file);
    }
    static empty() {
        return new SquareSet(0, 0);
    }
    static full() {
        return new SquareSet(4294967295, 4294967295);
    }
    static corners() {
        return new SquareSet(0x81, 2164260864);
    }
    static center() {
        return new SquareSet(402653184, 0x18);
    }
    static backranks() {
        return new SquareSet(0xff, 4278190080);
    }
    static backrank(color) {
        return color === "white" ? new SquareSet(0xff, 0) : new SquareSet(0, 4278190080);
    }
    static lightSquares() {
        return new SquareSet(1437226410, 1437226410);
    }
    static darkSquares() {
        return new SquareSet(2857740885, 2857740885);
    }
    complement() {
        return new SquareSet(~this.lo, ~this.hi);
    }
    xor(other) {
        return new SquareSet(this.lo ^ other.lo, this.hi ^ other.hi);
    }
    union(other) {
        return new SquareSet(this.lo | other.lo, this.hi | other.hi);
    }
    intersect(other) {
        return new SquareSet(this.lo & other.lo, this.hi & other.hi);
    }
    diff(other) {
        return new SquareSet(this.lo & ~other.lo, this.hi & ~other.hi);
    }
    intersects(other) {
        return this.intersect(other).nonEmpty();
    }
    isDisjoint(other) {
        return this.intersect(other).isEmpty();
    }
    supersetOf(other) {
        return other.diff(this).isEmpty();
    }
    subsetOf(other) {
        return this.diff(other).isEmpty();
    }
    shr64(shift) {
        if (shift >= 64) return SquareSet.empty();
        if (shift >= 32) return new SquareSet(this.hi >>> shift - 32, 0);
        if (shift > 0) return new SquareSet(this.lo >>> shift ^ this.hi << 32 - shift, this.hi >>> shift);
        return this;
    }
    shl64(shift) {
        if (shift >= 64) return SquareSet.empty();
        if (shift >= 32) return new SquareSet(0, this.lo << shift - 32);
        if (shift > 0) return new SquareSet(this.lo << shift, this.hi << shift ^ this.lo >>> 32 - shift);
        return this;
    }
    bswap64() {
        return new SquareSet(bswap32(this.hi), bswap32(this.lo));
    }
    rbit64() {
        return new SquareSet(rbit32(this.hi), rbit32(this.lo));
    }
    minus64(other) {
        const lo = this.lo - other.lo;
        const c = (lo & other.lo & 1) + (other.lo >>> 1) + (lo >>> 1) >>> 31;
        return new SquareSet(lo, this.hi - (other.hi + c));
    }
    equals(other) {
        return this.lo === other.lo && this.hi === other.hi;
    }
    size() {
        return popcnt32(this.lo) + popcnt32(this.hi);
    }
    isEmpty() {
        return this.lo === 0 && this.hi === 0;
    }
    nonEmpty() {
        return this.lo !== 0 || this.hi !== 0;
    }
    has(square) {
        return (square >= 32 ? this.hi & 1 << square - 32 : this.lo & 1 << square) !== 0;
    }
    set(square, on) {
        return on ? this.with(square) : this.without(square);
    }
    with(square) {
        return square >= 32 ? new SquareSet(this.lo, this.hi | 1 << square - 32) : new SquareSet(this.lo | 1 << square, this.hi);
    }
    without(square) {
        return square >= 32 ? new SquareSet(this.lo, this.hi & ~(1 << square - 32)) : new SquareSet(this.lo & ~(1 << square), this.hi);
    }
    toggle(square) {
        return square >= 32 ? new SquareSet(this.lo, this.hi ^ 1 << square - 32) : new SquareSet(this.lo ^ 1 << square, this.hi);
    }
    last() {
        if (this.hi !== 0) return 63 - Math.clz32(this.hi);
        if (this.lo !== 0) return 31 - Math.clz32(this.lo);
        return;
    }
    first() {
        if (this.lo !== 0) return 31 - Math.clz32(this.lo & -this.lo);
        if (this.hi !== 0) return 63 - Math.clz32(this.hi & -this.hi);
        return;
    }
    withoutFirst() {
        if (this.lo !== 0) return new SquareSet(this.lo & this.lo - 1, this.hi);
        return new SquareSet(0, this.hi & this.hi - 1);
    }
    moreThanOne() {
        return this.hi !== 0 && this.lo !== 0 || (this.lo & this.lo - 1) !== 0 || (this.hi & this.hi - 1) !== 0;
    }
    singleSquare() {
        return this.moreThanOne() ? undefined : this.last();
    }
    *[Symbol.iterator]() {
        let lo = this.lo;
        let hi = this.hi;
        while(lo !== 0){
            const idx = 31 - Math.clz32(lo & -lo);
            lo ^= 1 << idx;
            yield idx;
        }
        while(hi !== 0){
            const idx = 31 - Math.clz32(hi & -hi);
            hi ^= 1 << idx;
            yield 32 + idx;
        }
    }
    *reversed() {
        let lo = this.lo;
        let hi = this.hi;
        while(hi !== 0){
            const idx = 31 - Math.clz32(hi);
            hi ^= 1 << idx;
            yield 32 + idx;
        }
        while(lo !== 0){
            const idx = 31 - Math.clz32(lo);
            lo ^= 1 << idx;
            yield idx;
        }
    }
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"cGrrr":[function(require,module,exports) {
/**
 * Compute attacks and rays.
 *
 * These are low-level functions that can be used to implement chess rules.
 *
 * Implementation notes: Sliding attacks are computed using
 * [hyperbola quintessence](https://www.chessprogramming.org/Hyperbola_Quintessence).
 * Magic bitboards would deliver slightly faster lookups, but also require
 * initializing considerably larger attack tables. On the web, initialization
 * time is important, so the chosen method may strike a better balance.
 *
 * @packageDocumentation
 */ var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "kingAttacks", ()=>kingAttacks);
parcelHelpers.export(exports, "knightAttacks", ()=>knightAttacks);
parcelHelpers.export(exports, "pawnAttacks", ()=>pawnAttacks);
parcelHelpers.export(exports, "bishopAttacks", ()=>bishopAttacks);
parcelHelpers.export(exports, "rookAttacks", ()=>rookAttacks);
parcelHelpers.export(exports, "queenAttacks", ()=>queenAttacks);
parcelHelpers.export(exports, "attacks", ()=>attacks);
parcelHelpers.export(exports, "ray", ()=>ray);
parcelHelpers.export(exports, "between", ()=>between);
var _utilJs = require("./util.js");
var _squareSetJs = require("./squareSet.js");
const computeRange = (square, deltas)=>{
    let range = (0, _squareSetJs.SquareSet).empty();
    for (const delta of deltas){
        const sq = square + delta;
        if (0 <= sq && sq < 64 && Math.abs((0, _utilJs.squareFile)(square) - (0, _utilJs.squareFile)(sq)) <= 2) range = range.with(sq);
    }
    return range;
};
const tabulate = (f)=>{
    const table = [];
    for(let square = 0; square < 64; square++)table[square] = f(square);
    return table;
};
const KING_ATTACKS = tabulate((sq)=>computeRange(sq, [
        -9,
        -8,
        -7,
        -1,
        1,
        7,
        8,
        9
    ]));
const KNIGHT_ATTACKS = tabulate((sq)=>computeRange(sq, [
        -17,
        -15,
        -10,
        -6,
        6,
        10,
        15,
        17
    ]));
const PAWN_ATTACKS = {
    white: tabulate((sq)=>computeRange(sq, [
            7,
            9
        ])),
    black: tabulate((sq)=>computeRange(sq, [
            -7,
            -9
        ]))
};
const kingAttacks = (square)=>KING_ATTACKS[square];
const knightAttacks = (square)=>KNIGHT_ATTACKS[square];
const pawnAttacks = (color, square)=>PAWN_ATTACKS[color][square];
const FILE_RANGE = tabulate((sq)=>(0, _squareSetJs.SquareSet).fromFile((0, _utilJs.squareFile)(sq)).without(sq));
const RANK_RANGE = tabulate((sq)=>(0, _squareSetJs.SquareSet).fromRank((0, _utilJs.squareRank)(sq)).without(sq));
const DIAG_RANGE = tabulate((sq)=>{
    const diag = new (0, _squareSetJs.SquareSet)(134480385, 2151686160);
    const shift = 8 * ((0, _utilJs.squareRank)(sq) - (0, _utilJs.squareFile)(sq));
    return (shift >= 0 ? diag.shl64(shift) : diag.shr64(-shift)).without(sq);
});
const ANTI_DIAG_RANGE = tabulate((sq)=>{
    const diag = new (0, _squareSetJs.SquareSet)(270549120, 16909320);
    const shift = 8 * ((0, _utilJs.squareRank)(sq) + (0, _utilJs.squareFile)(sq) - 7);
    return (shift >= 0 ? diag.shl64(shift) : diag.shr64(-shift)).without(sq);
});
const hyperbola = (bit, range, occupied)=>{
    let forward = occupied.intersect(range);
    let reverse = forward.bswap64(); // Assumes no more than 1 bit per rank
    forward = forward.minus64(bit);
    reverse = reverse.minus64(bit.bswap64());
    return forward.xor(reverse.bswap64()).intersect(range);
};
const fileAttacks = (square, occupied)=>hyperbola((0, _squareSetJs.SquareSet).fromSquare(square), FILE_RANGE[square], occupied);
const rankAttacks = (square, occupied)=>{
    const range = RANK_RANGE[square];
    let forward = occupied.intersect(range);
    let reverse = forward.rbit64();
    forward = forward.minus64((0, _squareSetJs.SquareSet).fromSquare(square));
    reverse = reverse.minus64((0, _squareSetJs.SquareSet).fromSquare(63 - square));
    return forward.xor(reverse.rbit64()).intersect(range);
};
const bishopAttacks = (square, occupied)=>{
    const bit = (0, _squareSetJs.SquareSet).fromSquare(square);
    return hyperbola(bit, DIAG_RANGE[square], occupied).xor(hyperbola(bit, ANTI_DIAG_RANGE[square], occupied));
};
const rookAttacks = (square, occupied)=>fileAttacks(square, occupied).xor(rankAttacks(square, occupied));
const queenAttacks = (square, occupied)=>bishopAttacks(square, occupied).xor(rookAttacks(square, occupied));
const attacks = (piece, square, occupied)=>{
    switch(piece.role){
        case "pawn":
            return pawnAttacks(piece.color, square);
        case "knight":
            return knightAttacks(square);
        case "bishop":
            return bishopAttacks(square, occupied);
        case "rook":
            return rookAttacks(square, occupied);
        case "queen":
            return queenAttacks(square, occupied);
        case "king":
            return kingAttacks(square);
    }
};
const ray = (a, b)=>{
    const other = (0, _squareSetJs.SquareSet).fromSquare(b);
    if (RANK_RANGE[a].intersects(other)) return RANK_RANGE[a].with(a);
    if (ANTI_DIAG_RANGE[a].intersects(other)) return ANTI_DIAG_RANGE[a].with(a);
    if (DIAG_RANGE[a].intersects(other)) return DIAG_RANGE[a].with(a);
    if (FILE_RANGE[a].intersects(other)) return FILE_RANGE[a].with(a);
    return (0, _squareSetJs.SquareSet).empty();
};
const between = (a, b)=>ray(a, b).intersect((0, _squareSetJs.SquareSet).full().shl64(a).xor((0, _squareSetJs.SquareSet).full().shl64(b))).withoutFirst();

},{"./util.js":"65Nkv","./squareSet.js":"cjFYL","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"ah4O5":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
/**
 * Piece positions on a board.
 *
 * Properties are sets of squares, like `board.occupied` for all occupied
 * squares, `board[color]` for all pieces of that color, and `board[role]`
 * for all pieces of that role. When modifying the properties directly, take
 * care to keep them consistent.
 */ parcelHelpers.export(exports, "Board", ()=>Board);
parcelHelpers.export(exports, "boardEquals", ()=>boardEquals);
var _typesJs = require("./types.js");
var _squareSetJs = require("./squareSet.js");
class Board {
    constructor(){}
    static default() {
        const board = new Board();
        board.reset();
        return board;
    }
    /**
     * Resets all pieces to the default starting position for standard chess.
     */ reset() {
        this.occupied = new (0, _squareSetJs.SquareSet)(0xffff, 4294901760);
        this.promoted = (0, _squareSetJs.SquareSet).empty();
        this.white = new (0, _squareSetJs.SquareSet)(0xffff, 0);
        this.black = new (0, _squareSetJs.SquareSet)(0, 4294901760);
        this.pawn = new (0, _squareSetJs.SquareSet)(0xff00, 16711680);
        this.knight = new (0, _squareSetJs.SquareSet)(0x42, 1107296256);
        this.bishop = new (0, _squareSetJs.SquareSet)(0x24, 603979776);
        this.rook = new (0, _squareSetJs.SquareSet)(0x81, 2164260864);
        this.queen = new (0, _squareSetJs.SquareSet)(0x8, 134217728);
        this.king = new (0, _squareSetJs.SquareSet)(0x10, 268435456);
    }
    static empty() {
        const board = new Board();
        board.clear();
        return board;
    }
    clear() {
        this.occupied = (0, _squareSetJs.SquareSet).empty();
        this.promoted = (0, _squareSetJs.SquareSet).empty();
        for (const color of (0, _typesJs.COLORS))this[color] = (0, _squareSetJs.SquareSet).empty();
        for (const role of (0, _typesJs.ROLES))this[role] = (0, _squareSetJs.SquareSet).empty();
    }
    clone() {
        const board = new Board();
        board.occupied = this.occupied;
        board.promoted = this.promoted;
        for (const color of (0, _typesJs.COLORS))board[color] = this[color];
        for (const role of (0, _typesJs.ROLES))board[role] = this[role];
        return board;
    }
    getColor(square) {
        if (this.white.has(square)) return "white";
        if (this.black.has(square)) return "black";
        return;
    }
    getRole(square) {
        for (const role of (0, _typesJs.ROLES)){
            if (this[role].has(square)) return role;
        }
        return;
    }
    get(square) {
        const color = this.getColor(square);
        if (!color) return;
        const role = this.getRole(square);
        const promoted = this.promoted.has(square);
        return {
            color,
            role,
            promoted
        };
    }
    /**
     * Removes and returns the piece from the given `square`, if any.
     */ take(square) {
        const piece = this.get(square);
        if (piece) {
            this.occupied = this.occupied.without(square);
            this[piece.color] = this[piece.color].without(square);
            this[piece.role] = this[piece.role].without(square);
            if (piece.promoted) this.promoted = this.promoted.without(square);
        }
        return piece;
    }
    /**
     * Put `piece` onto `square`, potentially replacing an existing piece.
     * Returns the existing piece, if any.
     */ set(square, piece) {
        const old = this.take(square);
        this.occupied = this.occupied.with(square);
        this[piece.color] = this[piece.color].with(square);
        this[piece.role] = this[piece.role].with(square);
        if (piece.promoted) this.promoted = this.promoted.with(square);
        return old;
    }
    has(square) {
        return this.occupied.has(square);
    }
    *[Symbol.iterator]() {
        for (const square of this.occupied)yield [
            square,
            this.get(square)
        ];
    }
    pieces(color, role) {
        return this[color].intersect(this[role]);
    }
    rooksAndQueens() {
        return this.rook.union(this.queen);
    }
    bishopsAndQueens() {
        return this.bishop.union(this.queen);
    }
    /**
     * Finds the unique king of the given `color`, if any.
     */ kingOf(color) {
        return this.pieces(color, "king").singleSquare();
    }
}
const boardEquals = (left, right)=>left.white.equals(right.white) && left.promoted.equals(right.promoted) && (0, _typesJs.ROLES).every((role)=>left[role].equals(right[role]));

},{"./types.js":"5rlGs","./squareSet.js":"cjFYL","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"bwhtM":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "MaterialSide", ()=>MaterialSide);
parcelHelpers.export(exports, "Material", ()=>Material);
parcelHelpers.export(exports, "RemainingChecks", ()=>RemainingChecks);
parcelHelpers.export(exports, "defaultSetup", ()=>defaultSetup);
parcelHelpers.export(exports, "setupClone", ()=>setupClone);
parcelHelpers.export(exports, "setupEquals", ()=>setupEquals);
var _typesJs = require("./types.js");
var _squareSetJs = require("./squareSet.js");
var _boardJs = require("./board.js");
class MaterialSide {
    constructor(){}
    static empty() {
        const m = new MaterialSide();
        for (const role of (0, _typesJs.ROLES))m[role] = 0;
        return m;
    }
    static fromBoard(board, color) {
        const m = new MaterialSide();
        for (const role of (0, _typesJs.ROLES))m[role] = board.pieces(color, role).size();
        return m;
    }
    clone() {
        const m = new MaterialSide();
        for (const role of (0, _typesJs.ROLES))m[role] = this[role];
        return m;
    }
    equals(other) {
        return (0, _typesJs.ROLES).every((role)=>this[role] === other[role]);
    }
    add(other) {
        const m = new MaterialSide();
        for (const role of (0, _typesJs.ROLES))m[role] = this[role] + other[role];
        return m;
    }
    nonEmpty() {
        return (0, _typesJs.ROLES).some((role)=>this[role] > 0);
    }
    isEmpty() {
        return !this.nonEmpty();
    }
    hasPawns() {
        return this.pawn > 0;
    }
    hasNonPawns() {
        return this.knight > 0 || this.bishop > 0 || this.rook > 0 || this.queen > 0 || this.king > 0;
    }
    size() {
        return this.pawn + this.knight + this.bishop + this.rook + this.queen + this.king;
    }
}
class Material {
    constructor(white, black){
        this.white = white;
        this.black = black;
    }
    static empty() {
        return new Material(MaterialSide.empty(), MaterialSide.empty());
    }
    static fromBoard(board) {
        return new Material(MaterialSide.fromBoard(board, "white"), MaterialSide.fromBoard(board, "black"));
    }
    clone() {
        return new Material(this.white.clone(), this.black.clone());
    }
    equals(other) {
        return this.white.equals(other.white) && this.black.equals(other.black);
    }
    add(other) {
        return new Material(this.white.add(other.white), this.black.add(other.black));
    }
    count(role) {
        return this.white[role] + this.black[role];
    }
    size() {
        return this.white.size() + this.black.size();
    }
    isEmpty() {
        return this.white.isEmpty() && this.black.isEmpty();
    }
    nonEmpty() {
        return !this.isEmpty();
    }
    hasPawns() {
        return this.white.hasPawns() || this.black.hasPawns();
    }
    hasNonPawns() {
        return this.white.hasNonPawns() || this.black.hasNonPawns();
    }
}
class RemainingChecks {
    constructor(white, black){
        this.white = white;
        this.black = black;
    }
    static default() {
        return new RemainingChecks(3, 3);
    }
    clone() {
        return new RemainingChecks(this.white, this.black);
    }
    equals(other) {
        return this.white === other.white && this.black === other.black;
    }
}
const defaultSetup = ()=>({
        board: (0, _boardJs.Board).default(),
        pockets: undefined,
        turn: "white",
        unmovedRooks: (0, _squareSetJs.SquareSet).corners(),
        epSquare: undefined,
        remainingChecks: undefined,
        halfmoves: 0,
        fullmoves: 1
    });
const setupClone = (setup)=>{
    var _a, _b;
    return {
        board: setup.board.clone(),
        pockets: (_a = setup.pockets) === null || _a === void 0 ? void 0 : _a.clone(),
        turn: setup.turn,
        unmovedRooks: setup.unmovedRooks,
        epSquare: setup.epSquare,
        remainingChecks: (_b = setup.remainingChecks) === null || _b === void 0 ? void 0 : _b.clone(),
        halfmoves: setup.halfmoves,
        fullmoves: setup.fullmoves
    };
};
const setupEquals = (left, right)=>{
    var _a, _b;
    return (0, _boardJs.boardEquals)(left.board, right.board) && (right.pockets && ((_a = left.pockets) === null || _a === void 0 ? void 0 : _a.equals(right.pockets)) || !left.pockets && !right.pockets) && left.turn === right.turn && left.unmovedRooks.equals(right.unmovedRooks) && left.epSquare === right.epSquare && (right.remainingChecks && ((_b = left.remainingChecks) === null || _b === void 0 ? void 0 : _b.equals(right.remainingChecks)) || !left.remainingChecks && !right.remainingChecks) && left.halfmoves === right.halfmoves && left.fullmoves === right.fullmoves;
};

},{"./types.js":"5rlGs","./squareSet.js":"cjFYL","./board.js":"ah4O5","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"JzZp4":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "IllegalSetup", ()=>IllegalSetup);
parcelHelpers.export(exports, "PositionError", ()=>PositionError);
parcelHelpers.export(exports, "Castles", ()=>Castles);
parcelHelpers.export(exports, "Position", ()=>Position);
parcelHelpers.export(exports, "Chess", ()=>Chess);
parcelHelpers.export(exports, "pseudoDests", ()=>pseudoDests);
parcelHelpers.export(exports, "equalsIgnoreMoves", ()=>equalsIgnoreMoves);
parcelHelpers.export(exports, "castlingSide", ()=>castlingSide);
parcelHelpers.export(exports, "normalizeMove", ()=>normalizeMove);
parcelHelpers.export(exports, "isStandardMaterialSide", ()=>isStandardMaterialSide);
parcelHelpers.export(exports, "isStandardMaterial", ()=>isStandardMaterial);
var _result = require("@badrap/result");
var _typesJs = require("./types.js");
var _squareSetJs = require("./squareSet.js");
var _boardJs = require("./board.js");
var _attacksJs = require("./attacks.js");
var _utilJs = require("./util.js");
var IllegalSetup;
(function(IllegalSetup) {
    IllegalSetup["Empty"] = "ERR_EMPTY";
    IllegalSetup["OppositeCheck"] = "ERR_OPPOSITE_CHECK";
    IllegalSetup["ImpossibleCheck"] = "ERR_IMPOSSIBLE_CHECK";
    IllegalSetup["PawnsOnBackrank"] = "ERR_PAWNS_ON_BACKRANK";
    IllegalSetup["Kings"] = "ERR_KINGS";
    IllegalSetup["Variant"] = "ERR_VARIANT";
})(IllegalSetup || (IllegalSetup = {}));
class PositionError extends Error {
}
const attacksTo = (square, attacker, board, occupied)=>board[attacker].intersect((0, _attacksJs.rookAttacks)(square, occupied).intersect(board.rooksAndQueens()).union((0, _attacksJs.bishopAttacks)(square, occupied).intersect(board.bishopsAndQueens())).union((0, _attacksJs.knightAttacks)(square).intersect(board.knight)).union((0, _attacksJs.kingAttacks)(square).intersect(board.king)).union((0, _attacksJs.pawnAttacks)((0, _utilJs.opposite)(attacker), square).intersect(board.pawn)));
class Castles {
    constructor(){}
    static default() {
        const castles = new Castles();
        castles.unmovedRooks = (0, _squareSetJs.SquareSet).corners();
        castles.rook = {
            white: {
                a: 0,
                h: 7
            },
            black: {
                a: 56,
                h: 63
            }
        };
        castles.path = {
            white: {
                a: new (0, _squareSetJs.SquareSet)(0xe, 0),
                h: new (0, _squareSetJs.SquareSet)(0x60, 0)
            },
            black: {
                a: new (0, _squareSetJs.SquareSet)(0, 0x0e000000),
                h: new (0, _squareSetJs.SquareSet)(0, 0x60000000)
            }
        };
        return castles;
    }
    static empty() {
        const castles = new Castles();
        castles.unmovedRooks = (0, _squareSetJs.SquareSet).empty();
        castles.rook = {
            white: {
                a: undefined,
                h: undefined
            },
            black: {
                a: undefined,
                h: undefined
            }
        };
        castles.path = {
            white: {
                a: (0, _squareSetJs.SquareSet).empty(),
                h: (0, _squareSetJs.SquareSet).empty()
            },
            black: {
                a: (0, _squareSetJs.SquareSet).empty(),
                h: (0, _squareSetJs.SquareSet).empty()
            }
        };
        return castles;
    }
    clone() {
        const castles = new Castles();
        castles.unmovedRooks = this.unmovedRooks;
        castles.rook = {
            white: {
                a: this.rook.white.a,
                h: this.rook.white.h
            },
            black: {
                a: this.rook.black.a,
                h: this.rook.black.h
            }
        };
        castles.path = {
            white: {
                a: this.path.white.a,
                h: this.path.white.h
            },
            black: {
                a: this.path.black.a,
                h: this.path.black.h
            }
        };
        return castles;
    }
    add(color, side, king, rook) {
        const kingTo = (0, _utilJs.kingCastlesTo)(color, side);
        const rookTo = (0, _utilJs.rookCastlesTo)(color, side);
        this.unmovedRooks = this.unmovedRooks.with(rook);
        this.rook[color][side] = rook;
        this.path[color][side] = (0, _attacksJs.between)(rook, rookTo).with(rookTo).union((0, _attacksJs.between)(king, kingTo).with(kingTo)).without(king).without(rook);
    }
    static fromSetup(setup) {
        const castles = Castles.empty();
        const rooks = setup.unmovedRooks.intersect(setup.board.rook);
        for (const color of (0, _typesJs.COLORS)){
            const backrank = (0, _squareSetJs.SquareSet).backrank(color);
            const king = setup.board.kingOf(color);
            if (!(0, _utilJs.defined)(king) || !backrank.has(king)) continue;
            const side = rooks.intersect(setup.board[color]).intersect(backrank);
            const aSide = side.first();
            if ((0, _utilJs.defined)(aSide) && aSide < king) castles.add(color, "a", king, aSide);
            const hSide = side.last();
            if ((0, _utilJs.defined)(hSide) && king < hSide) castles.add(color, "h", king, hSide);
        }
        return castles;
    }
    discardRook(square) {
        if (this.unmovedRooks.has(square)) {
            this.unmovedRooks = this.unmovedRooks.without(square);
            for (const color of (0, _typesJs.COLORS)){
                for (const side of (0, _typesJs.CASTLING_SIDES))if (this.rook[color][side] === square) this.rook[color][side] = undefined;
            }
        }
    }
    discardColor(color) {
        this.unmovedRooks = this.unmovedRooks.diff((0, _squareSetJs.SquareSet).backrank(color));
        this.rook[color].a = undefined;
        this.rook[color].h = undefined;
    }
}
class Position {
    constructor(rules){
        this.rules = rules;
    }
    reset() {
        this.board = (0, _boardJs.Board).default();
        this.pockets = undefined;
        this.turn = "white";
        this.castles = Castles.default();
        this.epSquare = undefined;
        this.remainingChecks = undefined;
        this.halfmoves = 0;
        this.fullmoves = 1;
    }
    setupUnchecked(setup) {
        this.board = setup.board.clone();
        this.board.promoted = (0, _squareSetJs.SquareSet).empty();
        this.pockets = undefined;
        this.turn = setup.turn;
        this.castles = Castles.fromSetup(setup);
        this.epSquare = validEpSquare(this, setup.epSquare);
        this.remainingChecks = undefined;
        this.halfmoves = setup.halfmoves;
        this.fullmoves = setup.fullmoves;
    }
    // When subclassing overwrite at least:
    //
    // - static default()
    // - static fromSetup()
    // - static clone()
    //
    // - dests()
    // - isVariantEnd()
    // - variantOutcome()
    // - hasInsufficientMaterial()
    // - isStandardMaterial()
    kingAttackers(square, attacker, occupied) {
        return attacksTo(square, attacker, this.board, occupied);
    }
    playCaptureAt(square, captured) {
        this.halfmoves = 0;
        if (captured.role === "rook") this.castles.discardRook(square);
        if (this.pockets) this.pockets[(0, _utilJs.opposite)(captured.color)][captured.promoted ? "pawn" : captured.role]++;
    }
    ctx() {
        const variantEnd = this.isVariantEnd();
        const king = this.board.kingOf(this.turn);
        if (!(0, _utilJs.defined)(king)) return {
            king,
            blockers: (0, _squareSetJs.SquareSet).empty(),
            checkers: (0, _squareSetJs.SquareSet).empty(),
            variantEnd,
            mustCapture: false
        };
        const snipers = (0, _attacksJs.rookAttacks)(king, (0, _squareSetJs.SquareSet).empty()).intersect(this.board.rooksAndQueens()).union((0, _attacksJs.bishopAttacks)(king, (0, _squareSetJs.SquareSet).empty()).intersect(this.board.bishopsAndQueens())).intersect(this.board[(0, _utilJs.opposite)(this.turn)]);
        let blockers = (0, _squareSetJs.SquareSet).empty();
        for (const sniper of snipers){
            const b = (0, _attacksJs.between)(king, sniper).intersect(this.board.occupied);
            if (!b.moreThanOne()) blockers = blockers.union(b);
        }
        const checkers = this.kingAttackers(king, (0, _utilJs.opposite)(this.turn), this.board.occupied);
        return {
            king,
            blockers,
            checkers,
            variantEnd,
            mustCapture: false
        };
    }
    clone() {
        var _a, _b;
        const pos = new this.constructor();
        pos.board = this.board.clone();
        pos.pockets = (_a = this.pockets) === null || _a === void 0 ? void 0 : _a.clone();
        pos.turn = this.turn;
        pos.castles = this.castles.clone();
        pos.epSquare = this.epSquare;
        pos.remainingChecks = (_b = this.remainingChecks) === null || _b === void 0 ? void 0 : _b.clone();
        pos.halfmoves = this.halfmoves;
        pos.fullmoves = this.fullmoves;
        return pos;
    }
    validate(opts) {
        if (this.board.occupied.isEmpty()) return (0, _result.Result).err(new PositionError(IllegalSetup.Empty));
        if (this.board.king.size() !== 2) return (0, _result.Result).err(new PositionError(IllegalSetup.Kings));
        if (!(0, _utilJs.defined)(this.board.kingOf(this.turn))) return (0, _result.Result).err(new PositionError(IllegalSetup.Kings));
        const otherKing = this.board.kingOf((0, _utilJs.opposite)(this.turn));
        if (!(0, _utilJs.defined)(otherKing)) return (0, _result.Result).err(new PositionError(IllegalSetup.Kings));
        if (this.kingAttackers(otherKing, this.turn, this.board.occupied).nonEmpty()) return (0, _result.Result).err(new PositionError(IllegalSetup.OppositeCheck));
        if ((0, _squareSetJs.SquareSet).backranks().intersects(this.board.pawn)) return (0, _result.Result).err(new PositionError(IllegalSetup.PawnsOnBackrank));
        return (opts === null || opts === void 0 ? void 0 : opts.ignoreImpossibleCheck) ? (0, _result.Result).ok(undefined) : this.validateCheckers();
    }
    validateCheckers() {
        const ourKing = this.board.kingOf(this.turn);
        if ((0, _utilJs.defined)(ourKing)) {
            const checkers = this.kingAttackers(ourKing, (0, _utilJs.opposite)(this.turn), this.board.occupied);
            if (checkers.nonEmpty()) {
                if ((0, _utilJs.defined)(this.epSquare)) {
                    // The pushed pawn must be the only checker, or it has uncovered
                    // check by a single sliding piece.
                    const pushedTo = this.epSquare ^ 8;
                    const pushedFrom = this.epSquare ^ 24;
                    if (checkers.moreThanOne() || checkers.first() !== pushedTo && this.kingAttackers(ourKing, (0, _utilJs.opposite)(this.turn), this.board.occupied.without(pushedTo).with(pushedFrom)).nonEmpty()) return (0, _result.Result).err(new PositionError(IllegalSetup.ImpossibleCheck));
                } else {
                    // Multiple sliding checkers aligned with king.
                    if (checkers.size() > 2 || checkers.size() === 2 && (0, _attacksJs.ray)(checkers.first(), checkers.last()).has(ourKing)) return (0, _result.Result).err(new PositionError(IllegalSetup.ImpossibleCheck));
                }
            }
        }
        return (0, _result.Result).ok(undefined);
    }
    dropDests(_ctx) {
        return (0, _squareSetJs.SquareSet).empty();
    }
    dests(square, ctx) {
        ctx = ctx || this.ctx();
        if (ctx.variantEnd) return (0, _squareSetJs.SquareSet).empty();
        const piece = this.board.get(square);
        if (!piece || piece.color !== this.turn) return (0, _squareSetJs.SquareSet).empty();
        let pseudo, legal;
        if (piece.role === "pawn") {
            pseudo = (0, _attacksJs.pawnAttacks)(this.turn, square).intersect(this.board[(0, _utilJs.opposite)(this.turn)]);
            const delta = this.turn === "white" ? 8 : -8;
            const step = square + delta;
            if (0 <= step && step < 64 && !this.board.occupied.has(step)) {
                pseudo = pseudo.with(step);
                const canDoubleStep = this.turn === "white" ? square < 16 : square >= 48;
                const doubleStep = step + delta;
                if (canDoubleStep && !this.board.occupied.has(doubleStep)) pseudo = pseudo.with(doubleStep);
            }
            if ((0, _utilJs.defined)(this.epSquare) && canCaptureEp(this, square, ctx)) {
                const pawn = this.epSquare - delta;
                if (ctx.checkers.isEmpty() || ctx.checkers.singleSquare() === pawn) legal = (0, _squareSetJs.SquareSet).fromSquare(this.epSquare);
            }
        } else if (piece.role === "bishop") pseudo = (0, _attacksJs.bishopAttacks)(square, this.board.occupied);
        else if (piece.role === "knight") pseudo = (0, _attacksJs.knightAttacks)(square);
        else if (piece.role === "rook") pseudo = (0, _attacksJs.rookAttacks)(square, this.board.occupied);
        else if (piece.role === "queen") pseudo = (0, _attacksJs.queenAttacks)(square, this.board.occupied);
        else pseudo = (0, _attacksJs.kingAttacks)(square);
        pseudo = pseudo.diff(this.board[this.turn]);
        if ((0, _utilJs.defined)(ctx.king)) {
            if (piece.role === "king") {
                const occ = this.board.occupied.without(square);
                for (const to of pseudo)if (this.kingAttackers(to, (0, _utilJs.opposite)(this.turn), occ).nonEmpty()) pseudo = pseudo.without(to);
                return pseudo.union(castlingDest(this, "a", ctx)).union(castlingDest(this, "h", ctx));
            }
            if (ctx.checkers.nonEmpty()) {
                const checker = ctx.checkers.singleSquare();
                if (!(0, _utilJs.defined)(checker)) return (0, _squareSetJs.SquareSet).empty();
                pseudo = pseudo.intersect((0, _attacksJs.between)(checker, ctx.king).with(checker));
            }
            if (ctx.blockers.has(square)) pseudo = pseudo.intersect((0, _attacksJs.ray)(square, ctx.king));
        }
        if (legal) pseudo = pseudo.union(legal);
        return pseudo;
    }
    isVariantEnd() {
        return false;
    }
    variantOutcome(_ctx) {
        return;
    }
    hasInsufficientMaterial(color) {
        if (this.board[color].intersect(this.board.pawn.union(this.board.rooksAndQueens())).nonEmpty()) return false;
        if (this.board[color].intersects(this.board.knight)) return this.board[color].size() <= 2 && this.board[(0, _utilJs.opposite)(color)].diff(this.board.king).diff(this.board.queen).isEmpty();
        if (this.board[color].intersects(this.board.bishop)) {
            const sameColor = !this.board.bishop.intersects((0, _squareSetJs.SquareSet).darkSquares()) || !this.board.bishop.intersects((0, _squareSetJs.SquareSet).lightSquares());
            return sameColor && this.board.pawn.isEmpty() && this.board.knight.isEmpty();
        }
        return true;
    }
    // The following should be identical in all subclasses
    toSetup() {
        var _a, _b;
        return {
            board: this.board.clone(),
            pockets: (_a = this.pockets) === null || _a === void 0 ? void 0 : _a.clone(),
            turn: this.turn,
            unmovedRooks: this.castles.unmovedRooks,
            epSquare: legalEpSquare(this),
            remainingChecks: (_b = this.remainingChecks) === null || _b === void 0 ? void 0 : _b.clone(),
            halfmoves: Math.min(this.halfmoves, 150),
            fullmoves: Math.min(Math.max(this.fullmoves, 1), 9999)
        };
    }
    isInsufficientMaterial() {
        return (0, _typesJs.COLORS).every((color)=>this.hasInsufficientMaterial(color));
    }
    hasDests(ctx) {
        ctx = ctx || this.ctx();
        for (const square of this.board[this.turn]){
            if (this.dests(square, ctx).nonEmpty()) return true;
        }
        return this.dropDests(ctx).nonEmpty();
    }
    isLegal(move, ctx) {
        if ((0, _typesJs.isDrop)(move)) {
            if (!this.pockets || this.pockets[this.turn][move.role] <= 0) return false;
            if (move.role === "pawn" && (0, _squareSetJs.SquareSet).backranks().has(move.to)) return false;
            return this.dropDests(ctx).has(move.to);
        } else {
            if (move.promotion === "pawn") return false;
            if (move.promotion === "king" && this.rules !== "antichess") return false;
            if (!!move.promotion !== (this.board.pawn.has(move.from) && (0, _squareSetJs.SquareSet).backranks().has(move.to))) return false;
            const dests = this.dests(move.from, ctx);
            return dests.has(move.to) || dests.has(normalizeMove(this, move).to);
        }
    }
    isCheck() {
        const king = this.board.kingOf(this.turn);
        return (0, _utilJs.defined)(king) && this.kingAttackers(king, (0, _utilJs.opposite)(this.turn), this.board.occupied).nonEmpty();
    }
    isEnd(ctx) {
        if (ctx ? ctx.variantEnd : this.isVariantEnd()) return true;
        return this.isInsufficientMaterial() || !this.hasDests(ctx);
    }
    isCheckmate(ctx) {
        ctx = ctx || this.ctx();
        return !ctx.variantEnd && ctx.checkers.nonEmpty() && !this.hasDests(ctx);
    }
    isStalemate(ctx) {
        ctx = ctx || this.ctx();
        return !ctx.variantEnd && ctx.checkers.isEmpty() && !this.hasDests(ctx);
    }
    outcome(ctx) {
        const variantOutcome = this.variantOutcome(ctx);
        if (variantOutcome) return variantOutcome;
        ctx = ctx || this.ctx();
        if (this.isCheckmate(ctx)) return {
            winner: (0, _utilJs.opposite)(this.turn)
        };
        else if (this.isInsufficientMaterial() || this.isStalemate(ctx)) return {
            winner: undefined
        };
        else return;
    }
    allDests(ctx) {
        ctx = ctx || this.ctx();
        const d = new Map();
        if (ctx.variantEnd) return d;
        for (const square of this.board[this.turn])d.set(square, this.dests(square, ctx));
        return d;
    }
    play(move) {
        const turn = this.turn;
        const epSquare = this.epSquare;
        const castling = castlingSide(this, move);
        this.epSquare = undefined;
        this.halfmoves += 1;
        if (turn === "black") this.fullmoves += 1;
        this.turn = (0, _utilJs.opposite)(turn);
        if ((0, _typesJs.isDrop)(move)) {
            this.board.set(move.to, {
                role: move.role,
                color: turn
            });
            if (this.pockets) this.pockets[turn][move.role]--;
            if (move.role === "pawn") this.halfmoves = 0;
        } else {
            const piece = this.board.take(move.from);
            if (!piece) return;
            let epCapture;
            if (piece.role === "pawn") {
                this.halfmoves = 0;
                if (move.to === epSquare) epCapture = this.board.take(move.to + (turn === "white" ? -8 : 8));
                const delta = move.from - move.to;
                if (Math.abs(delta) === 16 && 8 <= move.from && move.from <= 55) this.epSquare = move.from + move.to >> 1;
                if (move.promotion) {
                    piece.role = move.promotion;
                    piece.promoted = !!this.pockets;
                }
            } else if (piece.role === "rook") this.castles.discardRook(move.from);
            else if (piece.role === "king") {
                if (castling) {
                    const rookFrom = this.castles.rook[turn][castling];
                    if ((0, _utilJs.defined)(rookFrom)) {
                        const rook = this.board.take(rookFrom);
                        this.board.set((0, _utilJs.kingCastlesTo)(turn, castling), piece);
                        if (rook) this.board.set((0, _utilJs.rookCastlesTo)(turn, castling), rook);
                    }
                }
                this.castles.discardColor(turn);
            }
            if (!castling) {
                const capture = this.board.set(move.to, piece) || epCapture;
                if (capture) this.playCaptureAt(move.to, capture);
            }
        }
        if (this.remainingChecks) {
            if (this.isCheck()) this.remainingChecks[turn] = Math.max(this.remainingChecks[turn] - 1, 0);
        }
    }
}
class Chess extends Position {
    constructor(){
        super("chess");
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
}
const validEpSquare = (pos, square)=>{
    if (!(0, _utilJs.defined)(square)) return;
    const epRank = pos.turn === "white" ? 5 : 2;
    const forward = pos.turn === "white" ? 8 : -8;
    if ((0, _utilJs.squareRank)(square) !== epRank) return;
    if (pos.board.occupied.has(square + forward)) return;
    const pawn = square - forward;
    if (!pos.board.pawn.has(pawn) || !pos.board[(0, _utilJs.opposite)(pos.turn)].has(pawn)) return;
    return square;
};
const legalEpSquare = (pos)=>{
    if (!(0, _utilJs.defined)(pos.epSquare)) return;
    const ctx = pos.ctx();
    const ourPawns = pos.board.pieces(pos.turn, "pawn");
    const candidates = ourPawns.intersect((0, _attacksJs.pawnAttacks)((0, _utilJs.opposite)(pos.turn), pos.epSquare));
    for (const candidate of candidates){
        if (pos.dests(candidate, ctx).has(pos.epSquare)) return pos.epSquare;
    }
    return;
};
const canCaptureEp = (pos, pawn, ctx)=>{
    if (!(0, _utilJs.defined)(pos.epSquare)) return false;
    if (!(0, _attacksJs.pawnAttacks)(pos.turn, pawn).has(pos.epSquare)) return false;
    if (!(0, _utilJs.defined)(ctx.king)) return true;
    const captured = pos.epSquare + (pos.turn === "white" ? -8 : 8);
    const occupied = pos.board.occupied.toggle(pawn).toggle(pos.epSquare).toggle(captured);
    return !pos.kingAttackers(ctx.king, (0, _utilJs.opposite)(pos.turn), occupied).intersects(occupied);
};
const castlingDest = (pos, side, ctx)=>{
    if (!(0, _utilJs.defined)(ctx.king) || ctx.checkers.nonEmpty()) return (0, _squareSetJs.SquareSet).empty();
    const rook = pos.castles.rook[pos.turn][side];
    if (!(0, _utilJs.defined)(rook)) return (0, _squareSetJs.SquareSet).empty();
    if (pos.castles.path[pos.turn][side].intersects(pos.board.occupied)) return (0, _squareSetJs.SquareSet).empty();
    const kingTo = (0, _utilJs.kingCastlesTo)(pos.turn, side);
    const kingPath = (0, _attacksJs.between)(ctx.king, kingTo);
    const occ = pos.board.occupied.without(ctx.king);
    for (const sq of kingPath){
        if (pos.kingAttackers(sq, (0, _utilJs.opposite)(pos.turn), occ).nonEmpty()) return (0, _squareSetJs.SquareSet).empty();
    }
    const rookTo = (0, _utilJs.rookCastlesTo)(pos.turn, side);
    const after = pos.board.occupied.toggle(ctx.king).toggle(rook).toggle(rookTo);
    if (pos.kingAttackers(kingTo, (0, _utilJs.opposite)(pos.turn), after).nonEmpty()) return (0, _squareSetJs.SquareSet).empty();
    return (0, _squareSetJs.SquareSet).fromSquare(rook);
};
const pseudoDests = (pos, square, ctx)=>{
    if (ctx.variantEnd) return (0, _squareSetJs.SquareSet).empty();
    const piece = pos.board.get(square);
    if (!piece || piece.color !== pos.turn) return (0, _squareSetJs.SquareSet).empty();
    let pseudo = (0, _attacksJs.attacks)(piece, square, pos.board.occupied);
    if (piece.role === "pawn") {
        let captureTargets = pos.board[(0, _utilJs.opposite)(pos.turn)];
        if ((0, _utilJs.defined)(pos.epSquare)) captureTargets = captureTargets.with(pos.epSquare);
        pseudo = pseudo.intersect(captureTargets);
        const delta = pos.turn === "white" ? 8 : -8;
        const step = square + delta;
        if (0 <= step && step < 64 && !pos.board.occupied.has(step)) {
            pseudo = pseudo.with(step);
            const canDoubleStep = pos.turn === "white" ? square < 16 : square >= 48;
            const doubleStep = step + delta;
            if (canDoubleStep && !pos.board.occupied.has(doubleStep)) pseudo = pseudo.with(doubleStep);
        }
        return pseudo;
    } else pseudo = pseudo.diff(pos.board[pos.turn]);
    if (square === ctx.king) return pseudo.union(castlingDest(pos, "a", ctx)).union(castlingDest(pos, "h", ctx));
    else return pseudo;
};
const equalsIgnoreMoves = (left, right)=>{
    var _a, _b;
    return left.rules === right.rules && (0, _boardJs.boardEquals)(left.board, right.board) && (right.pockets && ((_a = left.pockets) === null || _a === void 0 ? void 0 : _a.equals(right.pockets)) || !left.pockets && !right.pockets) && left.turn === right.turn && left.castles.unmovedRooks.equals(right.castles.unmovedRooks) && legalEpSquare(left) === legalEpSquare(right) && (right.remainingChecks && ((_b = left.remainingChecks) === null || _b === void 0 ? void 0 : _b.equals(right.remainingChecks)) || !left.remainingChecks && !right.remainingChecks);
};
const castlingSide = (pos, move)=>{
    if ((0, _typesJs.isDrop)(move)) return;
    const delta = move.to - move.from;
    if (Math.abs(delta) !== 2 && !pos.board[pos.turn].has(move.to)) return;
    if (!pos.board.king.has(move.from)) return;
    return delta > 0 ? "h" : "a";
};
const normalizeMove = (pos, move)=>{
    const side = castlingSide(pos, move);
    if (!side) return move;
    const rookFrom = pos.castles.rook[pos.turn][side];
    return {
        from: move.from,
        to: (0, _utilJs.defined)(rookFrom) ? rookFrom : move.to
    };
};
const isStandardMaterialSide = (board, color)=>{
    const promoted = Math.max(board.pieces(color, "queen").size() - 1, 0) + Math.max(board.pieces(color, "rook").size() - 2, 0) + Math.max(board.pieces(color, "knight").size() - 2, 0) + Math.max(board.pieces(color, "bishop").intersect((0, _squareSetJs.SquareSet).lightSquares()).size() - 1, 0) + Math.max(board.pieces(color, "bishop").intersect((0, _squareSetJs.SquareSet).darkSquares()).size() - 1, 0);
    return board.pieces(color, "pawn").size() + promoted <= 8;
};
const isStandardMaterial = (pos)=>(0, _typesJs.COLORS).every((color)=>isStandardMaterialSide(pos.board, color));

},{"@badrap/result":"jmsn1","./types.js":"5rlGs","./squareSet.js":"cjFYL","./board.js":"ah4O5","./attacks.js":"cGrrr","./util.js":"65Nkv","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"jmsn1":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "Result", ()=>n);
function r(r, n) {
    r.prototype = Object.create(n.prototype), r.prototype.constructor = r, t(r, n);
}
function t(r, n) {
    return t = Object.setPrototypeOf ? Object.setPrototypeOf.bind() : function(r, t) {
        return r.__proto__ = t, r;
    }, t(r, n);
}
var n, e = /*#__PURE__*/ function() {
    function r() {}
    var t = r.prototype;
    return t.unwrap = function(r, t) {
        var e = this._chain(function(t) {
            return n.ok(r ? r(t) : t);
        }, function(r) {
            return t ? n.ok(t(r)) : n.err(r);
        });
        if (e.isErr) throw e.error;
        return e.value;
    }, t.map = function(r, t) {
        return this._chain(function(t) {
            return n.ok(r(t));
        }, function(r) {
            return n.err(t ? t(r) : r);
        });
    }, t.chain = function(r, t) {
        return this._chain(r, t || function(r) {
            return n.err(r);
        });
    }, r;
}(), o = /*#__PURE__*/ function(t) {
    function n(r) {
        var n;
        return (n = t.call(this) || this).value = void 0, n.isOk = !0, n.isErr = !1, n.value = r, n;
    }
    return r(n, t), n.prototype._chain = function(r, t) {
        return r(this.value);
    }, n;
}(e), u = /*#__PURE__*/ function(t) {
    function n(r) {
        var n;
        return (n = t.call(this) || this).error = void 0, n.isOk = !1, n.isErr = !0, n.error = r, n;
    }
    return r(n, t), n.prototype._chain = function(r, t) {
        return t(this.error);
    }, n;
}(e);
!function(r) {
    r.ok = function(r) {
        return new o(r);
    }, r.err = function(r) {
        return new u(r || new Error);
    }, r.all = function(t) {
        if (Array.isArray(t)) {
            for(var n = [], e = 0; e < t.length; e++){
                var o = t[e];
                if (o.isErr) return o;
                n.push(o.value);
            }
            return r.ok(n);
        }
        for(var u = {}, i = Object.keys(t), c = 0; c < i.length; c++){
            var f = t[i[c]];
            if (f.isErr) return f;
            u[i[c]] = f.value;
        }
        return r.ok(u);
    };
}(n || (n = {}));

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"cVRYS":[function(require,module,exports) {
/**
 * Compatibility with other libraries.
 *
 * Convert between the formats used by chessops,
 * [chessground](https://github.com/lichess-org/chessground),
 * and [scalachess](https://github.com/lichess-org/scalachess).
 *
 * @packageDocumentation
 */ var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "chessgroundDests", ()=>chessgroundDests);
parcelHelpers.export(exports, "chessgroundMove", ()=>chessgroundMove);
parcelHelpers.export(exports, "scalachessCharPair", ()=>scalachessCharPair);
parcelHelpers.export(exports, "lichessRules", ()=>lichessRules);
parcelHelpers.export(exports, "lichessVariant", ()=>lichessVariant);
var _typesJs = require("./types.js");
var _utilJs = require("./util.js");
const chessgroundDests = (pos, opts)=>{
    const result = new Map();
    const ctx = pos.ctx();
    for (const [from, squares] of pos.allDests(ctx))if (squares.nonEmpty()) {
        const d = Array.from(squares, (0, _utilJs.makeSquare));
        if (!(opts === null || opts === void 0 ? void 0 : opts.chess960) && from === ctx.king && (0, _utilJs.squareFile)(from) === 4) {
            // Chessground needs both types of castling dests and filters based on
            // a rookCastles setting.
            if (squares.has(0)) d.push("c1");
            else if (squares.has(56)) d.push("c8");
            if (squares.has(7)) d.push("g1");
            else if (squares.has(63)) d.push("g8");
        }
        result.set((0, _utilJs.makeSquare)(from), d);
    }
    return result;
};
const chessgroundMove = (move)=>(0, _typesJs.isDrop)(move) ? [
        (0, _utilJs.makeSquare)(move.to)
    ] : [
        (0, _utilJs.makeSquare)(move.from),
        (0, _utilJs.makeSquare)(move.to)
    ];
const scalachessCharPair = (move)=>(0, _typesJs.isDrop)(move) ? String.fromCharCode(35 + move.to, 139 + [
        "queen",
        "rook",
        "bishop",
        "knight",
        "pawn"
    ].indexOf(move.role)) : String.fromCharCode(35 + move.from, move.promotion ? 99 + 8 * [
        "queen",
        "rook",
        "bishop",
        "knight",
        "king"
    ].indexOf(move.promotion) + (0, _utilJs.squareFile)(move.to) : 35 + move.to);
const lichessRules = (variant)=>{
    switch(variant){
        case "standard":
        case "chess960":
        case "fromPosition":
            return "chess";
        case "threeCheck":
            return "3check";
        case "kingOfTheHill":
            return "kingofthehill";
        case "racingKings":
            return "racingkings";
        default:
            return variant;
    }
};
const lichessVariant = (rules)=>{
    switch(rules){
        case "chess":
            return "standard";
        case "3check":
            return "threeCheck";
        case "kingofthehill":
            return "kingOfTheHill";
        case "racingkings":
            return "racingKings";
        default:
            return rules;
    }
};

},{"./types.js":"5rlGs","./util.js":"65Nkv","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"duQ3j":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "INITIAL_BOARD_FEN", ()=>INITIAL_BOARD_FEN);
parcelHelpers.export(exports, "INITIAL_EPD", ()=>INITIAL_EPD);
parcelHelpers.export(exports, "INITIAL_FEN", ()=>INITIAL_FEN);
parcelHelpers.export(exports, "EMPTY_BOARD_FEN", ()=>EMPTY_BOARD_FEN);
parcelHelpers.export(exports, "EMPTY_EPD", ()=>EMPTY_EPD);
parcelHelpers.export(exports, "EMPTY_FEN", ()=>EMPTY_FEN);
parcelHelpers.export(exports, "InvalidFen", ()=>InvalidFen);
parcelHelpers.export(exports, "FenError", ()=>FenError);
parcelHelpers.export(exports, "parseBoardFen", ()=>parseBoardFen);
parcelHelpers.export(exports, "parsePockets", ()=>parsePockets);
parcelHelpers.export(exports, "parseCastlingFen", ()=>parseCastlingFen);
parcelHelpers.export(exports, "parseRemainingChecks", ()=>parseRemainingChecks);
parcelHelpers.export(exports, "parseFen", ()=>parseFen);
parcelHelpers.export(exports, "parsePiece", ()=>parsePiece);
parcelHelpers.export(exports, "makePiece", ()=>makePiece);
parcelHelpers.export(exports, "makeBoardFen", ()=>makeBoardFen);
parcelHelpers.export(exports, "makePocket", ()=>makePocket);
parcelHelpers.export(exports, "makePockets", ()=>makePockets);
parcelHelpers.export(exports, "makeCastlingFen", ()=>makeCastlingFen);
parcelHelpers.export(exports, "makeRemainingChecks", ()=>makeRemainingChecks);
parcelHelpers.export(exports, "makeFen", ()=>makeFen);
var _result = require("@badrap/result");
var _typesJs = require("./types.js");
var _squareSetJs = require("./squareSet.js");
var _boardJs = require("./board.js");
var _setupJs = require("./setup.js");
var _utilJs = require("./util.js");
const INITIAL_BOARD_FEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
const INITIAL_EPD = INITIAL_BOARD_FEN + " w KQkq -";
const INITIAL_FEN = INITIAL_EPD + " 0 1";
const EMPTY_BOARD_FEN = "8/8/8/8/8/8/8/8";
const EMPTY_EPD = EMPTY_BOARD_FEN + " w - -";
const EMPTY_FEN = EMPTY_EPD + " 0 1";
var InvalidFen;
(function(InvalidFen) {
    InvalidFen["Fen"] = "ERR_FEN";
    InvalidFen["Board"] = "ERR_BOARD";
    InvalidFen["Pockets"] = "ERR_POCKETS";
    InvalidFen["Turn"] = "ERR_TURN";
    InvalidFen["Castling"] = "ERR_CASTLING";
    InvalidFen["EpSquare"] = "ERR_EP_SQUARE";
    InvalidFen["RemainingChecks"] = "ERR_REMAINING_CHECKS";
    InvalidFen["Halfmoves"] = "ERR_HALFMOVES";
    InvalidFen["Fullmoves"] = "ERR_FULLMOVES";
})(InvalidFen || (InvalidFen = {}));
class FenError extends Error {
}
const nthIndexOf = (haystack, needle, n)=>{
    let index = haystack.indexOf(needle);
    while(n-- > 0){
        if (index === -1) break;
        index = haystack.indexOf(needle, index + needle.length);
    }
    return index;
};
const parseSmallUint = (str)=>/^\d{1,4}$/.test(str) ? parseInt(str, 10) : undefined;
const charToPiece = (ch)=>{
    const role = (0, _utilJs.charToRole)(ch);
    return role && {
        role,
        color: ch.toLowerCase() === ch ? "black" : "white"
    };
};
const parseBoardFen = (boardPart)=>{
    const board = (0, _boardJs.Board).empty();
    let rank = 7;
    let file = 0;
    for(let i = 0; i < boardPart.length; i++){
        const c = boardPart[i];
        if (c === "/" && file === 8) {
            file = 0;
            rank--;
        } else {
            const step = parseInt(c, 10);
            if (step > 0) file += step;
            else {
                if (file >= 8 || rank < 0) return (0, _result.Result).err(new FenError(InvalidFen.Board));
                const square = file + rank * 8;
                const piece = charToPiece(c);
                if (!piece) return (0, _result.Result).err(new FenError(InvalidFen.Board));
                if (boardPart[i + 1] === "~") {
                    piece.promoted = true;
                    i++;
                }
                board.set(square, piece);
                file++;
            }
        }
    }
    if (rank !== 0 || file !== 8) return (0, _result.Result).err(new FenError(InvalidFen.Board));
    return (0, _result.Result).ok(board);
};
const parsePockets = (pocketPart)=>{
    if (pocketPart.length > 64) return (0, _result.Result).err(new FenError(InvalidFen.Pockets));
    const pockets = (0, _setupJs.Material).empty();
    for (const c of pocketPart){
        const piece = charToPiece(c);
        if (!piece) return (0, _result.Result).err(new FenError(InvalidFen.Pockets));
        pockets[piece.color][piece.role]++;
    }
    return (0, _result.Result).ok(pockets);
};
const parseCastlingFen = (board, castlingPart)=>{
    let unmovedRooks = (0, _squareSetJs.SquareSet).empty();
    if (castlingPart === "-") return (0, _result.Result).ok(unmovedRooks);
    for (const c of castlingPart){
        const lower = c.toLowerCase();
        const color = c === lower ? "black" : "white";
        const backrank = (0, _squareSetJs.SquareSet).backrank(color).intersect(board[color]);
        let candidates;
        if (lower === "q") candidates = backrank;
        else if (lower === "k") candidates = backrank.reversed();
        else if ("a" <= lower && lower <= "h") candidates = (0, _squareSetJs.SquareSet).fromFile(lower.charCodeAt(0) - "a".charCodeAt(0)).intersect(backrank);
        else return (0, _result.Result).err(new FenError(InvalidFen.Castling));
        for (const square of candidates){
            if (board.king.has(square)) break;
            if (board.rook.has(square)) {
                unmovedRooks = unmovedRooks.with(square);
                break;
            }
        }
    }
    if ((0, _typesJs.COLORS).some((color)=>(0, _squareSetJs.SquareSet).backrank(color).intersect(unmovedRooks).size() > 2)) return (0, _result.Result).err(new FenError(InvalidFen.Castling));
    return (0, _result.Result).ok(unmovedRooks);
};
const parseRemainingChecks = (part)=>{
    const parts = part.split("+");
    if (parts.length === 3 && parts[0] === "") {
        const white = parseSmallUint(parts[1]);
        const black = parseSmallUint(parts[2]);
        if (!(0, _utilJs.defined)(white) || white > 3 || !(0, _utilJs.defined)(black) || black > 3) return (0, _result.Result).err(new FenError(InvalidFen.RemainingChecks));
        return (0, _result.Result).ok(new (0, _setupJs.RemainingChecks)(3 - white, 3 - black));
    } else if (parts.length === 2) {
        const white = parseSmallUint(parts[0]);
        const black = parseSmallUint(parts[1]);
        if (!(0, _utilJs.defined)(white) || white > 3 || !(0, _utilJs.defined)(black) || black > 3) return (0, _result.Result).err(new FenError(InvalidFen.RemainingChecks));
        return (0, _result.Result).ok(new (0, _setupJs.RemainingChecks)(white, black));
    } else return (0, _result.Result).err(new FenError(InvalidFen.RemainingChecks));
};
const parseFen = (fen)=>{
    const parts = fen.split(/[\s_]+/);
    const boardPart = parts.shift();
    // Board and pockets
    let board;
    let pockets = (0, _result.Result).ok(undefined);
    if (boardPart.endsWith("]")) {
        const pocketStart = boardPart.indexOf("[");
        if (pocketStart === -1) return (0, _result.Result).err(new FenError(InvalidFen.Fen));
        board = parseBoardFen(boardPart.slice(0, pocketStart));
        pockets = parsePockets(boardPart.slice(pocketStart + 1, -1));
    } else {
        const pocketStart = nthIndexOf(boardPart, "/", 7);
        if (pocketStart === -1) board = parseBoardFen(boardPart);
        else {
            board = parseBoardFen(boardPart.slice(0, pocketStart));
            pockets = parsePockets(boardPart.slice(pocketStart + 1));
        }
    }
    // Turn
    let turn;
    const turnPart = parts.shift();
    if (!(0, _utilJs.defined)(turnPart) || turnPart === "w") turn = "white";
    else if (turnPart === "b") turn = "black";
    else return (0, _result.Result).err(new FenError(InvalidFen.Turn));
    return board.chain((board)=>{
        // Castling
        const castlingPart = parts.shift();
        const unmovedRooks = (0, _utilJs.defined)(castlingPart) ? parseCastlingFen(board, castlingPart) : (0, _result.Result).ok((0, _squareSetJs.SquareSet).empty());
        // En passant square
        const epPart = parts.shift();
        let epSquare;
        if ((0, _utilJs.defined)(epPart) && epPart !== "-") {
            epSquare = (0, _utilJs.parseSquare)(epPart);
            if (!(0, _utilJs.defined)(epSquare)) return (0, _result.Result).err(new FenError(InvalidFen.EpSquare));
        }
        // Halfmoves or remaining checks
        let halfmovePart = parts.shift();
        let earlyRemainingChecks;
        if ((0, _utilJs.defined)(halfmovePart) && halfmovePart.includes("+")) {
            earlyRemainingChecks = parseRemainingChecks(halfmovePart);
            halfmovePart = parts.shift();
        }
        const halfmoves = (0, _utilJs.defined)(halfmovePart) ? parseSmallUint(halfmovePart) : 0;
        if (!(0, _utilJs.defined)(halfmoves)) return (0, _result.Result).err(new FenError(InvalidFen.Halfmoves));
        const fullmovesPart = parts.shift();
        const fullmoves = (0, _utilJs.defined)(fullmovesPart) ? parseSmallUint(fullmovesPart) : 1;
        if (!(0, _utilJs.defined)(fullmoves)) return (0, _result.Result).err(new FenError(InvalidFen.Fullmoves));
        const remainingChecksPart = parts.shift();
        let remainingChecks = (0, _result.Result).ok(undefined);
        if ((0, _utilJs.defined)(remainingChecksPart)) {
            if ((0, _utilJs.defined)(earlyRemainingChecks)) return (0, _result.Result).err(new FenError(InvalidFen.RemainingChecks));
            remainingChecks = parseRemainingChecks(remainingChecksPart);
        } else if ((0, _utilJs.defined)(earlyRemainingChecks)) remainingChecks = earlyRemainingChecks;
        if (parts.length > 0) return (0, _result.Result).err(new FenError(InvalidFen.Fen));
        return pockets.chain((pockets)=>unmovedRooks.chain((unmovedRooks)=>remainingChecks.map((remainingChecks)=>{
                    return {
                        board,
                        pockets,
                        turn,
                        unmovedRooks,
                        remainingChecks,
                        epSquare,
                        halfmoves,
                        fullmoves: Math.max(1, fullmoves)
                    };
                })));
    });
};
const parsePiece = (str)=>{
    if (!str) return;
    const piece = charToPiece(str[0]);
    if (!piece) return;
    if (str.length === 2 && str[1] === "~") piece.promoted = true;
    else if (str.length > 1) return;
    return piece;
};
const makePiece = (piece)=>{
    let r = (0, _utilJs.roleToChar)(piece.role);
    if (piece.color === "white") r = r.toUpperCase();
    if (piece.promoted) r += "~";
    return r;
};
const makeBoardFen = (board)=>{
    let fen = "";
    let empty = 0;
    for(let rank = 7; rank >= 0; rank--)for(let file = 0; file < 8; file++){
        const square = file + rank * 8;
        const piece = board.get(square);
        if (!piece) empty++;
        else {
            if (empty > 0) {
                fen += empty;
                empty = 0;
            }
            fen += makePiece(piece);
        }
        if (file === 7) {
            if (empty > 0) {
                fen += empty;
                empty = 0;
            }
            if (rank !== 0) fen += "/";
        }
    }
    return fen;
};
const makePocket = (material)=>(0, _typesJs.ROLES).map((role)=>(0, _utilJs.roleToChar)(role).repeat(material[role])).join("");
const makePockets = (pocket)=>makePocket(pocket.white).toUpperCase() + makePocket(pocket.black);
const makeCastlingFen = (board, unmovedRooks)=>{
    let fen = "";
    for (const color of (0, _typesJs.COLORS)){
        const backrank = (0, _squareSetJs.SquareSet).backrank(color);
        let king = board.kingOf(color);
        if ((0, _utilJs.defined)(king) && !backrank.has(king)) king = undefined;
        const candidates = board.pieces(color, "rook").intersect(backrank);
        for (const rook of unmovedRooks.intersect(candidates).reversed()){
            if (rook === candidates.first() && (0, _utilJs.defined)(king) && rook < king) fen += color === "white" ? "Q" : "q";
            else if (rook === candidates.last() && (0, _utilJs.defined)(king) && king < rook) fen += color === "white" ? "K" : "k";
            else {
                const file = (0, _typesJs.FILE_NAMES)[(0, _utilJs.squareFile)(rook)];
                fen += color === "white" ? file.toUpperCase() : file;
            }
        }
    }
    return fen || "-";
};
const makeRemainingChecks = (checks)=>`${checks.white}+${checks.black}`;
const makeFen = (setup, opts)=>[
        makeBoardFen(setup.board) + (setup.pockets ? `[${makePockets(setup.pockets)}]` : ""),
        setup.turn[0],
        makeCastlingFen(setup.board, setup.unmovedRooks),
        (0, _utilJs.defined)(setup.epSquare) ? (0, _utilJs.makeSquare)(setup.epSquare) : "-",
        ...setup.remainingChecks ? [
            makeRemainingChecks(setup.remainingChecks)
        ] : [],
        ...(opts === null || opts === void 0 ? void 0 : opts.epd) ? [] : [
            Math.max(0, Math.min(setup.halfmoves, 9999)),
            Math.max(1, Math.min(setup.fullmoves, 9999))
        ]
    ].join(" ");

},{"@badrap/result":"jmsn1","./types.js":"5rlGs","./squareSet.js":"cjFYL","./board.js":"ah4O5","./setup.js":"bwhtM","./util.js":"65Nkv","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"kFVKK":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "makeSanAndPlay", ()=>makeSanAndPlay);
parcelHelpers.export(exports, "makeSanVariation", ()=>makeSanVariation);
parcelHelpers.export(exports, "makeSan", ()=>makeSan);
parcelHelpers.export(exports, "parseSan", ()=>parseSan);
var _typesJs = require("./types.js");
var _utilJs = require("./util.js");
var _squareSetJs = require("./squareSet.js");
var _attacksJs = require("./attacks.js");
const makeSanWithoutSuffix = (pos, move)=>{
    let san = "";
    if ((0, _typesJs.isDrop)(move)) {
        if (move.role !== "pawn") san = (0, _utilJs.roleToChar)(move.role).toUpperCase();
        san += "@" + (0, _utilJs.makeSquare)(move.to);
    } else {
        const role = pos.board.getRole(move.from);
        if (!role) return "--";
        if (role === "king" && (pos.board[pos.turn].has(move.to) || Math.abs(move.to - move.from) === 2)) san = move.to > move.from ? "O-O" : "O-O-O";
        else {
            const capture = pos.board.occupied.has(move.to) || role === "pawn" && (0, _utilJs.squareFile)(move.from) !== (0, _utilJs.squareFile)(move.to);
            if (role !== "pawn") {
                san = (0, _utilJs.roleToChar)(role).toUpperCase();
                // Disambiguation
                let others;
                if (role === "king") others = (0, _attacksJs.kingAttacks)(move.to).intersect(pos.board.king);
                else if (role === "queen") others = (0, _attacksJs.queenAttacks)(move.to, pos.board.occupied).intersect(pos.board.queen);
                else if (role === "rook") others = (0, _attacksJs.rookAttacks)(move.to, pos.board.occupied).intersect(pos.board.rook);
                else if (role === "bishop") others = (0, _attacksJs.bishopAttacks)(move.to, pos.board.occupied).intersect(pos.board.bishop);
                else others = (0, _attacksJs.knightAttacks)(move.to).intersect(pos.board.knight);
                others = others.intersect(pos.board[pos.turn]).without(move.from);
                if (others.nonEmpty()) {
                    const ctx = pos.ctx();
                    for (const from of others)if (!pos.dests(from, ctx).has(move.to)) others = others.without(from);
                    if (others.nonEmpty()) {
                        let row = false;
                        let column = others.intersects((0, _squareSetJs.SquareSet).fromRank((0, _utilJs.squareRank)(move.from)));
                        if (others.intersects((0, _squareSetJs.SquareSet).fromFile((0, _utilJs.squareFile)(move.from)))) row = true;
                        else column = true;
                        if (column) san += (0, _typesJs.FILE_NAMES)[(0, _utilJs.squareFile)(move.from)];
                        if (row) san += (0, _typesJs.RANK_NAMES)[(0, _utilJs.squareRank)(move.from)];
                    }
                }
            } else if (capture) san = (0, _typesJs.FILE_NAMES)[(0, _utilJs.squareFile)(move.from)];
            if (capture) san += "x";
            san += (0, _utilJs.makeSquare)(move.to);
            if (move.promotion) san += "=" + (0, _utilJs.roleToChar)(move.promotion).toUpperCase();
        }
    }
    return san;
};
const makeSanAndPlay = (pos, move)=>{
    var _a;
    const san = makeSanWithoutSuffix(pos, move);
    pos.play(move);
    if ((_a = pos.outcome()) === null || _a === void 0 ? void 0 : _a.winner) return san + "#";
    if (pos.isCheck()) return san + "+";
    return san;
};
const makeSanVariation = (pos, variation)=>{
    var _a;
    pos = pos.clone();
    const line = [];
    for(let i = 0; i < variation.length; i++){
        if (i !== 0) line.push(" ");
        if (pos.turn === "white") line.push(pos.fullmoves, ". ");
        else if (i === 0) line.push(pos.fullmoves, "... ");
        const san = makeSanWithoutSuffix(pos, variation[i]);
        pos.play(variation[i]);
        line.push(san);
        if (san === "--") return line.join("");
        if (i === variation.length - 1 && ((_a = pos.outcome()) === null || _a === void 0 ? void 0 : _a.winner)) line.push("#");
        else if (pos.isCheck()) line.push("+");
    }
    return line.join("");
};
const makeSan = (pos, move)=>makeSanAndPlay(pos.clone(), move);
const parseSan = (pos, san)=>{
    const ctx = pos.ctx();
    // Normal move
    const match = san.match(/^([NBRQK])?([a-h])?([1-8])?[-x]?([a-h][1-8])(?:=?([nbrqkNBRQK]))?[+#]?$/);
    if (!match) {
        // Castling
        let castlingSide;
        if (san === "O-O" || san === "O-O+" || san === "O-O#") castlingSide = "h";
        else if (san === "O-O-O" || san === "O-O-O+" || san === "O-O-O#") castlingSide = "a";
        if (castlingSide) {
            const rook = pos.castles.rook[pos.turn][castlingSide];
            if (!(0, _utilJs.defined)(ctx.king) || !(0, _utilJs.defined)(rook) || !pos.dests(ctx.king, ctx).has(rook)) return;
            return {
                from: ctx.king,
                to: rook
            };
        }
        // Drop
        const match = san.match(/^([pnbrqkPNBRQK])?@([a-h][1-8])[+#]?$/);
        if (!match) return;
        const move = {
            role: match[1] ? (0, _utilJs.charToRole)(match[1]) : "pawn",
            to: (0, _utilJs.parseSquare)(match[2])
        };
        return pos.isLegal(move, ctx) ? move : undefined;
    }
    const role = match[1] ? (0, _utilJs.charToRole)(match[1]) : "pawn";
    const to = (0, _utilJs.parseSquare)(match[4]);
    const promotion = match[5] ? (0, _utilJs.charToRole)(match[5]) : undefined;
    if (!!promotion !== (role === "pawn" && (0, _squareSetJs.SquareSet).backranks().has(to))) return;
    if (promotion === "king" && pos.rules !== "antichess") return;
    let candidates = pos.board.pieces(pos.turn, role);
    if (role === "pawn" && !match[2]) candidates = candidates.intersect((0, _squareSetJs.SquareSet).fromFile((0, _utilJs.squareFile)(to)));
    else if (match[2]) candidates = candidates.intersect((0, _squareSetJs.SquareSet).fromFile(match[2].charCodeAt(0) - "a".charCodeAt(0)));
    if (match[3]) candidates = candidates.intersect((0, _squareSetJs.SquareSet).fromRank(match[3].charCodeAt(0) - "1".charCodeAt(0)));
    // Optimization: Reduce set of candidates
    const pawnAdvance = role === "pawn" ? (0, _squareSetJs.SquareSet).fromFile((0, _utilJs.squareFile)(to)) : (0, _squareSetJs.SquareSet).empty();
    candidates = candidates.intersect(pawnAdvance.union((0, _attacksJs.attacks)({
        color: (0, _utilJs.opposite)(pos.turn),
        role
    }, to, pos.board.occupied)));
    // Check uniqueness and legality
    let from;
    for (const candidate of candidates)if (pos.dests(candidate, ctx).has(to)) {
        if ((0, _utilJs.defined)(from)) return; // Ambiguous
        from = candidate;
    }
    if (!(0, _utilJs.defined)(from)) return; // Illegal
    return {
        from,
        to,
        promotion
    };
};

},{"./types.js":"5rlGs","./util.js":"65Nkv","./squareSet.js":"cjFYL","./attacks.js":"cGrrr","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"7ItNn":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "Position", ()=>(0, _chessJs.Position));
parcelHelpers.export(exports, "PositionError", ()=>(0, _chessJs.PositionError));
parcelHelpers.export(exports, "IllegalSetup", ()=>(0, _chessJs.IllegalSetup));
parcelHelpers.export(exports, "Chess", ()=>(0, _chessJs.Chess));
parcelHelpers.export(exports, "Castles", ()=>(0, _chessJs.Castles));
parcelHelpers.export(exports, "equalsIgnoreMoves", ()=>(0, _chessJs.equalsIgnoreMoves));
parcelHelpers.export(exports, "castlingSide", ()=>(0, _chessJs.castlingSide));
parcelHelpers.export(exports, "normalizeMove", ()=>(0, _chessJs.normalizeMove));
parcelHelpers.export(exports, "Crazyhouse", ()=>Crazyhouse);
parcelHelpers.export(exports, "Atomic", ()=>Atomic);
parcelHelpers.export(exports, "Antichess", ()=>Antichess);
parcelHelpers.export(exports, "KingOfTheHill", ()=>KingOfTheHill);
parcelHelpers.export(exports, "ThreeCheck", ()=>ThreeCheck);
parcelHelpers.export(exports, "RacingKings", ()=>RacingKings);
parcelHelpers.export(exports, "Horde", ()=>Horde);
parcelHelpers.export(exports, "defaultPosition", ()=>defaultPosition);
parcelHelpers.export(exports, "setupPosition", ()=>setupPosition);
parcelHelpers.export(exports, "isStandardMaterial", ()=>isStandardMaterial);
var _result = require("@badrap/result");
var _typesJs = require("./types.js");
var _utilJs = require("./util.js");
var _attacksJs = require("./attacks.js");
var _squareSetJs = require("./squareSet.js");
var _boardJs = require("./board.js");
var _setupJs = require("./setup.js");
var _chessJs = require("./chess.js");
class Crazyhouse extends (0, _chessJs.Position) {
    constructor(){
        super("crazyhouse");
    }
    reset() {
        super.reset();
        this.pockets = (0, _setupJs.Material).empty();
    }
    setupUnchecked(setup) {
        super.setupUnchecked(setup);
        this.board.promoted = setup.board.promoted.intersect(setup.board.occupied).diff(setup.board.king).diff(setup.board.pawn);
        this.pockets = setup.pockets ? setup.pockets.clone() : (0, _setupJs.Material).empty();
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    validate(opts) {
        return super.validate(opts).chain((_)=>{
            var _a, _b;
            if ((_a = this.pockets) === null || _a === void 0 ? void 0 : _a.count("king")) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Kings));
            if ((((_b = this.pockets) === null || _b === void 0 ? void 0 : _b.size()) || 0) + this.board.occupied.size() > 64) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Variant));
            return (0, _result.Result).ok(undefined);
        });
    }
    hasInsufficientMaterial(color) {
        // No material can leave the game, but we can easily check this for
        // custom positions.
        if (!this.pockets) return super.hasInsufficientMaterial(color);
        return this.board.occupied.size() + this.pockets.size() <= 3 && this.board.pawn.isEmpty() && this.board.promoted.isEmpty() && this.board.rooksAndQueens().isEmpty() && this.pockets.count("pawn") <= 0 && this.pockets.count("rook") <= 0 && this.pockets.count("queen") <= 0;
    }
    dropDests(ctx) {
        var _a, _b;
        const mask = this.board.occupied.complement().intersect(((_a = this.pockets) === null || _a === void 0 ? void 0 : _a[this.turn].hasNonPawns()) ? (0, _squareSetJs.SquareSet).full() : ((_b = this.pockets) === null || _b === void 0 ? void 0 : _b[this.turn].hasPawns()) ? (0, _squareSetJs.SquareSet).backranks().complement() : (0, _squareSetJs.SquareSet).empty());
        ctx = ctx || this.ctx();
        if ((0, _utilJs.defined)(ctx.king) && ctx.checkers.nonEmpty()) {
            const checker = ctx.checkers.singleSquare();
            if (!(0, _utilJs.defined)(checker)) return (0, _squareSetJs.SquareSet).empty();
            return mask.intersect((0, _attacksJs.between)(checker, ctx.king));
        } else return mask;
    }
}
class Atomic extends (0, _chessJs.Position) {
    constructor(){
        super("atomic");
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    validate(opts) {
        // Like chess, but allow our king to be missing.
        if (this.board.occupied.isEmpty()) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Empty));
        if (this.board.king.size() > 2) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Kings));
        const otherKing = this.board.kingOf((0, _utilJs.opposite)(this.turn));
        if (!(0, _utilJs.defined)(otherKing)) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Kings));
        if (this.kingAttackers(otherKing, this.turn, this.board.occupied).nonEmpty()) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).OppositeCheck));
        if ((0, _squareSetJs.SquareSet).backranks().intersects(this.board.pawn)) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).PawnsOnBackrank));
        return (opts === null || opts === void 0 ? void 0 : opts.ignoreImpossibleCheck) ? (0, _result.Result).ok(undefined) : this.validateCheckers();
    }
    validateCheckers() {
        // Other king moving away can cause many checks to be given at the
        // same time. Not checking details or even that the king is close enough.
        return (0, _utilJs.defined)(this.epSquare) ? (0, _result.Result).ok(undefined) : super.validateCheckers();
    }
    kingAttackers(square, attacker, occupied) {
        const attackerKings = this.board.pieces(attacker, "king");
        if (attackerKings.isEmpty() || (0, _attacksJs.kingAttacks)(square).intersects(attackerKings)) return (0, _squareSetJs.SquareSet).empty();
        return super.kingAttackers(square, attacker, occupied);
    }
    playCaptureAt(square, captured) {
        super.playCaptureAt(square, captured);
        this.board.take(square);
        for (const explode of (0, _attacksJs.kingAttacks)(square).intersect(this.board.occupied).diff(this.board.pawn)){
            const piece = this.board.take(explode);
            if ((piece === null || piece === void 0 ? void 0 : piece.role) === "rook") this.castles.discardRook(explode);
            if ((piece === null || piece === void 0 ? void 0 : piece.role) === "king") this.castles.discardColor(piece.color);
        }
    }
    hasInsufficientMaterial(color) {
        // Remaining material does not matter if the enemy king is already
        // exploded.
        if (this.board.pieces((0, _utilJs.opposite)(color), "king").isEmpty()) return false;
        // Bare king cannot mate.
        if (this.board[color].diff(this.board.king).isEmpty()) return true;
        // As long as the enemy king is not alone, there is always a chance their
        // own pieces explode next to it.
        if (this.board[(0, _utilJs.opposite)(color)].diff(this.board.king).nonEmpty()) {
            // Unless there are only bishops that cannot explode each other.
            if (this.board.occupied.equals(this.board.bishop.union(this.board.king))) {
                if (!this.board.bishop.intersect(this.board.white).intersects((0, _squareSetJs.SquareSet).darkSquares())) return !this.board.bishop.intersect(this.board.black).intersects((0, _squareSetJs.SquareSet).lightSquares());
                if (!this.board.bishop.intersect(this.board.white).intersects((0, _squareSetJs.SquareSet).lightSquares())) return !this.board.bishop.intersect(this.board.black).intersects((0, _squareSetJs.SquareSet).darkSquares());
            }
            return false;
        }
        // Queen or pawn (future queen) can give mate against bare king.
        if (this.board.queen.nonEmpty() || this.board.pawn.nonEmpty()) return false;
        // Single knight, bishop or rook cannot mate against bare king.
        if (this.board.knight.union(this.board.bishop).union(this.board.rook).size() === 1) return true;
        // If only knights, more than two are required to mate bare king.
        if (this.board.occupied.equals(this.board.knight.union(this.board.king))) return this.board.knight.size() <= 2;
        return false;
    }
    dests(square, ctx) {
        ctx = ctx || this.ctx();
        let dests = (0, _squareSetJs.SquareSet).empty();
        for (const to of (0, _chessJs.pseudoDests)(this, square, ctx)){
            const after = this.clone();
            after.play({
                from: square,
                to
            });
            const ourKing = after.board.kingOf(this.turn);
            if ((0, _utilJs.defined)(ourKing) && (!(0, _utilJs.defined)(after.board.kingOf(after.turn)) || after.kingAttackers(ourKing, after.turn, after.board.occupied).isEmpty())) dests = dests.with(to);
        }
        return dests;
    }
    isVariantEnd() {
        return !!this.variantOutcome();
    }
    variantOutcome(_ctx) {
        for (const color of (0, _typesJs.COLORS)){
            if (this.board.pieces(color, "king").isEmpty()) return {
                winner: (0, _utilJs.opposite)(color)
            };
        }
        return;
    }
}
class Antichess extends (0, _chessJs.Position) {
    constructor(){
        super("antichess");
    }
    reset() {
        super.reset();
        this.castles = (0, _chessJs.Castles).empty();
    }
    setupUnchecked(setup) {
        super.setupUnchecked(setup);
        this.castles = (0, _chessJs.Castles).empty();
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    validate(_opts) {
        if (this.board.occupied.isEmpty()) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Empty));
        if ((0, _squareSetJs.SquareSet).backranks().intersects(this.board.pawn)) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).PawnsOnBackrank));
        return (0, _result.Result).ok(undefined);
    }
    kingAttackers(_square, _attacker, _occupied) {
        return (0, _squareSetJs.SquareSet).empty();
    }
    ctx() {
        const ctx = super.ctx();
        if ((0, _utilJs.defined)(this.epSquare) && (0, _attacksJs.pawnAttacks)((0, _utilJs.opposite)(this.turn), this.epSquare).intersects(this.board.pieces(this.turn, "pawn"))) {
            ctx.mustCapture = true;
            return ctx;
        }
        const enemy = this.board[(0, _utilJs.opposite)(this.turn)];
        for (const from of this.board[this.turn])if ((0, _chessJs.pseudoDests)(this, from, ctx).intersects(enemy)) {
            ctx.mustCapture = true;
            return ctx;
        }
        return ctx;
    }
    dests(square, ctx) {
        ctx = ctx || this.ctx();
        const dests = (0, _chessJs.pseudoDests)(this, square, ctx);
        const enemy = this.board[(0, _utilJs.opposite)(this.turn)];
        return dests.intersect(ctx.mustCapture ? (0, _utilJs.defined)(this.epSquare) && this.board.getRole(square) === "pawn" ? enemy.with(this.epSquare) : enemy : (0, _squareSetJs.SquareSet).full());
    }
    hasInsufficientMaterial(color) {
        if (this.board[color].isEmpty()) return false;
        if (this.board[(0, _utilJs.opposite)(color)].isEmpty()) return true;
        if (this.board.occupied.equals(this.board.bishop)) {
            const weSomeOnLight = this.board[color].intersects((0, _squareSetJs.SquareSet).lightSquares());
            const weSomeOnDark = this.board[color].intersects((0, _squareSetJs.SquareSet).darkSquares());
            const theyAllOnDark = this.board[(0, _utilJs.opposite)(color)].isDisjoint((0, _squareSetJs.SquareSet).lightSquares());
            const theyAllOnLight = this.board[(0, _utilJs.opposite)(color)].isDisjoint((0, _squareSetJs.SquareSet).darkSquares());
            return weSomeOnLight && theyAllOnDark || weSomeOnDark && theyAllOnLight;
        }
        if (this.board.occupied.equals(this.board.knight) && this.board.occupied.size() === 2) return this.board.white.intersects((0, _squareSetJs.SquareSet).lightSquares()) !== this.board.black.intersects((0, _squareSetJs.SquareSet).darkSquares()) !== (this.turn === color);
        return false;
    }
    isVariantEnd() {
        return this.board[this.turn].isEmpty();
    }
    variantOutcome(ctx) {
        ctx = ctx || this.ctx();
        if (ctx.variantEnd || this.isStalemate(ctx)) return {
            winner: this.turn
        };
        return;
    }
}
class KingOfTheHill extends (0, _chessJs.Position) {
    constructor(){
        super("kingofthehill");
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    hasInsufficientMaterial(_color) {
        return false;
    }
    isVariantEnd() {
        return this.board.king.intersects((0, _squareSetJs.SquareSet).center());
    }
    variantOutcome(_ctx) {
        for (const color of (0, _typesJs.COLORS)){
            if (this.board.pieces(color, "king").intersects((0, _squareSetJs.SquareSet).center())) return {
                winner: color
            };
        }
        return;
    }
}
class ThreeCheck extends (0, _chessJs.Position) {
    constructor(){
        super("3check");
    }
    reset() {
        super.reset();
        this.remainingChecks = (0, _setupJs.RemainingChecks).default();
    }
    setupUnchecked(setup) {
        var _a;
        super.setupUnchecked(setup);
        this.remainingChecks = ((_a = setup.remainingChecks) === null || _a === void 0 ? void 0 : _a.clone()) || (0, _setupJs.RemainingChecks).default();
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    hasInsufficientMaterial(color) {
        return this.board.pieces(color, "king").equals(this.board[color]);
    }
    isVariantEnd() {
        return !!this.remainingChecks && (this.remainingChecks.white <= 0 || this.remainingChecks.black <= 0);
    }
    variantOutcome(_ctx) {
        if (this.remainingChecks) for (const color of (0, _typesJs.COLORS)){
            if (this.remainingChecks[color] <= 0) return {
                winner: color
            };
        }
        return;
    }
}
const racingKingsBoard = ()=>{
    const board = (0, _boardJs.Board).empty();
    board.occupied = new (0, _squareSetJs.SquareSet)(0xffff, 0);
    board.promoted = (0, _squareSetJs.SquareSet).empty();
    board.white = new (0, _squareSetJs.SquareSet)(0xf0f0, 0);
    board.black = new (0, _squareSetJs.SquareSet)(0x0f0f, 0);
    board.pawn = (0, _squareSetJs.SquareSet).empty();
    board.knight = new (0, _squareSetJs.SquareSet)(0x1818, 0);
    board.bishop = new (0, _squareSetJs.SquareSet)(0x2424, 0);
    board.rook = new (0, _squareSetJs.SquareSet)(0x4242, 0);
    board.queen = new (0, _squareSetJs.SquareSet)(0x0081, 0);
    board.king = new (0, _squareSetJs.SquareSet)(0x8100, 0);
    return board;
};
class RacingKings extends (0, _chessJs.Position) {
    constructor(){
        super("racingkings");
    }
    reset() {
        this.board = racingKingsBoard();
        this.pockets = undefined;
        this.turn = "white";
        this.castles = (0, _chessJs.Castles).empty();
        this.epSquare = undefined;
        this.remainingChecks = undefined;
        this.halfmoves = 0;
        this.fullmoves = 1;
    }
    setupUnchecked(setup) {
        super.setupUnchecked(setup);
        this.castles = (0, _chessJs.Castles).empty();
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    validate(opts) {
        if (this.isCheck() || this.board.pawn.nonEmpty()) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Variant));
        return super.validate(opts);
    }
    dests(square, ctx) {
        ctx = ctx || this.ctx();
        // Kings cannot give check.
        if (square === ctx.king) return super.dests(square, ctx);
        // Do not allow giving check.
        let dests = (0, _squareSetJs.SquareSet).empty();
        for (const to of super.dests(square, ctx)){
            // Valid, because there are no promotions (or even pawns).
            const move = {
                from: square,
                to
            };
            const after = this.clone();
            after.play(move);
            if (!after.isCheck()) dests = dests.with(to);
        }
        return dests;
    }
    hasInsufficientMaterial(_color) {
        return false;
    }
    isVariantEnd() {
        const goal = (0, _squareSetJs.SquareSet).fromRank(7);
        const inGoal = this.board.king.intersect(goal);
        if (inGoal.isEmpty()) return false;
        if (this.turn === "white" || inGoal.intersects(this.board.black)) return true;
        // White has reached the backrank. Check if black can catch up.
        const blackKing = this.board.kingOf("black");
        if ((0, _utilJs.defined)(blackKing)) {
            const occ = this.board.occupied.without(blackKing);
            for (const target of (0, _attacksJs.kingAttacks)(blackKing).intersect(goal).diff(this.board.black)){
                if (this.kingAttackers(target, "white", occ).isEmpty()) return false;
            }
        }
        return true;
    }
    variantOutcome(ctx) {
        if (ctx ? !ctx.variantEnd : !this.isVariantEnd()) return;
        const goal = (0, _squareSetJs.SquareSet).fromRank(7);
        const blackInGoal = this.board.pieces("black", "king").intersects(goal);
        const whiteInGoal = this.board.pieces("white", "king").intersects(goal);
        if (blackInGoal && !whiteInGoal) return {
            winner: "black"
        };
        if (whiteInGoal && !blackInGoal) return {
            winner: "white"
        };
        return {
            winner: undefined
        };
    }
}
const hordeBoard = ()=>{
    const board = (0, _boardJs.Board).empty();
    board.occupied = new (0, _squareSetJs.SquareSet)(4294967295, 4294901862);
    board.promoted = (0, _squareSetJs.SquareSet).empty();
    board.white = new (0, _squareSetJs.SquareSet)(4294967295, 102);
    board.black = new (0, _squareSetJs.SquareSet)(0, 4294901760);
    board.pawn = new (0, _squareSetJs.SquareSet)(4294967295, 16711782);
    board.knight = new (0, _squareSetJs.SquareSet)(0, 1107296256);
    board.bishop = new (0, _squareSetJs.SquareSet)(0, 603979776);
    board.rook = new (0, _squareSetJs.SquareSet)(0, 2164260864);
    board.queen = new (0, _squareSetJs.SquareSet)(0, 134217728);
    board.king = new (0, _squareSetJs.SquareSet)(0, 268435456);
    return board;
};
class Horde extends (0, _chessJs.Position) {
    constructor(){
        super("horde");
    }
    reset() {
        this.board = hordeBoard();
        this.pockets = undefined;
        this.turn = "white";
        this.castles = (0, _chessJs.Castles).default();
        this.castles.discardColor("white");
        this.epSquare = undefined;
        this.remainingChecks = undefined;
        this.halfmoves = 0;
        this.fullmoves = 1;
    }
    static default() {
        const pos = new this();
        pos.reset();
        return pos;
    }
    static fromSetup(setup, opts) {
        const pos = new this();
        pos.setupUnchecked(setup);
        return pos.validate(opts).map((_)=>pos);
    }
    clone() {
        return super.clone();
    }
    validate(opts) {
        if (this.board.occupied.isEmpty()) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Empty));
        if (this.board.king.size() !== 1) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Kings));
        const otherKing = this.board.kingOf((0, _utilJs.opposite)(this.turn));
        if ((0, _utilJs.defined)(otherKing) && this.kingAttackers(otherKing, this.turn, this.board.occupied).nonEmpty()) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).OppositeCheck));
        for (const color of (0, _typesJs.COLORS)){
            const backranks = this.board.pieces(color, "king").isEmpty() ? (0, _squareSetJs.SquareSet).backrank((0, _utilJs.opposite)(color)) : (0, _squareSetJs.SquareSet).backranks();
            if (this.board.pieces(color, "pawn").intersects(backranks)) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).PawnsOnBackrank));
        }
        return (opts === null || opts === void 0 ? void 0 : opts.ignoreImpossibleCheck) ? (0, _result.Result).ok(undefined) : this.validateCheckers();
    }
    hasInsufficientMaterial(color) {
        // The side with the king can always win by capturing the horde.
        if (this.board.pieces(color, "king").nonEmpty()) return false;
        const oppositeSquareColor = (squareColor)=>squareColor === "light" ? "dark" : "light";
        const coloredSquares = (squareColor)=>squareColor === "light" ? (0, _squareSetJs.SquareSet).lightSquares() : (0, _squareSetJs.SquareSet).darkSquares();
        const hasBishopPair = (side)=>{
            const bishops = this.board.pieces(side, "bishop");
            return bishops.intersects((0, _squareSetJs.SquareSet).darkSquares()) && bishops.intersects((0, _squareSetJs.SquareSet).lightSquares());
        };
        // By this point: color is the horde.
        // Based on
        // https://github.com/stevepapazis/horde-insufficient-material-tests.
        const horde = (0, _setupJs.MaterialSide).fromBoard(this.board, color);
        const hordeBishops = (squareColor)=>coloredSquares(squareColor).intersect(this.board.pieces(color, "bishop")).size();
        const hordeBishopColor = hordeBishops("light") >= 1 ? "light" : "dark";
        const hordeNum = horde.pawn + horde.knight + horde.rook + horde.queen + Math.min(hordeBishops("dark"), 2) + Math.min(hordeBishops("light"), 2);
        const pieces = (0, _setupJs.MaterialSide).fromBoard(this.board, (0, _utilJs.opposite)(color));
        const piecesBishops = (squareColor)=>coloredSquares(squareColor).intersect(this.board.pieces((0, _utilJs.opposite)(color), "bishop")).size();
        const piecesNum = pieces.size();
        const piecesOfRoleNot = (piece)=>piecesNum - piece;
        if (hordeNum === 0) return true;
        if (hordeNum >= 4) // Four or more pieces can always deliver mate.
        return false;
        if ((horde.pawn >= 1 || horde.queen >= 1) && hordeNum >= 2) // Pawns/queens are never insufficient material when paired with any other
        // piece (a pawn promotes to a queen and delivers mate).
        return false;
        if (horde.rook >= 1 && hordeNum >= 2) {
            // A rook is insufficient material only when it is paired with a bishop
            // against a lone king. The horde can mate in any other case.
            // A rook on A1 and a bishop on C3 mate a king on B1 when there is a
            // friendly pawn/opposite-color-bishop/rook/queen on C2.
            // A rook on B8 and a bishop C3 mate a king on A1 when there is a friendly
            // knight on A2.
            if (!(hordeNum === 2 && horde.rook === 1 && horde.bishop === 1 && piecesOfRoleNot(piecesBishops(hordeBishopColor)) === 1)) return false;
        }
        if (hordeNum === 1) {
            if (piecesNum === 1) // A lone piece cannot mate a lone king.
            return true;
            else if (horde.queen === 1) // The horde has a lone queen.
            // A lone queen mates a king on A1 bounded by:
            //  -- a pawn/rook on A2
            //  -- two same color bishops on A2, B1
            // We ignore every other mating case, since it can be reduced to
            // the two previous cases (e.g. a black pawn on A2 and a black
            // bishop on B1).
            return !(pieces.pawn >= 1 || pieces.rook >= 1 || piecesBishops("light") >= 2 || piecesBishops("dark") >= 2);
            else if (horde.pawn === 1) {
                // Promote the pawn to a queen or a knight and check whether white
                // can mate.
                const pawnSquare = this.board.pieces(color, "pawn").last();
                const promoteToQueen = this.clone();
                promoteToQueen.board.set(pawnSquare, {
                    color,
                    role: "queen"
                });
                const promoteToKnight = this.clone();
                promoteToKnight.board.set(pawnSquare, {
                    color,
                    role: "knight"
                });
                return promoteToQueen.hasInsufficientMaterial(color) && promoteToKnight.hasInsufficientMaterial(color);
            } else if (horde.rook === 1) // A lone rook mates a king on A8 bounded by a pawn/rook on A7 and a
            // pawn/knight on B7. We ignore every other case, since it can be
            // reduced to the two previous cases.
            // (e.g. three pawns on A7, B7, C7)
            return !(pieces.pawn >= 2 || pieces.rook >= 1 && pieces.pawn >= 1 || pieces.rook >= 1 && pieces.knight >= 1 || pieces.pawn >= 1 && pieces.knight >= 1);
            else if (horde.bishop === 1) // The horde has a lone bishop.
            return !// The king can be mated on A1 if there is a pawn/opposite-color-bishop
            // on A2 and an opposite-color-bishop on B1.
            // If black has two or more pawns, white gets the benefit of the doubt;
            // there is an outside chance that white promotes its pawns to
            // opposite-color-bishops and selfmates theirself.
            // Every other case that the king is mated by the bishop requires that
            // black has two pawns or two opposite-color-bishop or a pawn and an
            // opposite-color-bishop.
            // For example a king on A3 can be mated if there is
            // a pawn/opposite-color-bishop on A4, a pawn/opposite-color-bishop on
            // B3, a pawn/bishop/rook/queen on A2 and any other piece on B2.
            (piecesBishops(oppositeSquareColor(hordeBishopColor)) >= 2 || piecesBishops(oppositeSquareColor(hordeBishopColor)) >= 1 && pieces.pawn >= 1 || pieces.pawn >= 2);
            else if (horde.knight === 1) // The horde has a lone knight.
            return !// The king on A1 can be smother mated by a knight on C2 if there is
            // a pawn/knight/bishop on B2, a knight/rook on B1 and any other piece
            // on A2.
            // Moreover, when black has four or more pieces and two of them are
            // pawns, black can promote their pawns and selfmate theirself.
            (piecesNum >= 4 && (pieces.knight >= 2 || pieces.pawn >= 2 || pieces.rook >= 1 && pieces.knight >= 1 || pieces.rook >= 1 && pieces.bishop >= 1 || pieces.knight >= 1 && pieces.bishop >= 1 || pieces.rook >= 1 && pieces.pawn >= 1 || pieces.knight >= 1 && pieces.pawn >= 1 || pieces.bishop >= 1 && pieces.pawn >= 1 || hasBishopPair((0, _utilJs.opposite)(color)) && pieces.pawn >= 1) && (piecesBishops("dark") < 2 || piecesOfRoleNot(piecesBishops("dark")) >= 3) && (piecesBishops("light") < 2 || piecesOfRoleNot(piecesBishops("light")) >= 3));
        // By this point, we only need to deal with white's minor pieces.
        } else if (hordeNum === 2) {
            if (piecesNum === 1) // Two minor pieces cannot mate a lone king.
            return true;
            else if (horde.knight === 2) // A king on A1 is mated by two knights, if it is obstructed by a
            // pawn/bishop/knight on B2. On the other hand, if black only has
            // major pieces it is a draw.
            return pieces.pawn + pieces.bishop + pieces.knight < 1;
            else if (hasBishopPair(color)) return !// A king on A1 obstructed by a pawn/bishop on A2 is mated
            // by the bishop pair.
            (pieces.pawn >= 1 || pieces.bishop >= 1 || // A pawn/bishop/knight on B4, a pawn/bishop/rook/queen on
            // A4 and the king on A3 enable Boden's mate by the bishop
            // pair. In every other case white cannot win.
            pieces.knight >= 1 && pieces.rook + pieces.queen >= 1);
            else if (horde.bishop >= 1 && horde.knight >= 1) // The horde has a bishop and a knight.
            return !// A king on A1 obstructed by a pawn/opposite-color-bishop on
            // A2 is mated by a knight on D2 and a bishop on C3.
            (pieces.pawn >= 1 || piecesBishops(oppositeSquareColor(hordeBishopColor)) >= 1 || // A king on A1 bounded by two friendly pieces on A2 and B1 is
            // mated when the knight moves from D4 to C2 so that both the
            // knight and the bishop deliver check.
            piecesOfRoleNot(piecesBishops(hordeBishopColor)) >= 3);
            else // The horde has two or more bishops on the same color.
            // White can only win if black has enough material to obstruct
            // the squares of the opposite color around the king.
            return !// A king on A1 obstructed by a pawn/opposite-bishop/knight
            // on A2 and a opposite-bishop/knight on B1 is mated by two
            // bishops on B2 and C3. This position is theoretically
            // achievable even when black has two pawns or when they
            // have a pawn and an opposite color bishop.
            (pieces.pawn >= 1 && piecesBishops(oppositeSquareColor(hordeBishopColor)) >= 1 || pieces.pawn >= 1 && pieces.knight >= 1 || piecesBishops(oppositeSquareColor(hordeBishopColor)) >= 1 && pieces.knight >= 1 || piecesBishops(oppositeSquareColor(hordeBishopColor)) >= 2 || pieces.knight >= 2 || pieces.pawn >= 2);
        } else if (hordeNum === 3) {
            // A king in the corner is mated by two knights and a bishop or three
            // knights or the bishop pair and a knight/bishop.
            if (horde.knight === 2 && horde.bishop === 1 || horde.knight === 3 || hasBishopPair(color)) return false;
            else // White has two same color bishops and a knight.
            // A king on A1 is mated by a bishop on B2, a bishop on C1 and a
            // knight on C3, as long as there is another black piece to waste
            // a tempo.
            return piecesNum === 1;
        }
        return true;
    }
    isVariantEnd() {
        return this.board.white.isEmpty() || this.board.black.isEmpty();
    }
    variantOutcome(_ctx) {
        if (this.board.white.isEmpty()) return {
            winner: "black"
        };
        if (this.board.black.isEmpty()) return {
            winner: "white"
        };
        return;
    }
}
const defaultPosition = (rules)=>{
    switch(rules){
        case "chess":
            return (0, _chessJs.Chess).default();
        case "antichess":
            return Antichess.default();
        case "atomic":
            return Atomic.default();
        case "horde":
            return Horde.default();
        case "racingkings":
            return RacingKings.default();
        case "kingofthehill":
            return KingOfTheHill.default();
        case "3check":
            return ThreeCheck.default();
        case "crazyhouse":
            return Crazyhouse.default();
    }
};
const setupPosition = (rules, setup, opts)=>{
    switch(rules){
        case "chess":
            return (0, _chessJs.Chess).fromSetup(setup, opts);
        case "antichess":
            return Antichess.fromSetup(setup, opts);
        case "atomic":
            return Atomic.fromSetup(setup, opts);
        case "horde":
            return Horde.fromSetup(setup, opts);
        case "racingkings":
            return RacingKings.fromSetup(setup, opts);
        case "kingofthehill":
            return KingOfTheHill.fromSetup(setup, opts);
        case "3check":
            return ThreeCheck.fromSetup(setup, opts);
        case "crazyhouse":
            return Crazyhouse.fromSetup(setup, opts);
    }
};
const isStandardMaterial = (pos)=>{
    var _a, _b, _c, _d, _e;
    switch(pos.rules){
        case "chess":
        case "antichess":
        case "atomic":
        case "kingofthehill":
        case "3check":
            return (0, _typesJs.COLORS).every((color)=>(0, _chessJs.isStandardMaterialSide)(pos.board, color));
        case "crazyhouse":
            {
                const promoted = pos.board.promoted;
                return promoted.size() + pos.board.pawn.size() + (((_a = pos.pockets) === null || _a === void 0 ? void 0 : _a.count("pawn")) || 0) <= 16 && pos.board.knight.diff(promoted).size() + (((_b = pos.pockets) === null || _b === void 0 ? void 0 : _b.count("knight")) || 0) <= 4 && pos.board.bishop.diff(promoted).size() + (((_c = pos.pockets) === null || _c === void 0 ? void 0 : _c.count("bishop")) || 0) <= 4 && pos.board.rook.diff(promoted).size() + (((_d = pos.pockets) === null || _d === void 0 ? void 0 : _d.count("rook")) || 0) <= 4 && pos.board.queen.diff(promoted).size() + (((_e = pos.pockets) === null || _e === void 0 ? void 0 : _e.count("queen")) || 0) <= 2;
            }
        case "horde":
            return (0, _typesJs.COLORS).every((color)=>pos.board.pieces(color, "king").nonEmpty() ? (0, _chessJs.isStandardMaterialSide)(pos.board, color) : pos.board[color].size() <= 36);
        case "racingkings":
            return (0, _typesJs.COLORS).every((color)=>pos.board.pieces(color, "knight").size() <= 2 && pos.board.pieces(color, "bishop").size() <= 2 && pos.board.pieces(color, "rook").size() <= 2 && pos.board.pieces(color, "queen").size() <= 1);
    }
};

},{"@badrap/result":"jmsn1","./types.js":"5rlGs","./util.js":"65Nkv","./attacks.js":"cGrrr","./squareSet.js":"cjFYL","./board.js":"ah4O5","./setup.js":"bwhtM","./chess.js":"JzZp4","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"2H9a2":[function(require,module,exports) {
/**
 * Parse, transform and write PGN.
 *
 * ## Parser
 *
 * The parser will interpret any input as a PGN, creating a tree of
 * syntactically valid (but not necessarily legal) moves, skipping any invalid
 * tokens.
 *
 * ```ts
 * import { parsePgn, startingPosition } from 'chessops/pgn';
 * import { parseSan } from 'chessops/san';
 *
 * const pgn = '1. d4 d5 *';
 * const games = parsePgn(pgn);
 * for (const game of games) {
 *   const pos = startingPosition(game.headers).unwrap();
 *   for (const node of game.moves.mainline()) {
 *     const move = parseSan(pos, node.san);
 *     if (!move) break; // Illegal move
 *     pos.play(move);
 *   }
 * }
 * ```
 *
 * ## Streaming parser
 *
 * The module also provides a denial-of-service resistant streaming parser.
 * It can be configured with a budget for reasonable complexity of a single
 * game, fed with chunks of text, and will yield parsed games as they are
 * completed.
 *
 * ```ts
 *
 * import { createReadStream } from 'fs';
 * import { PgnParser } from 'chessops/pgn';
 *
 * const stream = createReadStream('games.pgn', { encoding: 'utf-8' });
 *
 * const parser = new PgnParser((game, err) => {
 *   if (err) {
 *     // Budget exceeded.
 *     stream.destroy(err);
 *   }
 *
 *   // Use game ...
 * });
 *
 * await new Promise<void>(resolve =>
 *   stream
 *     .on('data', (chunk: string) => parser.parse(chunk, { stream: true }))
 *     .on('close', () => {
 *       parser.parse('');
 *       resolve();
 *     })
 * );
 * ```
 *
 * ## Augmenting the game tree
 *
 * You can use `walk` to visit all nodes in the game tree, or `transform`
 * to augment it with user data.
 *
 * Both allow you to provide context. You update the context inside the
 * callback, and it is automatically `clone()`-ed at each fork.
 * In the example below, the current position `pos` is provided as context.
 *
 * ```ts
 * import { transform } from 'chessops/pgn';
 * import { makeFen } from 'chessops/fen';
 * import { parseSan, makeSanAndPlay } from 'chessops/san';
 *
 * const pos = startingPosition(game.headers).unwrap();
 * game.moves = transform(game.moves, pos, (pos, node) => {
 *   const move = parseSan(pos, node.san);
 *   if (!move) {
 *     // Illegal move. Returning undefined cuts of the tree here.
 *     return;
 *   }
 *
 *   const san = makeSanAndPlay(pos, move); // Mutating pos!
 *
 *   return {
 *     ...node, // Keep comments and annotation glyphs
 *     san, // Normalized SAN
 *     fen: makeFen(pos.toSetup()), // Add arbitrary user data to node
 *   };
 * });
 * ```
 *
 * ## Writing
 *
 * Requires each node to at least have a `san` property.
 *
 * ```
 * import { makePgn } from 'chessops/pgn';
 *
 * const rewrittenPgn = makePgn(game);
 * ```
 *
 * @packageDocumentation
 */ var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "defaultGame", ()=>defaultGame);
parcelHelpers.export(exports, "Node", ()=>Node);
parcelHelpers.export(exports, "ChildNode", ()=>ChildNode);
parcelHelpers.export(exports, "isChildNode", ()=>isChildNode);
parcelHelpers.export(exports, "Box", ()=>Box);
parcelHelpers.export(exports, "transform", ()=>transform);
parcelHelpers.export(exports, "walk", ()=>walk);
parcelHelpers.export(exports, "makeOutcome", ()=>makeOutcome);
parcelHelpers.export(exports, "parseOutcome", ()=>parseOutcome);
parcelHelpers.export(exports, "makePgn", ()=>makePgn);
parcelHelpers.export(exports, "defaultHeaders", ()=>defaultHeaders);
parcelHelpers.export(exports, "emptyHeaders", ()=>emptyHeaders);
parcelHelpers.export(exports, "PgnError", ()=>PgnError);
parcelHelpers.export(exports, "PgnParser", ()=>PgnParser);
parcelHelpers.export(exports, "parsePgn", ()=>parsePgn);
parcelHelpers.export(exports, "parseVariant", ()=>parseVariant);
parcelHelpers.export(exports, "makeVariant", ()=>makeVariant);
parcelHelpers.export(exports, "startingPosition", ()=>startingPosition);
parcelHelpers.export(exports, "setStartingPosition", ()=>setStartingPosition);
parcelHelpers.export(exports, "isPawns", ()=>isPawns);
parcelHelpers.export(exports, "isMate", ()=>isMate);
parcelHelpers.export(exports, "makeComment", ()=>makeComment);
parcelHelpers.export(exports, "parseComment", ()=>parseComment);
var _utilJs = require("./util.js");
var _fenJs = require("./fen.js");
var _chessJs = require("./chess.js");
var _variantJs = require("./variant.js");
var _result = require("@badrap/result");
const defaultGame = (initHeaders = defaultHeaders)=>({
        headers: initHeaders(),
        moves: new Node()
    });
class Node {
    constructor(){
        this.children = [];
    }
    *mainline() {
        let node = this;
        while(node.children.length){
            const child = node.children[0];
            yield child.data;
            node = child;
        }
    }
}
class ChildNode extends Node {
    constructor(data){
        super();
        this.data = data;
    }
}
const isChildNode = (node)=>node instanceof ChildNode;
class Box {
    constructor(value){
        this.value = value;
    }
    clone() {
        return new Box(this.value);
    }
}
const transform = (node, ctx, f)=>{
    const root = new Node();
    const stack = [
        {
            before: node,
            after: root,
            ctx
        }
    ];
    let frame;
    while(frame = stack.pop())for(let childIndex = 0; childIndex < frame.before.children.length; childIndex++){
        const ctx = childIndex < frame.before.children.length - 1 ? frame.ctx.clone() : frame.ctx;
        const childBefore = frame.before.children[childIndex];
        const data = f(ctx, childBefore.data, childIndex);
        if ((0, _utilJs.defined)(data)) {
            const childAfter = new ChildNode(data);
            frame.after.children.push(childAfter);
            stack.push({
                before: childBefore,
                after: childAfter,
                ctx
            });
        }
    }
    return root;
};
const walk = (node, ctx, f)=>{
    const stack = [
        {
            node,
            ctx
        }
    ];
    let frame;
    while(frame = stack.pop())for(let childIndex = 0; childIndex < frame.node.children.length; childIndex++){
        const ctx = childIndex < frame.node.children.length - 1 ? frame.ctx.clone() : frame.ctx;
        const child = frame.node.children[childIndex];
        if (f(ctx, child.data, childIndex) !== false) stack.push({
            node: child,
            ctx
        });
    }
};
const makeOutcome = (outcome)=>{
    if (!outcome) return "*";
    else if (outcome.winner === "white") return "1-0";
    else if (outcome.winner === "black") return "0-1";
    else return "1/2-1/2";
};
const parseOutcome = (s)=>{
    if (s === "1-0") return {
        winner: "white"
    };
    else if (s === "0-1") return {
        winner: "black"
    };
    else if (s === "1/2-1/2") return {
        winner: undefined
    };
    else return;
};
const escapeHeader = (value)=>value.replace(/\\/g, "\\\\").replace(/"/g, '\\"');
const safeComment = (comment)=>comment.replace(/\}/g, "");
const makePgn = (game)=>{
    const builder = [], tokens = [];
    if (game.headers.size) {
        for (const [key, value] of game.headers.entries())builder.push("[", key, ' "', escapeHeader(value), '"]\n');
        builder.push("\n");
    }
    for (const comment of game.comments || [])tokens.push("{", safeComment(comment), "}");
    const fen = game.headers.get("FEN");
    const initialPly = fen ? (0, _fenJs.parseFen)(fen).unwrap((setup)=>(setup.fullmoves - 1) * 2 + (setup.turn === "white" ? 0 : 1), (_)=>0) : 0;
    const stack = [];
    if (game.moves.children.length) {
        const variations = game.moves.children[Symbol.iterator]();
        stack.push({
            state: 0 /* MakePgnState.Pre */ ,
            ply: initialPly,
            node: variations.next().value,
            sidelines: variations,
            startsVariation: false,
            inVariation: false
        });
    }
    let forceMoveNumber = true;
    while(stack.length){
        const frame = stack[stack.length - 1];
        if (frame.inVariation) {
            tokens.push(")");
            frame.inVariation = false;
            forceMoveNumber = true;
        }
        switch(frame.state){
            case 0 /* MakePgnState.Pre */ :
                for (const comment of frame.node.data.startingComments || []){
                    tokens.push("{", safeComment(comment), "}");
                    forceMoveNumber = true;
                }
                if (forceMoveNumber || frame.ply % 2 === 0) {
                    tokens.push(Math.floor(frame.ply / 2) + 1 + (frame.ply % 2 ? "..." : "."));
                    forceMoveNumber = false;
                }
                tokens.push(frame.node.data.san);
                for (const nag of frame.node.data.nags || []){
                    tokens.push("$" + nag);
                    forceMoveNumber = true;
                }
                for (const comment of frame.node.data.comments || [])tokens.push("{", safeComment(comment), "}");
                frame.state = 1 /* MakePgnState.Sidelines */ ; // fall through
            case 1 /* MakePgnState.Sidelines */ :
                {
                    const child = frame.sidelines.next();
                    if (child.done) {
                        if (frame.node.children.length) {
                            const variations = frame.node.children[Symbol.iterator]();
                            stack.push({
                                state: 0 /* MakePgnState.Pre */ ,
                                ply: frame.ply + 1,
                                node: variations.next().value,
                                sidelines: variations,
                                startsVariation: false,
                                inVariation: false
                            });
                        }
                        frame.state = 2 /* MakePgnState.End */ ;
                    } else {
                        tokens.push("(");
                        forceMoveNumber = true;
                        stack.push({
                            state: 0 /* MakePgnState.Pre */ ,
                            ply: frame.ply,
                            node: child.value,
                            sidelines: [][Symbol.iterator](),
                            startsVariation: true,
                            inVariation: false
                        });
                        frame.inVariation = true;
                    }
                    break;
                }
            case 2 /* MakePgnState.End */ :
                stack.pop();
        }
    }
    tokens.push(makeOutcome(parseOutcome(game.headers.get("Result"))));
    builder.push(tokens.join(" "), "\n");
    return builder.join("");
};
const defaultHeaders = ()=>new Map([
        [
            "Event",
            "?"
        ],
        [
            "Site",
            "?"
        ],
        [
            "Date",
            "????.??.??"
        ],
        [
            "Round",
            "?"
        ],
        [
            "White",
            "?"
        ],
        [
            "Black",
            "?"
        ],
        [
            "Result",
            "*"
        ]
    ]);
const emptyHeaders = ()=>new Map();
const BOM = "\uFEFF";
const isWhitespace = (line)=>/^\s*$/.test(line);
const isCommentLine = (line)=>line.startsWith("%");
class PgnError extends Error {
}
class PgnParser {
    constructor(emitGame, initHeaders = defaultHeaders, maxBudget = 1000000){
        this.emitGame = emitGame;
        this.initHeaders = initHeaders;
        this.maxBudget = maxBudget;
        this.lineBuf = [];
        this.resetGame();
        this.state = 0 /* ParserState.Bom */ ;
    }
    resetGame() {
        this.budget = this.maxBudget;
        this.found = false;
        this.state = 1 /* ParserState.Pre */ ;
        this.game = defaultGame(this.initHeaders);
        this.stack = [
            {
                parent: this.game.moves,
                root: true
            }
        ];
        this.commentBuf = [];
    }
    consumeBudget(cost) {
        this.budget -= cost;
        if (this.budget < 0) throw new PgnError("ERR_PGN_BUDGET");
    }
    parse(data, options) {
        if (this.budget < 0) return;
        try {
            let idx = 0;
            for(;;){
                const nlIdx = data.indexOf("\n", idx);
                if (nlIdx === -1) break;
                const crIdx = nlIdx > idx && data[nlIdx - 1] === "\r" ? nlIdx - 1 : nlIdx;
                this.consumeBudget(nlIdx - idx);
                this.lineBuf.push(data.slice(idx, crIdx));
                idx = nlIdx + 1;
                this.handleLine();
            }
            this.consumeBudget(data.length - idx);
            this.lineBuf.push(data.slice(idx));
            if (!(options === null || options === void 0 ? void 0 : options.stream)) {
                this.handleLine();
                this.emit(undefined);
            }
        } catch (err) {
            this.emit(err);
        }
    }
    handleLine() {
        let freshLine = true;
        let line = this.lineBuf.join("");
        this.lineBuf = [];
        continuedLine: for(;;)switch(this.state){
            case 0 /* ParserState.Bom */ :
                if (line.startsWith(BOM)) line = line.slice(BOM.length);
                this.state = 1 /* ParserState.Pre */ ; // fall through
            case 1 /* ParserState.Pre */ :
                if (isWhitespace(line) || isCommentLine(line)) return;
                this.found = true;
                this.state = 2 /* ParserState.Headers */ ; // fall through
            case 2 /* ParserState.Headers */ :
                {
                    if (isCommentLine(line)) return;
                    let moreHeaders = true;
                    while(moreHeaders){
                        moreHeaders = false;
                        line = line.replace(/^\s*\[([A-Za-z0-9][A-Za-z0-9_+#=:-]*)\s+"((?:[^"\\]|\\"|\\\\)*)"\]/, (_match, headerName, headerValue)=>{
                            this.consumeBudget(200);
                            this.game.headers.set(headerName, headerValue.replace(/\\"/g, '"').replace(/\\\\/g, "\\"));
                            moreHeaders = true;
                            freshLine = false;
                            return "";
                        });
                    }
                    if (isWhitespace(line)) return;
                    this.state = 3 /* ParserState.Moves */ ; // fall through
                }
            case 3 /* ParserState.Moves */ :
                {
                    if (freshLine) {
                        if (isCommentLine(line)) return;
                        if (isWhitespace(line)) return this.emit(undefined);
                    }
                    const tokenRegex = /(?:[NBKRQ]?[a-h]?[1-8]?[-x]?[a-h][1-8](?:=?[nbrqkNBRQK])?|[pnbrqkPNBRQK]?@[a-h][1-8]|O-O-O|0-0-0|O-O|0-0)[+#]?|--|Z0|0000|@@@@|{|;|\$\d{1,4}|[?!]{1,2}|\(|\)|\*|1-0|0-1|1\/2-1\/2/g;
                    let match;
                    while(match = tokenRegex.exec(line)){
                        const frame = this.stack[this.stack.length - 1];
                        let token = match[0];
                        if (token === ";") return;
                        else if (token.startsWith("$")) this.handleNag(parseInt(token.slice(1), 10));
                        else if (token === "!") this.handleNag(1);
                        else if (token === "?") this.handleNag(2);
                        else if (token === "!!") this.handleNag(3);
                        else if (token === "??") this.handleNag(4);
                        else if (token === "!?") this.handleNag(5);
                        else if (token === "?!") this.handleNag(6);
                        else if (token === "1-0" || token === "0-1" || token === "1/2-1/2" || token === "*") {
                            if (this.stack.length === 1 && token !== "*") this.game.headers.set("Result", token);
                        } else if (token === "(") {
                            this.consumeBudget(100);
                            this.stack.push({
                                parent: frame.parent,
                                root: false
                            });
                        } else if (token === ")") {
                            if (this.stack.length > 1) this.stack.pop();
                        } else if (token === "{") {
                            const openIndex = tokenRegex.lastIndex;
                            const beginIndex = line[openIndex] === " " ? openIndex + 1 : openIndex;
                            line = line.slice(beginIndex);
                            this.state = 4 /* ParserState.Comment */ ;
                            continue continuedLine;
                        } else {
                            this.consumeBudget(100);
                            if (token === "Z0" || token === "0000" || token === "@@@@") token = "--";
                            else if (token.startsWith("0")) token = token.replace(/0/g, "O");
                            if (frame.node) frame.parent = frame.node;
                            frame.node = new ChildNode({
                                san: token,
                                startingComments: frame.startingComments
                            });
                            frame.startingComments = undefined;
                            frame.root = false;
                            frame.parent.children.push(frame.node);
                        }
                    }
                    return;
                }
            case 4 /* ParserState.Comment */ :
                {
                    const closeIndex = line.indexOf("}");
                    if (closeIndex === -1) {
                        this.commentBuf.push(line);
                        return;
                    } else {
                        const endIndex = closeIndex > 0 && line[closeIndex - 1] === " " ? closeIndex - 1 : closeIndex;
                        this.commentBuf.push(line.slice(0, endIndex));
                        this.handleComment();
                        line = line.slice(closeIndex);
                        this.state = 3 /* ParserState.Moves */ ;
                        freshLine = false;
                    }
                }
        }
    }
    handleNag(nag) {
        var _a;
        this.consumeBudget(50);
        const frame = this.stack[this.stack.length - 1];
        if (frame.node) {
            (_a = frame.node.data).nags || (_a.nags = []);
            frame.node.data.nags.push(nag);
        }
    }
    handleComment() {
        var _a, _b;
        this.consumeBudget(100);
        const frame = this.stack[this.stack.length - 1];
        const comment = this.commentBuf.join("\n");
        this.commentBuf = [];
        if (frame.node) {
            (_a = frame.node.data).comments || (_a.comments = []);
            frame.node.data.comments.push(comment);
        } else if (frame.root) {
            (_b = this.game).comments || (_b.comments = []);
            this.game.comments.push(comment);
        } else {
            frame.startingComments || (frame.startingComments = []);
            frame.startingComments.push(comment);
        }
    }
    emit(err) {
        if (this.state === 4 /* ParserState.Comment */ ) this.handleComment();
        if (err) return this.emitGame(this.game, err);
        if (this.found) this.emitGame(this.game, undefined);
        this.resetGame();
    }
}
const parsePgn = (pgn, initHeaders = defaultHeaders)=>{
    const games = [];
    new PgnParser((game)=>games.push(game), initHeaders, NaN).parse(pgn);
    return games;
};
const parseVariant = (variant)=>{
    switch((variant || "chess").toLowerCase()){
        case "chess":
        case "chess960":
        case "chess 960":
        case "standard":
        case "from position":
        case "classical":
        case "normal":
        case "fischerandom":
        case "fischerrandom":
        case "fischer random":
        case "wild/0":
        case "wild/1":
        case "wild/2":
        case "wild/3":
        case "wild/4":
        case "wild/5":
        case "wild/6":
        case "wild/7":
        case "wild/8":
        case "wild/8a":
            return "chess";
        case "crazyhouse":
        case "crazy house":
        case "house":
        case "zh":
            return "crazyhouse";
        case "king of the hill":
        case "koth":
        case "kingofthehill":
            return "kingofthehill";
        case "three-check":
        case "three check":
        case "threecheck":
        case "three check chess":
        case "3-check":
        case "3 check":
        case "3check":
            return "3check";
        case "antichess":
        case "anti chess":
        case "anti":
            return "antichess";
        case "atomic":
        case "atom":
        case "atomic chess":
            return "atomic";
        case "horde":
        case "horde chess":
            return "horde";
        case "racing kings":
        case "racingkings":
        case "racing":
        case "race":
            return "racingkings";
        default:
            return;
    }
};
const makeVariant = (rules)=>{
    switch(rules){
        case "chess":
            return;
        case "crazyhouse":
            return "Crazyhouse";
        case "racingkings":
            return "Racing Kings";
        case "horde":
            return "Horde";
        case "atomic":
            return "Atomic";
        case "antichess":
            return "Antichess";
        case "3check":
            return "Three-check";
        case "kingofthehill":
            return "King of the Hill";
    }
};
const startingPosition = (headers, opts)=>{
    const rules = parseVariant(headers.get("Variant"));
    if (!rules) return (0, _result.Result).err(new (0, _chessJs.PositionError)((0, _chessJs.IllegalSetup).Variant));
    const fen = headers.get("FEN");
    if (fen) return (0, _fenJs.parseFen)(fen).chain((setup)=>(0, _variantJs.setupPosition)(rules, setup, opts));
    else return (0, _result.Result).ok((0, _variantJs.defaultPosition)(rules));
};
const setStartingPosition = (headers, pos)=>{
    const variant = makeVariant(pos.rules);
    if (variant) headers.set("Variant", variant);
    else headers.delete("Variant");
    const fen = (0, _fenJs.makeFen)(pos.toSetup());
    const defaultFen = (0, _fenJs.makeFen)((0, _variantJs.defaultPosition)(pos.rules).toSetup());
    if (fen !== defaultFen) headers.set("FEN", fen);
    else headers.delete("FEN");
};
const isPawns = (ev)=>"pawns" in ev;
const isMate = (ev)=>"mate" in ev;
const makeClk = (seconds)=>{
    seconds = Math.max(0, seconds);
    const hours = Math.floor(seconds / 3600);
    const minutes = Math.floor(seconds % 3600 / 60);
    seconds = seconds % 3600 % 60;
    return `${hours}:${minutes.toString().padStart(2, "0")}:${seconds.toLocaleString("en", {
        minimumIntegerDigits: 2,
        maximumFractionDigits: 3
    })}`;
};
const makeCommentShapeColor = (color)=>{
    switch(color){
        case "green":
            return "G";
        case "red":
            return "R";
        case "yellow":
            return "Y";
        case "blue":
            return "B";
    }
};
function parseCommentShapeColor(str) {
    switch(str){
        case "G":
            return "green";
        case "R":
            return "red";
        case "Y":
            return "yellow";
        case "B":
            return "blue";
        default:
            return;
    }
}
const makeCommentShape = (shape)=>shape.to === shape.from ? `${makeCommentShapeColor(shape.color)}${(0, _utilJs.makeSquare)(shape.to)}` : `${makeCommentShapeColor(shape.color)}${(0, _utilJs.makeSquare)(shape.from)}${(0, _utilJs.makeSquare)(shape.to)}`;
const parseCommentShape = (str)=>{
    const color = parseCommentShapeColor(str.slice(0, 1));
    const from = (0, _utilJs.parseSquare)(str.slice(1, 3));
    const to = (0, _utilJs.parseSquare)(str.slice(3, 5));
    if (!color || !(0, _utilJs.defined)(from)) return;
    if (str.length === 3) return {
        color,
        from,
        to: from
    };
    if (str.length === 5 && (0, _utilJs.defined)(to)) return {
        color,
        from,
        to
    };
    return;
};
const makeEval = (ev)=>{
    const str = isMate(ev) ? "#" + ev.mate : ev.pawns.toFixed(2);
    return (0, _utilJs.defined)(ev.depth) ? str + "," + ev.depth : str;
};
const makeComment = (comment)=>{
    const builder = [];
    if ((0, _utilJs.defined)(comment.text)) builder.push(comment.text);
    const circles = (comment.shapes || []).filter((shape)=>shape.to === shape.from).map(makeCommentShape);
    if (circles.length) builder.push(`[%csl ${circles.join(",")}]`);
    const arrows = (comment.shapes || []).filter((shape)=>shape.to !== shape.from).map(makeCommentShape);
    if (arrows.length) builder.push(`[%cal ${arrows.join(",")}]`);
    if (comment.evaluation) builder.push(`[%eval ${makeEval(comment.evaluation)}]`);
    if ((0, _utilJs.defined)(comment.emt)) builder.push(`[%emt ${makeClk(comment.emt)}]`);
    if ((0, _utilJs.defined)(comment.clock)) builder.push(`[%clk ${makeClk(comment.clock)}]`);
    return builder.join(" ");
};
const parseComment = (comment)=>{
    let emt, clock, evaluation;
    const shapes = [];
    const text = comment.replace(/\s?\[%(emt|clk)\s(\d{1,5}):(\d{1,2}):(\d{1,2}(?:\.\d{0,3})?)\]\s?/g, (_, annotation, hours, minutes, seconds)=>{
        const value = parseInt(hours, 10) * 3600 + parseInt(minutes, 10) * 60 + parseFloat(seconds);
        if (annotation === "emt") emt = value;
        else if (annotation === "clk") clock = value;
        return "  ";
    }).replace(/\s?\[%(?:csl|cal)\s([RGYB][a-h][1-8](?:[a-h][1-8])?(?:,[RGYB][a-h][1-8](?:[a-h][1-8])?)*)\]\s?/g, (_, arrows)=>{
        for (const arrow of arrows.split(","))shapes.push(parseCommentShape(arrow));
        return "  ";
    }).replace(/\s?\[%eval\s(?:#([+-]?\d{1,5})|([+-]?(?:\d{1,5}|\d{0,5}\.\d{1,2})))(?:,(\d{1,5}))?\]\s?/g, (_, mate, pawns, d)=>{
        const depth = d && parseInt(d, 10);
        evaluation = mate ? {
            mate: parseInt(mate, 10),
            depth
        } : {
            pawns: parseFloat(pawns),
            depth
        };
        return "  ";
    }).trim();
    return {
        text,
        shapes,
        emt,
        clock,
        evaluation
    };
};

},{"./util.js":"65Nkv","./fen.js":"duQ3j","./chess.js":"JzZp4","./variant.js":"7ItNn","@badrap/result":"jmsn1","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"6oJFU":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "default", ()=>translate);
function translate(translator) {
    return (key)=>translator && translator(key) || defaultTranslator(key);
}
const defaultTranslator = (key)=>defaultTranslations[key];
const defaultTranslations = {
    flipTheBoard: "Flip the board",
    analysisBoard: "Analysis board",
    practiceWithComputer: "Practice with computer",
    getPgn: "Get PGN",
    download: "Download",
    viewOnLichess: "View on Lichess",
    viewOnSite: "View on site"
};

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"9rRU7":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "Path", ()=>Path);
class Path {
    constructor(path){
        this.path = path;
        this.size = ()=>this.path.length / 2;
        this.head = ()=>this.path.slice(0, 2);
        // returns an invalid path doesn't starting from root
        this.tail = ()=>new Path(this.path.slice(2));
        this.init = ()=>new Path(this.path.slice(0, -2));
        this.last = ()=>this.path.slice(-2);
        this.empty = ()=>this.path == "";
        this.contains = (other)=>this.path.startsWith(other.path);
        this.isChildOf = (parent)=>this.init() === parent;
        this.append = (id)=>new Path(this.path + id);
        this.equals = (other)=>this.path == other.path;
    }
}
Path.root = new Path("");

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"8MT9F":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
// immutable
parcelHelpers.export(exports, "Game", ()=>Game);
parcelHelpers.export(exports, "isMoveNode", ()=>isMoveNode);
parcelHelpers.export(exports, "isMoveData", ()=>isMoveData);
var _path = require("./path");
class Game {
    constructor(initial, moves, players, metadata){
        this.initial = initial;
        this.moves = moves;
        this.players = players;
        this.metadata = metadata;
        this.nodeAt = (path)=>nodeAtPathFrom(this.moves, path);
        this.dataAt = (path)=>{
            const node = this.nodeAt(path);
            return node ? isMoveNode(node) ? node.data : this.initial : undefined;
        };
        this.title = ()=>this.players.white.name ? [
                this.players.white.title,
                this.players.white.name,
                "vs",
                this.players.black.title,
                this.players.black.name
            ].filter((x)=>x && !!x.trim()).join("_").replace(" ", "-") : "lichess-pgn-viewer";
        this.pathAtMainlinePly = (ply)=>{
            var _a;
            return ply == 0 ? (0, _path.Path).root : ((_a = this.mainline[Math.max(0, Math.min(this.mainline.length - 1, ply == "last" ? 9999 : ply - 1))]) === null || _a === void 0 ? void 0 : _a.path) || (0, _path.Path).root;
        };
        this.hasPlayerName = ()=>{
            var _a, _b;
            return !!(((_a = this.players.white) === null || _a === void 0 ? void 0 : _a.name) || ((_b = this.players.black) === null || _b === void 0 ? void 0 : _b.name));
        };
        this.mainline = Array.from(this.moves.mainline());
    }
}
const childById = (node, id)=>node.children.find((c)=>c.data.path.last() == id);
const nodeAtPathFrom = (node, path)=>{
    if (path.empty()) return node;
    const child = childById(node, path.head());
    return child ? nodeAtPathFrom(child, path.tail()) : undefined;
};
const isMoveNode = (n)=>"data" in n;
const isMoveData = (d)=>"uci" in d;

},{"./path":"9rRU7","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"bwAO9":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "parseComments", ()=>parseComments);
parcelHelpers.export(exports, "makeGame", ()=>makeGame);
var _chessops = require("chessops");
var _compat = require("chessops/compat");
var _fen = require("chessops/fen");
var _pgn = require("chessops/pgn");
var _san = require("chessops/san");
var _game = require("./game");
var _path = require("./path");
class State {
    constructor(pos, path, clocks){
        this.pos = pos;
        this.path = path;
        this.clocks = clocks;
        this.clone = ()=>new State(this.pos.clone(), this.path, {
                ...this.clocks
            });
    }
}
const parseComments = (strings)=>{
    const comments = strings.map((0, _pgn.parseComment));
    const reduceTimes = (times)=>times.reduce((last, time)=>time, undefined);
    return {
        texts: comments.map((c)=>c.text).filter((t)=>!!t),
        shapes: comments.flatMap((c)=>c.shapes),
        clock: reduceTimes(comments.map((c)=>c.clock)),
        emt: reduceTimes(comments.map((c)=>c.emt))
    };
};
const makeGame = (pgn, lichess = false)=>{
    var _a, _b;
    const game = (0, _pgn.parsePgn)(pgn)[0] || (0, _pgn.parsePgn)("*")[0];
    const start = (0, _pgn.startingPosition)(game.headers).unwrap();
    const fen = (0, _fen.makeFen)(start.toSetup());
    const comments = parseComments(game.comments || []);
    const headers = new Map(Array.from(game.headers, ([key, value])=>[
            key.toLowerCase(),
            value
        ]));
    const metadata = makeMetadata(headers, lichess);
    const initial = {
        fen,
        turn: start.turn,
        check: start.isCheck(),
        pos: start.clone(),
        comments: comments.texts,
        shapes: comments.shapes,
        clocks: {
            white: ((_a = metadata.timeControl) === null || _a === void 0 ? void 0 : _a.initial) || comments.clock,
            black: ((_b = metadata.timeControl) === null || _b === void 0 ? void 0 : _b.initial) || comments.clock
        }
    };
    const moves = makeMoves(start, game.moves, metadata);
    const players = makePlayers(headers, metadata);
    return new (0, _game.Game)(initial, moves, players, metadata);
};
const makeMoves = (start, moves, metadata)=>(0, _pgn.transform)(moves, new State(start, (0, _path.Path).root, {}), (state, node, _index)=>{
        const move = (0, _san.parseSan)(state.pos, node.san);
        if (!move) return undefined;
        const moveId = (0, _compat.scalachessCharPair)(move);
        const path = state.path.append(moveId);
        const san = (0, _san.makeSanAndPlay)(state.pos, move);
        state.path = path;
        const setup = state.pos.toSetup();
        const comments = parseComments(node.comments || []);
        const startingComments = parseComments(node.startingComments || []);
        const shapes = [
            ...comments.shapes,
            ...startingComments.shapes
        ];
        const ply = (setup.fullmoves - 1) * 2 + (state.pos.turn === "white" ? 0 : 1);
        let clocks = state.clocks = makeClocks(state.clocks, state.pos.turn, comments.clock);
        if (ply < 2 && metadata.timeControl) clocks = {
            white: metadata.timeControl.initial,
            black: metadata.timeControl.initial,
            ...clocks
        };
        const moveNode = {
            path,
            ply,
            move,
            san,
            uci: (0, _chessops.makeUci)(move),
            fen: (0, _fen.makeFen)(state.pos.toSetup()),
            turn: state.pos.turn,
            check: state.pos.isCheck(),
            comments: comments.texts,
            startingComments: startingComments.texts,
            nags: node.nags || [],
            shapes,
            clocks,
            emt: comments.emt
        };
        return moveNode;
    });
const makeClocks = (prev, turn, clk)=>turn == "white" ? {
        ...prev,
        black: clk
    } : {
        ...prev,
        white: clk
    };
function makePlayers(headers, metadata) {
    const get = (color, field)=>{
        const raw = headers.get(`${color}${field}`);
        return raw == "?" || raw == "" ? undefined : raw;
    };
    const makePlayer = (color)=>{
        const name = get(color, "");
        return {
            name,
            title: get(color, "title"),
            rating: parseInt(get(color, "elo") || "") || undefined,
            isLichessUser: metadata.isLichess && !!(name === null || name === void 0 ? void 0 : name.match(/^[a-z0-9][a-z0-9_-]{0,28}[a-z0-9]$/i))
        };
    };
    return {
        white: makePlayer("white"),
        black: makePlayer("black")
    };
}
function makeMetadata(headers, lichess) {
    var _a;
    const site = headers.get("source") || headers.get("site");
    const tcs = (_a = headers.get("timecontrol")) === null || _a === void 0 ? void 0 : _a.split("+").map((x)=>parseInt(x));
    const timeControl = tcs && tcs[0] ? {
        initial: tcs[0],
        increment: tcs[1] || 0
    } : undefined;
    const orientation = headers.get("orientation");
    return {
        externalLink: site && site.match(/^https?:\/\//) ? site : undefined,
        isLichess: !!(lichess && (site === null || site === void 0 ? void 0 : site.startsWith(lichess))),
        timeControl,
        orientation: orientation === "white" || orientation === "black" ? orientation : undefined
    };
}

},{"chessops":"3T435","chessops/compat":"cVRYS","chessops/fen":"duQ3j","chessops/pgn":"2H9a2","chessops/san":"kFVKK","./game":"8MT9F","./path":"9rRU7","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"akuUP":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "invRanks", ()=>invRanks);
parcelHelpers.export(exports, "allKeys", ()=>allKeys);
parcelHelpers.export(exports, "pos2key", ()=>pos2key);
parcelHelpers.export(exports, "key2pos", ()=>key2pos);
parcelHelpers.export(exports, "uciToMove", ()=>uciToMove);
parcelHelpers.export(exports, "allPos", ()=>allPos);
parcelHelpers.export(exports, "memo", ()=>memo);
parcelHelpers.export(exports, "timer", ()=>timer);
parcelHelpers.export(exports, "opposite", ()=>opposite);
parcelHelpers.export(exports, "distanceSq", ()=>distanceSq);
parcelHelpers.export(exports, "samePiece", ()=>samePiece);
parcelHelpers.export(exports, "posToTranslate", ()=>posToTranslate);
parcelHelpers.export(exports, "translate", ()=>translate);
parcelHelpers.export(exports, "translateAndScale", ()=>translateAndScale);
parcelHelpers.export(exports, "setVisible", ()=>setVisible);
parcelHelpers.export(exports, "eventPosition", ()=>eventPosition);
parcelHelpers.export(exports, "isRightButton", ()=>isRightButton);
parcelHelpers.export(exports, "createEl", ()=>createEl);
parcelHelpers.export(exports, "computeSquareCenter", ()=>computeSquareCenter);
var _typesJs = require("./types.js");
const invRanks = [
    ..._typesJs.ranks
].reverse();
const allKeys = Array.prototype.concat(..._typesJs.files.map((c)=>_typesJs.ranks.map((r)=>c + r)));
const pos2key = (pos)=>allKeys[8 * pos[0] + pos[1]];
const key2pos = (k)=>[
        k.charCodeAt(0) - 97,
        k.charCodeAt(1) - 49
    ];
const uciToMove = (uci)=>{
    if (!uci) return undefined;
    if (uci[1] === "@") return [
        uci.slice(2, 4)
    ];
    return [
        uci.slice(0, 2),
        uci.slice(2, 4)
    ];
};
const allPos = allKeys.map(key2pos);
function memo(f) {
    let v;
    const ret = ()=>{
        if (v === undefined) v = f();
        return v;
    };
    ret.clear = ()=>{
        v = undefined;
    };
    return ret;
}
const timer = ()=>{
    let startAt;
    return {
        start () {
            startAt = performance.now();
        },
        cancel () {
            startAt = undefined;
        },
        stop () {
            if (!startAt) return 0;
            const time = performance.now() - startAt;
            startAt = undefined;
            return time;
        }
    };
};
const opposite = (c)=>c === "white" ? "black" : "white";
const distanceSq = (pos1, pos2)=>{
    const dx = pos1[0] - pos2[0], dy = pos1[1] - pos2[1];
    return dx * dx + dy * dy;
};
const samePiece = (p1, p2)=>p1.role === p2.role && p1.color === p2.color;
const posToTranslate = (bounds)=>(pos, asWhite)=>[
            (asWhite ? pos[0] : 7 - pos[0]) * bounds.width / 8,
            (asWhite ? 7 - pos[1] : pos[1]) * bounds.height / 8
        ];
const translate = (el, pos)=>{
    el.style.transform = `translate(${pos[0]}px,${pos[1]}px)`;
};
const translateAndScale = (el, pos, scale = 1)=>{
    el.style.transform = `translate(${pos[0]}px,${pos[1]}px) scale(${scale})`;
};
const setVisible = (el, v)=>{
    el.style.visibility = v ? "visible" : "hidden";
};
const eventPosition = (e)=>{
    var _a;
    if (e.clientX || e.clientX === 0) return [
        e.clientX,
        e.clientY
    ];
    if ((_a = e.targetTouches) === null || _a === void 0 ? void 0 : _a[0]) return [
        e.targetTouches[0].clientX,
        e.targetTouches[0].clientY
    ];
    return; // touchend has no position!
};
const isRightButton = (e)=>e.buttons === 2 || e.button === 2;
const createEl = (tagName, className)=>{
    const el = document.createElement(tagName);
    if (className) el.className = className;
    return el;
};
function computeSquareCenter(key, asWhite, bounds) {
    const pos = key2pos(key);
    if (!asWhite) {
        pos[0] = 7 - pos[0];
        pos[1] = 7 - pos[1];
    }
    return [
        bounds.left + bounds.width * pos[0] / 8 + bounds.width / 16,
        bounds.top + bounds.height * (7 - pos[1]) / 8 + bounds.height / 16
    ];
}

},{"./types.js":"7vE4h","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"7vE4h":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "colors", ()=>colors);
parcelHelpers.export(exports, "files", ()=>files);
parcelHelpers.export(exports, "ranks", ()=>ranks);
const colors = [
    "white",
    "black"
];
const files = [
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h"
];
const ranks = [
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8"
];

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"b9QIT":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "default", ()=>view);
parcelHelpers.export(exports, "makeConfig", ()=>makeConfig);
var _chessground = require("chessground");
var _snabbdom = require("snabbdom");
var _util = require("./util");
var _events = require("../events");
var _menu = require("./menu");
var _side = require("./side");
var _player = require("./player");
var _playerDefault = parcelHelpers.interopDefault(_player);
function view(ctrl) {
    const opts = ctrl.opts, staticClasses = `lpv.lpv--moves-${opts.showMoves}.lpv--controls-${opts.showControls}${opts.classes ? "." + opts.classes.replace(" ", ".") : ""}`;
    return (0, _snabbdom.h)(`div.${staticClasses}`, {
        class: {
            "lpv--menu": ctrl.pane != "board",
            "lpv--players": opts.showPlayers == "auto" ? ctrl.game.hasPlayerName() : opts.showPlayers
        },
        attrs: {
            tabindex: 0
        },
        hook: (0, _util.onInsert)((el)=>{
            ctrl.setGround((0, _chessground.Chessground)(el.querySelector(".cg-wrap"), makeConfig(ctrl, el)));
            el.addEventListener("keydown", (0, _events.onKeyDown)(ctrl));
        })
    }, [
        opts.showPlayers ? (0, _playerDefault.default)(ctrl, "top") : undefined,
        renderBoard(ctrl),
        opts.showPlayers ? (0, _playerDefault.default)(ctrl, "bottom") : undefined,
        opts.showControls ? (0, _menu.renderControls)(ctrl) : undefined,
        opts.showMoves ? (0, _side.renderMoves)(ctrl) : undefined,
        ctrl.pane == "menu" ? (0, _menu.renderMenu)(ctrl) : ctrl.pane == "pgn" ? renderPgnPane(ctrl) : undefined
    ]);
}
const renderBoard = (ctrl)=>(0, _snabbdom.h)("div.lpv__board", {
        hook: (0, _util.onInsert)((el)=>{
            el.addEventListener("click", ctrl.focus);
            if (ctrl.opts.scrollToMove && !("ontouchstart" in window)) el.addEventListener("wheel", (0, _events.stepwiseScroll)((e, scroll)=>{
                e.preventDefault();
                if (e.deltaY > 0 && scroll) ctrl.goTo("next", false);
                else if (e.deltaY < 0 && scroll) ctrl.goTo("prev", false);
            }));
        })
    }, (0, _snabbdom.h)("div.cg-wrap"));
const renderPgnPane = (ctrl)=>{
    const blob = new Blob([
        ctrl.opts.pgn
    ], {
        type: "text/plain"
    });
    return (0, _snabbdom.h)("div.lpv__pgn.lpv__pane", [
        (0, _snabbdom.h)("a.lpv__pgn__download.lpv__fbt", {
            attrs: {
                href: window.URL.createObjectURL(blob),
                download: ctrl.opts.menu.getPgn.fileName || `${ctrl.game.title()}.pgn`
            }
        }, ctrl.translate("download")),
        (0, _snabbdom.h)("textarea.lpv__pgn__text", ctrl.opts.pgn)
    ]);
};
const makeConfig = (ctrl, rootEl)=>({
        viewOnly: !ctrl.opts.drawArrows,
        addDimensionsCssVarsTo: rootEl,
        drawable: {
            enabled: ctrl.opts.drawArrows,
            visible: true
        },
        disableContextMenu: ctrl.opts.drawArrows,
        ...ctrl.opts.chessground || {},
        movable: {
            free: false
        },
        draggable: {
            enabled: false
        },
        selectable: {
            enabled: false
        },
        ...ctrl.cgState()
    });

},{"chessground":"heNSG","snabbdom":"Rkydo","./util":"8C7TE","../events":"u108d","./menu":"cyVdf","./side":"itPrr","./player":"cRGcT","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"heNSG":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "initModule", ()=>initModule);
parcelHelpers.export(exports, "Chessground", ()=>Chessground);
var _apiJs = require("./api.js");
var _configJs = require("./config.js");
var _stateJs = require("./state.js");
var _wrapJs = require("./wrap.js");
var _eventsJs = require("./events.js");
var _renderJs = require("./render.js");
var _autoPiecesJs = require("./autoPieces.js");
var _svgJs = require("./svg.js");
var _utilJs = require("./util.js");
function initModule({ el, config }) {
    return Chessground(el, config);
}
function Chessground(element, config) {
    const maybeState = (0, _stateJs.defaults)();
    (0, _configJs.configure)(maybeState, config || {});
    function redrawAll() {
        const prevUnbind = "dom" in maybeState ? maybeState.dom.unbind : undefined;
        // compute bounds from existing board element if possible
        // this allows non-square boards from CSS to be handled (for 3D)
        const elements = (0, _wrapJs.renderWrap)(element, maybeState), bounds = _utilJs.memo(()=>elements.board.getBoundingClientRect()), redrawNow = (skipSvg)=>{
            (0, _renderJs.render)(state);
            if (elements.autoPieces) _autoPiecesJs.render(state, elements.autoPieces);
            if (!skipSvg && elements.svg) _svgJs.renderSvg(state, elements.svg, elements.customSvg);
        }, onResize = ()=>{
            (0, _renderJs.updateBounds)(state);
            (0, _renderJs.renderResized)(state);
            if (elements.autoPieces) _autoPiecesJs.renderResized(state);
        };
        const state = maybeState;
        state.dom = {
            elements,
            bounds,
            redraw: debounceRedraw(redrawNow),
            redrawNow,
            unbind: prevUnbind
        };
        state.drawable.prevSvgHash = "";
        (0, _renderJs.updateBounds)(state);
        redrawNow(false);
        _eventsJs.bindBoard(state, onResize);
        if (!prevUnbind) state.dom.unbind = _eventsJs.bindDocument(state, onResize);
        state.events.insert && state.events.insert(elements);
        return state;
    }
    return (0, _apiJs.start)(redrawAll(), redrawAll);
}
function debounceRedraw(redrawNow) {
    let redrawing = false;
    return ()=>{
        if (redrawing) return;
        redrawing = true;
        requestAnimationFrame(()=>{
            redrawNow();
            redrawing = false;
        });
    };
}

},{"./api.js":"k6hk6","./config.js":"3Hxnb","./state.js":"34yFw","./wrap.js":"3Ia2Q","./events.js":"9isbb","./render.js":"lcsni","./autoPieces.js":"5QGpg","./svg.js":"bXA83","./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"k6hk6":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
// see API types and documentations in dts/api.d.ts
parcelHelpers.export(exports, "start", ()=>start);
var _boardJs = require("./board.js");
var _fenJs = require("./fen.js");
var _configJs = require("./config.js");
var _animJs = require("./anim.js");
var _dragJs = require("./drag.js");
var _explosionJs = require("./explosion.js");
function start(state, redrawAll) {
    function toggleOrientation() {
        _boardJs.toggleOrientation(state);
        redrawAll();
    }
    return {
        set (config) {
            if (config.orientation && config.orientation !== state.orientation) toggleOrientation();
            (0, _configJs.applyAnimation)(state, config);
            (config.fen ? (0, _animJs.anim) : (0, _animJs.render))((state)=>(0, _configJs.configure)(state, config), state);
        },
        state,
        getFen: ()=>(0, _fenJs.write)(state.pieces),
        toggleOrientation,
        setPieces (pieces) {
            (0, _animJs.anim)((state)=>_boardJs.setPieces(state, pieces), state);
        },
        selectSquare (key, force) {
            if (key) (0, _animJs.anim)((state)=>_boardJs.selectSquare(state, key, force), state);
            else if (state.selected) {
                _boardJs.unselect(state);
                state.dom.redraw();
            }
        },
        move (orig, dest) {
            (0, _animJs.anim)((state)=>_boardJs.baseMove(state, orig, dest), state);
        },
        newPiece (piece, key) {
            (0, _animJs.anim)((state)=>_boardJs.baseNewPiece(state, piece, key), state);
        },
        playPremove () {
            if (state.premovable.current) {
                if ((0, _animJs.anim)(_boardJs.playPremove, state)) return true;
                // if the premove couldn't be played, redraw to clear it up
                state.dom.redraw();
            }
            return false;
        },
        playPredrop (validate) {
            if (state.predroppable.current) {
                const result = _boardJs.playPredrop(state, validate);
                state.dom.redraw();
                return result;
            }
            return false;
        },
        cancelPremove () {
            (0, _animJs.render)(_boardJs.unsetPremove, state);
        },
        cancelPredrop () {
            (0, _animJs.render)(_boardJs.unsetPredrop, state);
        },
        cancelMove () {
            (0, _animJs.render)((state)=>{
                _boardJs.cancelMove(state);
                (0, _dragJs.cancel)(state);
            }, state);
        },
        stop () {
            (0, _animJs.render)((state)=>{
                _boardJs.stop(state);
                (0, _dragJs.cancel)(state);
            }, state);
        },
        explode (keys) {
            (0, _explosionJs.explosion)(state, keys);
        },
        setAutoShapes (shapes) {
            (0, _animJs.render)((state)=>state.drawable.autoShapes = shapes, state);
        },
        setShapes (shapes) {
            (0, _animJs.render)((state)=>state.drawable.shapes = shapes, state);
        },
        getKeyAtDomPos (pos) {
            return _boardJs.getKeyAtDomPos(pos, _boardJs.whitePov(state), state.dom.bounds());
        },
        redrawAll,
        dragNewPiece (piece, event, force) {
            (0, _dragJs.dragNewPiece)(state, piece, event, force);
        },
        destroy () {
            _boardJs.stop(state);
            state.dom.unbind && state.dom.unbind();
            state.dom.destroyed = true;
        }
    };
}

},{"./board.js":"clNWI","./fen.js":"fC8LN","./config.js":"3Hxnb","./anim.js":"ec24W","./drag.js":"26fmd","./explosion.js":"f7lA5","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"clNWI":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "callUserFunction", ()=>callUserFunction);
parcelHelpers.export(exports, "toggleOrientation", ()=>toggleOrientation);
parcelHelpers.export(exports, "reset", ()=>reset);
parcelHelpers.export(exports, "setPieces", ()=>setPieces);
parcelHelpers.export(exports, "setCheck", ()=>setCheck);
parcelHelpers.export(exports, "unsetPremove", ()=>unsetPremove);
parcelHelpers.export(exports, "unsetPredrop", ()=>unsetPredrop);
parcelHelpers.export(exports, "baseMove", ()=>baseMove);
parcelHelpers.export(exports, "baseNewPiece", ()=>baseNewPiece);
parcelHelpers.export(exports, "userMove", ()=>userMove);
parcelHelpers.export(exports, "dropNewPiece", ()=>dropNewPiece);
parcelHelpers.export(exports, "selectSquare", ()=>selectSquare);
parcelHelpers.export(exports, "setSelected", ()=>setSelected);
parcelHelpers.export(exports, "unselect", ()=>unselect);
parcelHelpers.export(exports, "canMove", ()=>canMove);
parcelHelpers.export(exports, "isDraggable", ()=>isDraggable);
parcelHelpers.export(exports, "playPremove", ()=>playPremove);
parcelHelpers.export(exports, "playPredrop", ()=>playPredrop);
parcelHelpers.export(exports, "cancelMove", ()=>cancelMove);
parcelHelpers.export(exports, "stop", ()=>stop);
parcelHelpers.export(exports, "getKeyAtDomPos", ()=>getKeyAtDomPos);
parcelHelpers.export(exports, "getSnappedKeyAtDomPos", ()=>getSnappedKeyAtDomPos);
parcelHelpers.export(exports, "whitePov", ()=>whitePov);
var _utilJs = require("./util.js");
var _premoveJs = require("./premove.js");
function callUserFunction(f, ...args) {
    if (f) setTimeout(()=>f(...args), 1);
}
function toggleOrientation(state) {
    state.orientation = (0, _utilJs.opposite)(state.orientation);
    state.animation.current = state.draggable.current = state.selected = undefined;
}
function reset(state) {
    state.lastMove = undefined;
    unselect(state);
    unsetPremove(state);
    unsetPredrop(state);
}
function setPieces(state, pieces) {
    for (const [key, piece] of pieces)if (piece) state.pieces.set(key, piece);
    else state.pieces.delete(key);
}
function setCheck(state, color) {
    state.check = undefined;
    if (color === true) color = state.turnColor;
    if (color) {
        for (const [k, p] of state.pieces)if (p.role === "king" && p.color === color) state.check = k;
    }
}
function setPremove(state, orig, dest, meta) {
    unsetPredrop(state);
    state.premovable.current = [
        orig,
        dest
    ];
    callUserFunction(state.premovable.events.set, orig, dest, meta);
}
function unsetPremove(state) {
    if (state.premovable.current) {
        state.premovable.current = undefined;
        callUserFunction(state.premovable.events.unset);
    }
}
function setPredrop(state, role, key) {
    unsetPremove(state);
    state.predroppable.current = {
        role,
        key
    };
    callUserFunction(state.predroppable.events.set, role, key);
}
function unsetPredrop(state) {
    const pd = state.predroppable;
    if (pd.current) {
        pd.current = undefined;
        callUserFunction(pd.events.unset);
    }
}
function tryAutoCastle(state, orig, dest) {
    if (!state.autoCastle) return false;
    const king = state.pieces.get(orig);
    if (!king || king.role !== "king") return false;
    const origPos = (0, _utilJs.key2pos)(orig);
    const destPos = (0, _utilJs.key2pos)(dest);
    if (origPos[1] !== 0 && origPos[1] !== 7 || origPos[1] !== destPos[1]) return false;
    if (origPos[0] === 4 && !state.pieces.has(dest)) {
        if (destPos[0] === 6) dest = (0, _utilJs.pos2key)([
            7,
            destPos[1]
        ]);
        else if (destPos[0] === 2) dest = (0, _utilJs.pos2key)([
            0,
            destPos[1]
        ]);
    }
    const rook = state.pieces.get(dest);
    if (!rook || rook.color !== king.color || rook.role !== "rook") return false;
    state.pieces.delete(orig);
    state.pieces.delete(dest);
    if (origPos[0] < destPos[0]) {
        state.pieces.set((0, _utilJs.pos2key)([
            6,
            destPos[1]
        ]), king);
        state.pieces.set((0, _utilJs.pos2key)([
            5,
            destPos[1]
        ]), rook);
    } else {
        state.pieces.set((0, _utilJs.pos2key)([
            2,
            destPos[1]
        ]), king);
        state.pieces.set((0, _utilJs.pos2key)([
            3,
            destPos[1]
        ]), rook);
    }
    return true;
}
function baseMove(state, orig, dest) {
    const origPiece = state.pieces.get(orig), destPiece = state.pieces.get(dest);
    if (orig === dest || !origPiece) return false;
    const captured = destPiece && destPiece.color !== origPiece.color ? destPiece : undefined;
    if (dest === state.selected) unselect(state);
    callUserFunction(state.events.move, orig, dest, captured);
    if (!tryAutoCastle(state, orig, dest)) {
        state.pieces.set(dest, origPiece);
        state.pieces.delete(orig);
    }
    state.lastMove = [
        orig,
        dest
    ];
    state.check = undefined;
    callUserFunction(state.events.change);
    return captured || true;
}
function baseNewPiece(state, piece, key, force) {
    if (state.pieces.has(key)) {
        if (force) state.pieces.delete(key);
        else return false;
    }
    callUserFunction(state.events.dropNewPiece, piece, key);
    state.pieces.set(key, piece);
    state.lastMove = [
        key
    ];
    state.check = undefined;
    callUserFunction(state.events.change);
    state.movable.dests = undefined;
    state.turnColor = (0, _utilJs.opposite)(state.turnColor);
    return true;
}
function baseUserMove(state, orig, dest) {
    const result = baseMove(state, orig, dest);
    if (result) {
        state.movable.dests = undefined;
        state.turnColor = (0, _utilJs.opposite)(state.turnColor);
        state.animation.current = undefined;
    }
    return result;
}
function userMove(state, orig, dest) {
    if (canMove(state, orig, dest)) {
        const result = baseUserMove(state, orig, dest);
        if (result) {
            const holdTime = state.hold.stop();
            unselect(state);
            const metadata = {
                premove: false,
                ctrlKey: state.stats.ctrlKey,
                holdTime
            };
            if (result !== true) metadata.captured = result;
            callUserFunction(state.movable.events.after, orig, dest, metadata);
            return true;
        }
    } else if (canPremove(state, orig, dest)) {
        setPremove(state, orig, dest, {
            ctrlKey: state.stats.ctrlKey
        });
        unselect(state);
        return true;
    }
    unselect(state);
    return false;
}
function dropNewPiece(state, orig, dest, force) {
    const piece = state.pieces.get(orig);
    if (piece && (canDrop(state, orig, dest) || force)) {
        state.pieces.delete(orig);
        baseNewPiece(state, piece, dest, force);
        callUserFunction(state.movable.events.afterNewPiece, piece.role, dest, {
            premove: false,
            predrop: false
        });
    } else if (piece && canPredrop(state, orig, dest)) setPredrop(state, piece.role, dest);
    else {
        unsetPremove(state);
        unsetPredrop(state);
    }
    state.pieces.delete(orig);
    unselect(state);
}
function selectSquare(state, key, force) {
    callUserFunction(state.events.select, key);
    if (state.selected) {
        if (state.selected === key && !state.draggable.enabled) {
            unselect(state);
            state.hold.cancel();
            return;
        } else if ((state.selectable.enabled || force) && state.selected !== key) {
            if (userMove(state, state.selected, key)) {
                state.stats.dragged = false;
                return;
            }
        }
    }
    if ((state.selectable.enabled || state.draggable.enabled) && (isMovable(state, key) || isPremovable(state, key))) {
        setSelected(state, key);
        state.hold.start();
    }
}
function setSelected(state, key) {
    state.selected = key;
    if (isPremovable(state, key)) // calculate chess premoves if custom premoves are not passed
    {
        if (!state.premovable.customDests) state.premovable.dests = (0, _premoveJs.premove)(state.pieces, key, state.premovable.castle);
    } else state.premovable.dests = undefined;
}
function unselect(state) {
    state.selected = undefined;
    state.premovable.dests = undefined;
    state.hold.cancel();
}
function isMovable(state, orig) {
    const piece = state.pieces.get(orig);
    return !!piece && (state.movable.color === "both" || state.movable.color === piece.color && state.turnColor === piece.color);
}
const canMove = (state, orig, dest)=>{
    var _a, _b;
    return orig !== dest && isMovable(state, orig) && (state.movable.free || !!((_b = (_a = state.movable.dests) === null || _a === void 0 ? void 0 : _a.get(orig)) === null || _b === void 0 ? void 0 : _b.includes(dest)));
};
function canDrop(state, orig, dest) {
    const piece = state.pieces.get(orig);
    return !!piece && (orig === dest || !state.pieces.has(dest)) && (state.movable.color === "both" || state.movable.color === piece.color && state.turnColor === piece.color);
}
function isPremovable(state, orig) {
    const piece = state.pieces.get(orig);
    return !!piece && state.premovable.enabled && state.movable.color === piece.color && state.turnColor !== piece.color;
}
function canPremove(state, orig, dest) {
    var _a, _b;
    const validPremoves = (_b = (_a = state.premovable.customDests) === null || _a === void 0 ? void 0 : _a.get(orig)) !== null && _b !== void 0 ? _b : (0, _premoveJs.premove)(state.pieces, orig, state.premovable.castle);
    return orig !== dest && isPremovable(state, orig) && validPremoves.includes(dest);
}
function canPredrop(state, orig, dest) {
    const piece = state.pieces.get(orig);
    const destPiece = state.pieces.get(dest);
    return !!piece && (!destPiece || destPiece.color !== state.movable.color) && state.predroppable.enabled && (piece.role !== "pawn" || dest[1] !== "1" && dest[1] !== "8") && state.movable.color === piece.color && state.turnColor !== piece.color;
}
function isDraggable(state, orig) {
    const piece = state.pieces.get(orig);
    return !!piece && state.draggable.enabled && (state.movable.color === "both" || state.movable.color === piece.color && (state.turnColor === piece.color || state.premovable.enabled));
}
function playPremove(state) {
    const move = state.premovable.current;
    if (!move) return false;
    const orig = move[0], dest = move[1];
    let success = false;
    if (canMove(state, orig, dest)) {
        const result = baseUserMove(state, orig, dest);
        if (result) {
            const metadata = {
                premove: true
            };
            if (result !== true) metadata.captured = result;
            callUserFunction(state.movable.events.after, orig, dest, metadata);
            success = true;
        }
    }
    unsetPremove(state);
    return success;
}
function playPredrop(state, validate) {
    const drop = state.predroppable.current;
    let success = false;
    if (!drop) return false;
    if (validate(drop)) {
        const piece = {
            role: drop.role,
            color: state.movable.color
        };
        if (baseNewPiece(state, piece, drop.key)) {
            callUserFunction(state.movable.events.afterNewPiece, drop.role, drop.key, {
                premove: false,
                predrop: true
            });
            success = true;
        }
    }
    unsetPredrop(state);
    return success;
}
function cancelMove(state) {
    unsetPremove(state);
    unsetPredrop(state);
    unselect(state);
}
function stop(state) {
    state.movable.color = state.movable.dests = state.animation.current = undefined;
    cancelMove(state);
}
function getKeyAtDomPos(pos, asWhite, bounds) {
    let file = Math.floor(8 * (pos[0] - bounds.left) / bounds.width);
    if (!asWhite) file = 7 - file;
    let rank = 7 - Math.floor(8 * (pos[1] - bounds.top) / bounds.height);
    if (!asWhite) rank = 7 - rank;
    return file >= 0 && file < 8 && rank >= 0 && rank < 8 ? (0, _utilJs.pos2key)([
        file,
        rank
    ]) : undefined;
}
function getSnappedKeyAtDomPos(orig, pos, asWhite, bounds) {
    const origPos = (0, _utilJs.key2pos)(orig);
    const validSnapPos = (0, _utilJs.allPos).filter((pos2)=>(0, _premoveJs.queen)(origPos[0], origPos[1], pos2[0], pos2[1]) || (0, _premoveJs.knight)(origPos[0], origPos[1], pos2[0], pos2[1]));
    const validSnapCenters = validSnapPos.map((pos2)=>(0, _utilJs.computeSquareCenter)((0, _utilJs.pos2key)(pos2), asWhite, bounds));
    const validSnapDistances = validSnapCenters.map((pos2)=>(0, _utilJs.distanceSq)(pos, pos2));
    const [, closestSnapIndex] = validSnapDistances.reduce((a, b, index)=>a[0] < b ? a : [
            b,
            index
        ], [
        validSnapDistances[0],
        0
    ]);
    return (0, _utilJs.pos2key)(validSnapPos[closestSnapIndex]);
}
const whitePov = (s)=>s.orientation === "white";

},{"./util.js":"akuUP","./premove.js":"as9EK","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"as9EK":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "knight", ()=>knight);
parcelHelpers.export(exports, "queen", ()=>queen);
parcelHelpers.export(exports, "premove", ()=>premove);
var _utilJs = require("./util.js");
const diff = (a, b)=>Math.abs(a - b);
const pawn = (color)=>(x1, y1, x2, y2)=>diff(x1, x2) < 2 && (color === "white" ? y2 === y1 + 1 || y1 <= 1 && y2 === y1 + 2 && x1 === x2 : y2 === y1 - 1 || y1 >= 6 && y2 === y1 - 2 && x1 === x2);
const knight = (x1, y1, x2, y2)=>{
    const xd = diff(x1, x2);
    const yd = diff(y1, y2);
    return xd === 1 && yd === 2 || xd === 2 && yd === 1;
};
const bishop = (x1, y1, x2, y2)=>{
    return diff(x1, x2) === diff(y1, y2);
};
const rook = (x1, y1, x2, y2)=>{
    return x1 === x2 || y1 === y2;
};
const queen = (x1, y1, x2, y2)=>{
    return bishop(x1, y1, x2, y2) || rook(x1, y1, x2, y2);
};
const king = (color, rookFiles, canCastle)=>(x1, y1, x2, y2)=>diff(x1, x2) < 2 && diff(y1, y2) < 2 || canCastle && y1 === y2 && y1 === (color === "white" ? 0 : 7) && (x1 === 4 && (x2 === 2 && rookFiles.includes(0) || x2 === 6 && rookFiles.includes(7)) || rookFiles.includes(x2));
function rookFilesOf(pieces, color) {
    const backrank = color === "white" ? "1" : "8";
    const files = [];
    for (const [key, piece] of pieces)if (key[1] === backrank && piece.color === color && piece.role === "rook") files.push(_utilJs.key2pos(key)[0]);
    return files;
}
function premove(pieces, key, canCastle) {
    const piece = pieces.get(key);
    if (!piece) return [];
    const pos = _utilJs.key2pos(key), r = piece.role, mobility = r === "pawn" ? pawn(piece.color) : r === "knight" ? knight : r === "bishop" ? bishop : r === "rook" ? rook : r === "queen" ? queen : king(piece.color, rookFilesOf(pieces, piece.color), canCastle);
    return _utilJs.allPos.filter((pos2)=>(pos[0] !== pos2[0] || pos[1] !== pos2[1]) && mobility(pos[0], pos[1], pos2[0], pos2[1])).map(_utilJs.pos2key);
}

},{"./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"fC8LN":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "initial", ()=>initial);
parcelHelpers.export(exports, "read", ()=>read);
parcelHelpers.export(exports, "write", ()=>write);
var _utilJs = require("./util.js");
var _typesJs = require("./types.js");
const initial = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
const roles = {
    p: "pawn",
    r: "rook",
    n: "knight",
    b: "bishop",
    q: "queen",
    k: "king"
};
const letters = {
    pawn: "p",
    rook: "r",
    knight: "n",
    bishop: "b",
    queen: "q",
    king: "k"
};
function read(fen) {
    if (fen === "start") fen = initial;
    const pieces = new Map();
    let row = 7, col = 0;
    for (const c of fen)switch(c){
        case " ":
        case "[":
            return pieces;
        case "/":
            --row;
            if (row < 0) return pieces;
            col = 0;
            break;
        case "~":
            {
                const piece = pieces.get((0, _utilJs.pos2key)([
                    col - 1,
                    row
                ]));
                if (piece) piece.promoted = true;
                break;
            }
        default:
            {
                const nb = c.charCodeAt(0);
                if (nb < 57) col += nb - 48;
                else {
                    const role = c.toLowerCase();
                    pieces.set((0, _utilJs.pos2key)([
                        col,
                        row
                    ]), {
                        role: roles[role],
                        color: c === role ? "black" : "white"
                    });
                    ++col;
                }
            }
    }
    return pieces;
}
function write(pieces) {
    return (0, _utilJs.invRanks).map((y)=>_typesJs.files.map((x)=>{
            const piece = pieces.get(x + y);
            if (piece) {
                let p = letters[piece.role];
                if (piece.color === "white") p = p.toUpperCase();
                if (piece.promoted) p += "~";
                return p;
            } else return "1";
        }).join("")).join("/").replace(/1{2,}/g, (s)=>s.length.toString());
}

},{"./util.js":"akuUP","./types.js":"7vE4h","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"3Hxnb":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "applyAnimation", ()=>applyAnimation);
parcelHelpers.export(exports, "configure", ()=>configure);
var _boardJs = require("./board.js");
var _fenJs = require("./fen.js");
function applyAnimation(state, config) {
    if (config.animation) {
        deepMerge(state.animation, config.animation);
        // no need for such short animations
        if ((state.animation.duration || 0) < 70) state.animation.enabled = false;
    }
}
function configure(state, config) {
    var _a, _b, _c;
    // don't merge destinations and autoShapes. Just override.
    if ((_a = config.movable) === null || _a === void 0 ? void 0 : _a.dests) state.movable.dests = undefined;
    if ((_b = config.drawable) === null || _b === void 0 ? void 0 : _b.autoShapes) state.drawable.autoShapes = [];
    deepMerge(state, config);
    // if a fen was provided, replace the pieces
    if (config.fen) {
        state.pieces = (0, _fenJs.read)(config.fen);
        state.drawable.shapes = ((_c = config.drawable) === null || _c === void 0 ? void 0 : _c.shapes) || [];
    }
    // apply config values that could be undefined yet meaningful
    if ("check" in config) (0, _boardJs.setCheck)(state, config.check || false);
    if ("lastMove" in config && !config.lastMove) state.lastMove = undefined;
    else if (config.lastMove) state.lastMove = config.lastMove;
    // fix move/premove dests
    if (state.selected) (0, _boardJs.setSelected)(state, state.selected);
    applyAnimation(state, config);
    if (!state.movable.rookCastle && state.movable.dests) {
        const rank = state.movable.color === "white" ? "1" : "8", kingStartPos = "e" + rank, dests = state.movable.dests.get(kingStartPos), king = state.pieces.get(kingStartPos);
        if (!dests || !king || king.role !== "king") return;
        state.movable.dests.set(kingStartPos, dests.filter((d)=>!(d === "a" + rank && dests.includes("c" + rank)) && !(d === "h" + rank && dests.includes("g" + rank))));
    }
}
function deepMerge(base, extend) {
    for(const key in extend)if (Object.prototype.hasOwnProperty.call(extend, key)) {
        if (Object.prototype.hasOwnProperty.call(base, key) && isPlainObject(base[key]) && isPlainObject(extend[key])) deepMerge(base[key], extend[key]);
        else base[key] = extend[key];
    }
}
function isPlainObject(o) {
    if (typeof o !== "object" || o === null) return false;
    const proto = Object.getPrototypeOf(o);
    return proto === Object.prototype || proto === null;
}

},{"./board.js":"clNWI","./fen.js":"fC8LN","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"ec24W":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "anim", ()=>anim);
parcelHelpers.export(exports, "render", ()=>render);
var _utilJs = require("./util.js");
const anim = (mutation, state)=>state.animation.enabled ? animate(mutation, state) : render(mutation, state);
function render(mutation, state) {
    const result = mutation(state);
    state.dom.redraw();
    return result;
}
const makePiece = (key, piece)=>({
        key: key,
        pos: _utilJs.key2pos(key),
        piece: piece
    });
const closer = (piece, pieces)=>pieces.sort((p1, p2)=>_utilJs.distanceSq(piece.pos, p1.pos) - _utilJs.distanceSq(piece.pos, p2.pos))[0];
function computePlan(prevPieces, current) {
    const anims = new Map(), animedOrigs = [], fadings = new Map(), missings = [], news = [], prePieces = new Map();
    let curP, preP, vector;
    for (const [k, p] of prevPieces)prePieces.set(k, makePiece(k, p));
    for (const key of _utilJs.allKeys){
        curP = current.pieces.get(key);
        preP = prePieces.get(key);
        if (curP) {
            if (preP) {
                if (!_utilJs.samePiece(curP, preP.piece)) {
                    missings.push(preP);
                    news.push(makePiece(key, curP));
                }
            } else news.push(makePiece(key, curP));
        } else if (preP) missings.push(preP);
    }
    for (const newP of news){
        preP = closer(newP, missings.filter((p)=>_utilJs.samePiece(newP.piece, p.piece)));
        if (preP) {
            vector = [
                preP.pos[0] - newP.pos[0],
                preP.pos[1] - newP.pos[1]
            ];
            anims.set(newP.key, vector.concat(vector));
            animedOrigs.push(preP.key);
        }
    }
    for (const p of missings)if (!animedOrigs.includes(p.key)) fadings.set(p.key, p.piece);
    return {
        anims: anims,
        fadings: fadings
    };
}
function step(state, now) {
    const cur = state.animation.current;
    if (cur === undefined) {
        // animation was canceled :(
        if (!state.dom.destroyed) state.dom.redrawNow();
        return;
    }
    const rest = 1 - (now - cur.start) * cur.frequency;
    if (rest <= 0) {
        state.animation.current = undefined;
        state.dom.redrawNow();
    } else {
        const ease = easing(rest);
        for (const cfg of cur.plan.anims.values()){
            cfg[2] = cfg[0] * ease;
            cfg[3] = cfg[1] * ease;
        }
        state.dom.redrawNow(true); // optimisation: don't render SVG changes during animations
        requestAnimationFrame((now = performance.now())=>step(state, now));
    }
}
function animate(mutation, state) {
    // clone state before mutating it
    const prevPieces = new Map(state.pieces);
    const result = mutation(state);
    const plan = computePlan(prevPieces, state);
    if (plan.anims.size || plan.fadings.size) {
        const alreadyRunning = state.animation.current && state.animation.current.start;
        state.animation.current = {
            start: performance.now(),
            frequency: 1 / state.animation.duration,
            plan: plan
        };
        if (!alreadyRunning) step(state, performance.now());
    } else // don't animate, just render right away
    state.dom.redraw();
    return result;
}
// https://gist.github.com/gre/1650294
const easing = (t)=>t < 0.5 ? 4 * t * t * t : (t - 1) * (2 * t - 2) * (2 * t - 2) + 1;

},{"./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"26fmd":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "start", ()=>start);
parcelHelpers.export(exports, "dragNewPiece", ()=>dragNewPiece);
parcelHelpers.export(exports, "move", ()=>move);
parcelHelpers.export(exports, "end", ()=>end);
parcelHelpers.export(exports, "cancel", ()=>cancel);
var _boardJs = require("./board.js");
var _utilJs = require("./util.js");
var _drawJs = require("./draw.js");
var _animJs = require("./anim.js");
function start(s, e) {
    if (!(s.trustAllEvents || e.isTrusted)) return; // only trust when trustAllEvents is enabled
    if (e.button !== undefined && e.button !== 0) return; // only touch or left click
    if (e.touches && e.touches.length > 1) return; // support one finger touch only
    const bounds = s.dom.bounds(), position = _utilJs.eventPosition(e), orig = _boardJs.getKeyAtDomPos(position, _boardJs.whitePov(s), bounds);
    if (!orig) return;
    const piece = s.pieces.get(orig);
    const previouslySelected = s.selected;
    if (!previouslySelected && s.drawable.enabled && (s.drawable.eraseOnClick || !piece || piece.color !== s.turnColor)) (0, _drawJs.clear)(s);
    // Prevent touch scroll and create no corresponding mouse event, if there
    // is an intent to interact with the board.
    if (e.cancelable !== false && (!e.touches || s.blockTouchScroll || piece || previouslySelected || pieceCloseTo(s, position))) e.preventDefault();
    else if (e.touches) return; // Handle only corresponding mouse event https://github.com/lichess-org/chessground/pull/268
    const hadPremove = !!s.premovable.current;
    const hadPredrop = !!s.predroppable.current;
    s.stats.ctrlKey = e.ctrlKey;
    if (s.selected && _boardJs.canMove(s, s.selected, orig)) (0, _animJs.anim)((state)=>_boardJs.selectSquare(state, orig), s);
    else _boardJs.selectSquare(s, orig);
    const stillSelected = s.selected === orig;
    const element = pieceElementByKey(s, orig);
    if (piece && element && stillSelected && _boardJs.isDraggable(s, orig)) {
        s.draggable.current = {
            orig,
            piece,
            origPos: position,
            pos: position,
            started: s.draggable.autoDistance && s.stats.dragged,
            element,
            previouslySelected,
            originTarget: e.target,
            keyHasChanged: false
        };
        element.cgDragging = true;
        element.classList.add("dragging");
        // place ghost
        const ghost = s.dom.elements.ghost;
        if (ghost) {
            ghost.className = `ghost ${piece.color} ${piece.role}`;
            _utilJs.translate(ghost, _utilJs.posToTranslate(bounds)(_utilJs.key2pos(orig), _boardJs.whitePov(s)));
            _utilJs.setVisible(ghost, true);
        }
        processDrag(s);
    } else {
        if (hadPremove) _boardJs.unsetPremove(s);
        if (hadPredrop) _boardJs.unsetPredrop(s);
    }
    s.dom.redraw();
}
function pieceCloseTo(s, pos) {
    const asWhite = _boardJs.whitePov(s), bounds = s.dom.bounds(), radiusSq = Math.pow(bounds.width / 8, 2);
    for (const key of s.pieces.keys()){
        const center = _utilJs.computeSquareCenter(key, asWhite, bounds);
        if (_utilJs.distanceSq(center, pos) <= radiusSq) return true;
    }
    return false;
}
function dragNewPiece(s, piece, e, force) {
    const key = "a0";
    s.pieces.set(key, piece);
    s.dom.redraw();
    const position = _utilJs.eventPosition(e);
    s.draggable.current = {
        orig: key,
        piece,
        origPos: position,
        pos: position,
        started: true,
        element: ()=>pieceElementByKey(s, key),
        originTarget: e.target,
        newPiece: true,
        force: !!force,
        keyHasChanged: false
    };
    processDrag(s);
}
function processDrag(s) {
    requestAnimationFrame(()=>{
        var _a;
        const cur = s.draggable.current;
        if (!cur) return;
        // cancel animations while dragging
        if ((_a = s.animation.current) === null || _a === void 0 ? void 0 : _a.plan.anims.has(cur.orig)) s.animation.current = undefined;
        // if moving piece is gone, cancel
        const origPiece = s.pieces.get(cur.orig);
        if (!origPiece || !_utilJs.samePiece(origPiece, cur.piece)) cancel(s);
        else {
            if (!cur.started && _utilJs.distanceSq(cur.pos, cur.origPos) >= Math.pow(s.draggable.distance, 2)) cur.started = true;
            if (cur.started) {
                // support lazy elements
                if (typeof cur.element === "function") {
                    const found = cur.element();
                    if (!found) return;
                    found.cgDragging = true;
                    found.classList.add("dragging");
                    cur.element = found;
                }
                const bounds = s.dom.bounds();
                _utilJs.translate(cur.element, [
                    cur.pos[0] - bounds.left - bounds.width / 16,
                    cur.pos[1] - bounds.top - bounds.height / 16
                ]);
                cur.keyHasChanged || (cur.keyHasChanged = cur.orig !== _boardJs.getKeyAtDomPos(cur.pos, _boardJs.whitePov(s), bounds));
            }
        }
        processDrag(s);
    });
}
function move(s, e) {
    // support one finger touch only
    if (s.draggable.current && (!e.touches || e.touches.length < 2)) s.draggable.current.pos = _utilJs.eventPosition(e);
}
function end(s, e) {
    const cur = s.draggable.current;
    if (!cur) return;
    // create no corresponding mouse event
    if (e.type === "touchend" && e.cancelable !== false) e.preventDefault();
    // comparing with the origin target is an easy way to test that the end event
    // has the same touch origin
    if (e.type === "touchend" && cur.originTarget !== e.target && !cur.newPiece) {
        s.draggable.current = undefined;
        return;
    }
    _boardJs.unsetPremove(s);
    _boardJs.unsetPredrop(s);
    // touchend has no position; so use the last touchmove position instead
    const eventPos = _utilJs.eventPosition(e) || cur.pos;
    const dest = _boardJs.getKeyAtDomPos(eventPos, _boardJs.whitePov(s), s.dom.bounds());
    if (dest && cur.started && cur.orig !== dest) {
        if (cur.newPiece) _boardJs.dropNewPiece(s, cur.orig, dest, cur.force);
        else {
            s.stats.ctrlKey = e.ctrlKey;
            if (_boardJs.userMove(s, cur.orig, dest)) s.stats.dragged = true;
        }
    } else if (cur.newPiece) s.pieces.delete(cur.orig);
    else if (s.draggable.deleteOnDropOff && !dest) {
        s.pieces.delete(cur.orig);
        _boardJs.callUserFunction(s.events.change);
    }
    if ((cur.orig === cur.previouslySelected || cur.keyHasChanged) && (cur.orig === dest || !dest)) _boardJs.unselect(s);
    else if (!s.selectable.enabled) _boardJs.unselect(s);
    removeDragElements(s);
    s.draggable.current = undefined;
    s.dom.redraw();
}
function cancel(s) {
    const cur = s.draggable.current;
    if (cur) {
        if (cur.newPiece) s.pieces.delete(cur.orig);
        s.draggable.current = undefined;
        _boardJs.unselect(s);
        removeDragElements(s);
        s.dom.redraw();
    }
}
function removeDragElements(s) {
    const e = s.dom.elements;
    if (e.ghost) _utilJs.setVisible(e.ghost, false);
}
function pieceElementByKey(s, key) {
    let el = s.dom.elements.board.firstChild;
    while(el){
        if (el.cgKey === key && el.tagName === "PIECE") return el;
        el = el.nextSibling;
    }
    return;
}

},{"./board.js":"clNWI","./util.js":"akuUP","./draw.js":"6rxV9","./anim.js":"ec24W","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"6rxV9":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "start", ()=>start);
parcelHelpers.export(exports, "processDraw", ()=>processDraw);
parcelHelpers.export(exports, "move", ()=>move);
parcelHelpers.export(exports, "end", ()=>end);
parcelHelpers.export(exports, "cancel", ()=>cancel);
parcelHelpers.export(exports, "clear", ()=>clear);
var _boardJs = require("./board.js");
var _utilJs = require("./util.js");
const brushes = [
    "green",
    "red",
    "blue",
    "yellow"
];
function start(state, e) {
    // support one finger touch only
    if (e.touches && e.touches.length > 1) return;
    e.stopPropagation();
    e.preventDefault();
    e.ctrlKey ? (0, _boardJs.unselect)(state) : (0, _boardJs.cancelMove)(state);
    const pos = (0, _utilJs.eventPosition)(e), orig = (0, _boardJs.getKeyAtDomPos)(pos, (0, _boardJs.whitePov)(state), state.dom.bounds());
    if (!orig) return;
    state.drawable.current = {
        orig,
        pos,
        brush: eventBrush(e),
        snapToValidMove: state.drawable.defaultSnapToValidMove
    };
    processDraw(state);
}
function processDraw(state) {
    requestAnimationFrame(()=>{
        const cur = state.drawable.current;
        if (cur) {
            const keyAtDomPos = (0, _boardJs.getKeyAtDomPos)(cur.pos, (0, _boardJs.whitePov)(state), state.dom.bounds());
            if (!keyAtDomPos) cur.snapToValidMove = false;
            const mouseSq = cur.snapToValidMove ? (0, _boardJs.getSnappedKeyAtDomPos)(cur.orig, cur.pos, (0, _boardJs.whitePov)(state), state.dom.bounds()) : keyAtDomPos;
            if (mouseSq !== cur.mouseSq) {
                cur.mouseSq = mouseSq;
                cur.dest = mouseSq !== cur.orig ? mouseSq : undefined;
                state.dom.redrawNow();
            }
            processDraw(state);
        }
    });
}
function move(state, e) {
    if (state.drawable.current) state.drawable.current.pos = (0, _utilJs.eventPosition)(e);
}
function end(state) {
    const cur = state.drawable.current;
    if (cur) {
        if (cur.mouseSq) addShape(state.drawable, cur);
        cancel(state);
    }
}
function cancel(state) {
    if (state.drawable.current) {
        state.drawable.current = undefined;
        state.dom.redraw();
    }
}
function clear(state) {
    if (state.drawable.shapes.length) {
        state.drawable.shapes = [];
        state.dom.redraw();
        onChange(state.drawable);
    }
}
function eventBrush(e) {
    var _a;
    const modA = (e.shiftKey || e.ctrlKey) && (0, _utilJs.isRightButton)(e);
    const modB = e.altKey || e.metaKey || ((_a = e.getModifierState) === null || _a === void 0 ? void 0 : _a.call(e, "AltGraph"));
    return brushes[(modA ? 1 : 0) + (modB ? 2 : 0)];
}
function addShape(drawable, cur) {
    const sameShape = (s)=>s.orig === cur.orig && s.dest === cur.dest;
    const similar = drawable.shapes.find(sameShape);
    if (similar) drawable.shapes = drawable.shapes.filter((s)=>!sameShape(s));
    if (!similar || similar.brush !== cur.brush) drawable.shapes.push({
        orig: cur.orig,
        dest: cur.dest,
        brush: cur.brush
    });
    onChange(drawable);
}
function onChange(drawable) {
    if (drawable.onChange) drawable.onChange(drawable.shapes);
}

},{"./board.js":"clNWI","./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"f7lA5":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "explosion", ()=>explosion);
function explosion(state, keys) {
    state.exploding = {
        stage: 1,
        keys
    };
    state.dom.redraw();
    setTimeout(()=>{
        setStage(state, 2);
        setTimeout(()=>setStage(state, undefined), 120);
    }, 120);
}
function setStage(state, stage) {
    if (state.exploding) {
        if (stage) state.exploding.stage = stage;
        else state.exploding = undefined;
        state.dom.redraw();
    }
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"34yFw":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "defaults", ()=>defaults);
var _fenJs = require("./fen.js");
var _utilJs = require("./util.js");
function defaults() {
    return {
        pieces: _fenJs.read(_fenJs.initial),
        orientation: "white",
        turnColor: "white",
        coordinates: true,
        ranksPosition: "right",
        autoCastle: true,
        viewOnly: false,
        disableContextMenu: false,
        addPieceZIndex: false,
        blockTouchScroll: false,
        pieceKey: false,
        trustAllEvents: false,
        highlight: {
            lastMove: true,
            check: true
        },
        animation: {
            enabled: true,
            duration: 200
        },
        movable: {
            free: true,
            color: "both",
            showDests: true,
            events: {},
            rookCastle: true
        },
        premovable: {
            enabled: true,
            showDests: true,
            castle: true,
            events: {}
        },
        predroppable: {
            enabled: false,
            events: {}
        },
        draggable: {
            enabled: true,
            distance: 3,
            autoDistance: true,
            showGhost: true,
            deleteOnDropOff: false
        },
        dropmode: {
            active: false
        },
        selectable: {
            enabled: true
        },
        stats: {
            // on touchscreen, default to "tap-tap" moves
            // instead of drag
            dragged: !("ontouchstart" in window)
        },
        events: {},
        drawable: {
            enabled: true,
            visible: true,
            defaultSnapToValidMove: true,
            eraseOnClick: true,
            shapes: [],
            autoShapes: [],
            brushes: {
                green: {
                    key: "g",
                    color: "#15781B",
                    opacity: 1,
                    lineWidth: 10
                },
                red: {
                    key: "r",
                    color: "#882020",
                    opacity: 1,
                    lineWidth: 10
                },
                blue: {
                    key: "b",
                    color: "#003088",
                    opacity: 1,
                    lineWidth: 10
                },
                yellow: {
                    key: "y",
                    color: "#e68f00",
                    opacity: 1,
                    lineWidth: 10
                },
                paleBlue: {
                    key: "pb",
                    color: "#003088",
                    opacity: 0.4,
                    lineWidth: 15
                },
                paleGreen: {
                    key: "pg",
                    color: "#15781B",
                    opacity: 0.4,
                    lineWidth: 15
                },
                paleRed: {
                    key: "pr",
                    color: "#882020",
                    opacity: 0.4,
                    lineWidth: 15
                },
                paleGrey: {
                    key: "pgr",
                    color: "#4a4a4a",
                    opacity: 0.35,
                    lineWidth: 15
                },
                purple: {
                    key: "purp",
                    color: "#68217a",
                    opacity: 0.65,
                    lineWidth: 10
                },
                pink: {
                    key: "pink",
                    color: "#ee2080",
                    opacity: 0.5,
                    lineWidth: 10
                },
                hilite: {
                    key: "hilite",
                    color: "#fff",
                    opacity: 1,
                    lineWidth: 1
                }
            },
            prevSvgHash: ""
        },
        hold: (0, _utilJs.timer)()
    };
}

},{"./fen.js":"fC8LN","./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"3Ia2Q":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "renderWrap", ()=>renderWrap);
var _utilJs = require("./util.js");
var _typesJs = require("./types.js");
var _svgJs = require("./svg.js");
function renderWrap(element, s) {
    // .cg-wrap (element passed to Chessground)
    //   cg-container
    //     cg-board
    //     svg.cg-shapes
    //       defs
    //       g
    //     svg.cg-custom-svgs
    //       g
    //     cg-auto-pieces
    //     coords.ranks
    //     coords.files
    //     piece.ghost
    element.innerHTML = "";
    // ensure the cg-wrap class is set
    // so bounds calculation can use the CSS width/height values
    // add that class yourself to the element before calling chessground
    // for a slight performance improvement! (avoids recomputing style)
    element.classList.add("cg-wrap");
    for (const c of (0, _typesJs.colors))element.classList.toggle("orientation-" + c, s.orientation === c);
    element.classList.toggle("manipulable", !s.viewOnly);
    const container = (0, _utilJs.createEl)("cg-container");
    element.appendChild(container);
    const board = (0, _utilJs.createEl)("cg-board");
    container.appendChild(board);
    let svg;
    let customSvg;
    let autoPieces;
    if (s.drawable.visible) {
        svg = (0, _svgJs.setAttributes)((0, _svgJs.createElement)("svg"), {
            class: "cg-shapes",
            viewBox: "-4 -4 8 8",
            preserveAspectRatio: "xMidYMid slice"
        });
        svg.appendChild((0, _svgJs.createDefs)());
        svg.appendChild((0, _svgJs.createElement)("g"));
        customSvg = (0, _svgJs.setAttributes)((0, _svgJs.createElement)("svg"), {
            class: "cg-custom-svgs",
            viewBox: "-3.5 -3.5 8 8",
            preserveAspectRatio: "xMidYMid slice"
        });
        customSvg.appendChild((0, _svgJs.createElement)("g"));
        autoPieces = (0, _utilJs.createEl)("cg-auto-pieces");
        container.appendChild(svg);
        container.appendChild(customSvg);
        container.appendChild(autoPieces);
    }
    if (s.coordinates) {
        const orientClass = s.orientation === "black" ? " black" : "";
        const ranksPositionClass = s.ranksPosition === "left" ? " left" : "";
        container.appendChild(renderCoords((0, _typesJs.ranks), "ranks" + orientClass + ranksPositionClass));
        container.appendChild(renderCoords((0, _typesJs.files), "files" + orientClass));
    }
    let ghost;
    if (s.draggable.enabled && s.draggable.showGhost) {
        ghost = (0, _utilJs.createEl)("piece", "ghost");
        (0, _utilJs.setVisible)(ghost, false);
        container.appendChild(ghost);
    }
    return {
        board,
        container,
        wrap: element,
        ghost,
        svg,
        customSvg,
        autoPieces
    };
}
function renderCoords(elems, className) {
    const el = (0, _utilJs.createEl)("coords", className);
    let f;
    for (const elem of elems){
        f = (0, _utilJs.createEl)("coord");
        f.textContent = elem;
        el.appendChild(f);
    }
    return el;
}

},{"./util.js":"akuUP","./types.js":"7vE4h","./svg.js":"bXA83","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"bXA83":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "createElement", ()=>createElement);
parcelHelpers.export(exports, "setAttributes", ()=>setAttributes);
parcelHelpers.export(exports, "createDefs", ()=>createDefs);
parcelHelpers.export(exports, "renderSvg", ()=>renderSvg);
var _utilJs = require("./util.js");
function createDefs() {
    const defs = createElement("defs");
    const filter = setAttributes(createElement("filter"), {
        id: "cg-filter-blur"
    });
    filter.appendChild(setAttributes(createElement("feGaussianBlur"), {
        stdDeviation: "0.022"
    }));
    defs.appendChild(filter);
    return defs;
}
function renderSvg(state, shapesEl, customsEl) {
    var _a;
    const d = state.drawable, curD = d.current, cur = curD && curD.mouseSq ? curD : undefined, dests = new Map(), bounds = state.dom.bounds(), nonPieceAutoShapes = d.autoShapes.filter((autoShape)=>!autoShape.piece);
    for (const s of d.shapes.concat(nonPieceAutoShapes).concat(cur ? [
        cur
    ] : [])){
        if (!s.dest) continue;
        const sources = (_a = dests.get(s.dest)) !== null && _a !== void 0 ? _a : new Set(), from = pos2user(orient((0, _utilJs.key2pos)(s.orig), state.orientation), bounds), to = pos2user(orient((0, _utilJs.key2pos)(s.dest), state.orientation), bounds);
        sources.add(moveAngle(from, to));
        dests.set(s.dest, sources);
    }
    const shapes = d.shapes.concat(nonPieceAutoShapes).map((s)=>{
        return {
            shape: s,
            current: false,
            hash: shapeHash(s, isShort(s.dest, dests), false, bounds)
        };
    });
    if (cur) shapes.push({
        shape: cur,
        current: true,
        hash: shapeHash(cur, isShort(cur.dest, dests), true, bounds)
    });
    const fullHash = shapes.map((sc)=>sc.hash).join(";");
    if (fullHash === state.drawable.prevSvgHash) return;
    state.drawable.prevSvgHash = fullHash;
    /*
      -- DOM hierarchy --
      <svg class="cg-shapes">      (<= svg)
        <defs>
          ...(for brushes)...
        </defs>
        <g>
          ...(for arrows and circles)...
        </g>
      </svg>
      <svg class="cg-custom-svgs"> (<= customSvg)
        <g>
          ...(for custom svgs)...
        </g>
      </svg>
    */ const defsEl = shapesEl.querySelector("defs");
    syncDefs(d, shapes, defsEl);
    syncShapes(shapes, shapesEl.querySelector("g"), customsEl.querySelector("g"), (s)=>renderShape(state, s, d.brushes, dests, bounds));
}
// append only. Don't try to update/remove.
function syncDefs(d, shapes, defsEl) {
    var _a;
    const brushes = new Map();
    let brush;
    for (const s of shapes.filter((s)=>s.shape.dest && s.shape.brush)){
        brush = makeCustomBrush(d.brushes[s.shape.brush], s.shape.modifiers);
        if ((_a = s.shape.modifiers) === null || _a === void 0 ? void 0 : _a.hilite) brushes.set("hilite", d.brushes["hilite"]);
        brushes.set(brush.key, brush);
    }
    const keysInDom = new Set();
    let el = defsEl.firstElementChild;
    while(el){
        keysInDom.add(el.getAttribute("cgKey"));
        el = el.nextElementSibling;
    }
    for (const [key, brush] of brushes.entries())if (!keysInDom.has(key)) defsEl.appendChild(renderMarker(brush));
}
function syncShapes(syncables, shapes, customs, renderShape) {
    const hashesInDom = new Map();
    for (const sc of syncables)hashesInDom.set(sc.hash, false);
    for (const root of [
        shapes,
        customs
    ]){
        const toRemove = [];
        let el = root.firstElementChild, elHash;
        while(el){
            elHash = el.getAttribute("cgHash");
            if (hashesInDom.has(elHash)) hashesInDom.set(elHash, true);
            else toRemove.push(el);
            el = el.nextElementSibling;
        }
        for (const el of toRemove)root.removeChild(el);
    }
    // insert shapes that are not yet in dom
    for (const sc of syncables.filter((s)=>!hashesInDom.get(s.hash))){
        for (const svg of renderShape(sc))if (svg.isCustom) customs.appendChild(svg.el);
        else shapes.appendChild(svg.el);
    }
}
function shapeHash({ orig, dest, brush, piece, modifiers, customSvg, label }, shorten, current, bounds) {
    var _a, _b;
    // a shape and an overlay svg share a lifetime and have the same cgHash attribute
    return [
        bounds.width,
        bounds.height,
        current,
        orig,
        dest,
        brush,
        shorten && "-",
        piece && pieceHash(piece),
        modifiers && modifiersHash(modifiers),
        customSvg && `custom-${textHash(customSvg.html)},${(_b = (_a = customSvg.center) === null || _a === void 0 ? void 0 : _a[0]) !== null && _b !== void 0 ? _b : "o"}`,
        label && `label-${textHash(label.text)}`
    ].filter((x)=>x).join(",");
}
function pieceHash(piece) {
    return [
        piece.color,
        piece.role,
        piece.scale
    ].filter((x)=>x).join(",");
}
function modifiersHash(m) {
    return [
        m.lineWidth,
        m.hilite && "*"
    ].filter((x)=>x).join(",");
}
function textHash(s) {
    // Rolling hash with base 31 (cf. https://stackoverflow.com/questions/7616461/generate-a-hash-from-string-in-javascript)
    let h = 0;
    for(let i = 0; i < s.length; i++)h = (h << 5) - h + s.charCodeAt(i) >>> 0;
    return h.toString();
}
function renderShape(state, { shape, current, hash }, brushes, dests, bounds) {
    var _a, _b;
    const from = pos2user(orient((0, _utilJs.key2pos)(shape.orig), state.orientation), bounds), to = shape.dest ? pos2user(orient((0, _utilJs.key2pos)(shape.dest), state.orientation), bounds) : from, brush = shape.brush && makeCustomBrush(brushes[shape.brush], shape.modifiers), slots = dests.get(shape.dest), svgs = [];
    if (brush) {
        const el = setAttributes(createElement("g"), {
            cgHash: hash
        });
        svgs.push({
            el
        });
        if (from[0] !== to[0] || from[1] !== to[1]) el.appendChild(renderArrow(shape, brush, from, to, current, isShort(shape.dest, dests)));
        else el.appendChild(renderCircle(brushes[shape.brush], from, current, bounds));
    }
    if (shape.label) {
        const label = shape.label;
        (_a = label.fill) !== null && _a !== void 0 ? _a : label.fill = shape.brush && brushes[shape.brush].color;
        const corner = shape.brush ? undefined : "tr";
        svgs.push({
            el: renderLabel(label, hash, from, to, slots, corner),
            isCustom: true
        });
    }
    if (shape.customSvg) {
        const on = (_b = shape.customSvg.center) !== null && _b !== void 0 ? _b : "orig";
        const [x, y] = on === "label" ? labelCoords(from, to, slots).map((c)=>c - 0.5) : on === "dest" ? to : from;
        const el = setAttributes(createElement("g"), {
            transform: `translate(${x},${y})`,
            cgHash: hash
        });
        el.innerHTML = `<svg width="1" height="1" viewBox="0 0 100 100">${shape.customSvg.html}</svg>`;
        svgs.push({
            el,
            isCustom: true
        });
    }
    return svgs;
}
function renderCircle(brush, at, current, bounds) {
    const widths = circleWidth(), radius = (bounds.width + bounds.height) / (4 * Math.max(bounds.width, bounds.height));
    return setAttributes(createElement("circle"), {
        stroke: brush.color,
        "stroke-width": widths[current ? 0 : 1],
        fill: "none",
        opacity: opacity(brush, current),
        cx: at[0],
        cy: at[1],
        r: radius - widths[1] / 2
    });
}
function renderArrow(s, brush, from, to, current, shorten) {
    var _a;
    function renderLine(isHilite) {
        var _a;
        const m = arrowMargin(shorten && !current), dx = to[0] - from[0], dy = to[1] - from[1], angle = Math.atan2(dy, dx), xo = Math.cos(angle) * m, yo = Math.sin(angle) * m;
        return setAttributes(createElement("line"), {
            stroke: isHilite ? "white" : brush.color,
            "stroke-width": lineWidth(brush, current) + (isHilite ? 0.04 : 0),
            "stroke-linecap": "round",
            "marker-end": `url(#arrowhead-${isHilite ? "hilite" : brush.key})`,
            opacity: ((_a = s.modifiers) === null || _a === void 0 ? void 0 : _a.hilite) ? 1 : opacity(brush, current),
            x1: from[0],
            y1: from[1],
            x2: to[0] - xo,
            y2: to[1] - yo
        });
    }
    if (!((_a = s.modifiers) === null || _a === void 0 ? void 0 : _a.hilite)) return renderLine(false);
    const g = createElement("g");
    const blurred = setAttributes(createElement("g"), {
        filter: "url(#cg-filter-blur)"
    });
    blurred.appendChild(filterBox(from, to));
    blurred.appendChild(renderLine(true));
    g.appendChild(blurred);
    g.appendChild(renderLine(false));
    return g;
}
function renderMarker(brush) {
    const marker = setAttributes(createElement("marker"), {
        id: "arrowhead-" + brush.key,
        orient: "auto",
        overflow: "visible",
        markerWidth: 4,
        markerHeight: 4,
        refX: brush.key === "hilite" ? 1.86 : 2.05,
        refY: 2
    });
    marker.appendChild(setAttributes(createElement("path"), {
        d: "M0,0 V4 L3,2 Z",
        fill: brush.color
    }));
    marker.setAttribute("cgKey", brush.key);
    return marker;
}
function renderLabel(label, hash, from, to, slots, corner) {
    var _a;
    const labelSize = 0.4, fontSize = labelSize * 0.75 ** label.text.length, at = labelCoords(from, to, slots), cornerOff = corner === "tr" ? 0.4 : 0, g = setAttributes(createElement("g"), {
        transform: `translate(${at[0] + cornerOff},${at[1] - cornerOff})`,
        cgHash: hash
    });
    g.appendChild(setAttributes(createElement("circle"), {
        r: labelSize / 2,
        "fill-opacity": corner ? 1.0 : 0.8,
        "stroke-opacity": corner ? 1.0 : 0.7,
        "stroke-width": 0.03,
        fill: (_a = label.fill) !== null && _a !== void 0 ? _a : "#666",
        stroke: "white"
    }));
    const labelEl = setAttributes(createElement("text"), {
        "font-size": fontSize,
        "font-family": "Noto Sans",
        "text-anchor": "middle",
        fill: "white",
        y: 0.13 * 0.75 ** label.text.length
    });
    labelEl.innerHTML = label.text;
    g.appendChild(labelEl);
    return g;
}
function orient(pos, color) {
    return color === "white" ? pos : [
        7 - pos[0],
        7 - pos[1]
    ];
}
function isShort(dest, dests) {
    return true === (dest && dests.has(dest) && dests.get(dest).size > 1);
}
function createElement(tagName) {
    return document.createElementNS("http://www.w3.org/2000/svg", tagName);
}
function setAttributes(el, attrs) {
    for(const key in attrs)if (Object.prototype.hasOwnProperty.call(attrs, key)) el.setAttribute(key, attrs[key]);
    return el;
}
function makeCustomBrush(base, modifiers) {
    return !modifiers ? base : {
        color: base.color,
        opacity: Math.round(base.opacity * 10) / 10,
        lineWidth: Math.round(modifiers.lineWidth || base.lineWidth),
        key: [
            base.key,
            modifiers.lineWidth
        ].filter((x)=>x).join("")
    };
}
function circleWidth() {
    return [
        3 / 64,
        4 / 64
    ];
}
function lineWidth(brush, current) {
    return (brush.lineWidth || 10) * (current ? 0.85 : 1) / 64;
}
function opacity(brush, current) {
    return (brush.opacity || 1) * (current ? 0.9 : 1);
}
function arrowMargin(shorten) {
    return (shorten ? 20 : 10) / 64;
}
function pos2user(pos, bounds) {
    const xScale = Math.min(1, bounds.width / bounds.height);
    const yScale = Math.min(1, bounds.height / bounds.width);
    return [
        (pos[0] - 3.5) * xScale,
        (3.5 - pos[1]) * yScale
    ];
}
function filterBox(from, to) {
    // lines/arrows are considered to be one dimensional for the purposes of SVG filters,
    // so we add a transparent bounding box to ensure they apply to the 2nd dimension
    const box = {
        from: [
            Math.floor(Math.min(from[0], to[0])),
            Math.floor(Math.min(from[1], to[1]))
        ],
        to: [
            Math.ceil(Math.max(from[0], to[0])),
            Math.ceil(Math.max(from[1], to[1]))
        ]
    };
    return setAttributes(createElement("rect"), {
        x: box.from[0],
        y: box.from[1],
        width: box.to[0] - box.from[0],
        height: box.to[1] - box.from[1],
        fill: "none",
        stroke: "none"
    });
}
function moveAngle(from, to, asSlot = true) {
    const angle = Math.atan2(to[1] - from[1], to[0] - from[0]) + Math.PI;
    return asSlot ? (Math.round(angle * 8 / Math.PI) + 16) % 16 : angle;
}
function dist(from, to) {
    return Math.sqrt([
        from[0] - to[0],
        from[1] - to[1]
    ].reduce((acc, x)=>acc + x * x, 0));
}
/*
 try to place label at the junction of the destination shaft and arrowhead. if there's more than
 1 arrow pointing to a square, the arrow shortens by 10 / 64 units so the label must move as well.
 
 if the angle between two incoming arrows is pi / 8, such as when an adjacent knight and bishop
 attack the same square, the knight's label is slid further down the shaft by an amount equal to
 our label size to avoid collision
*/ function labelCoords(from, to, slots) {
    let mag = dist(from, to);
    //if (mag === 0) return [from[0], from[1]];
    const angle = moveAngle(from, to, false);
    if (slots) {
        mag -= 33 / 64; // reduce by arrowhead length
        if (slots.size > 1) {
            mag -= 10 / 64; // reduce by shortening factor
            const slot = moveAngle(from, to);
            if (slots.has((slot + 1) % 16) || slots.has((slot + 15) % 16)) {
                if (slot & 1) mag -= 0.4;
            }
        }
    }
    return [
        from[0] - Math.cos(angle) * mag,
        from[1] - Math.sin(angle) * mag
    ].map((c)=>c + 0.5);
}

},{"./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"9isbb":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "bindBoard", ()=>bindBoard);
// returns the unbind function
parcelHelpers.export(exports, "bindDocument", ()=>bindDocument);
var _dragJs = require("./drag.js");
var _drawJs = require("./draw.js");
var _dropJs = require("./drop.js");
var _utilJs = require("./util.js");
function bindBoard(s, onResize) {
    const boardEl = s.dom.elements.board;
    if ("ResizeObserver" in window) new ResizeObserver(onResize).observe(s.dom.elements.wrap);
    if (s.disableContextMenu || s.drawable.enabled) boardEl.addEventListener("contextmenu", (e)=>e.preventDefault());
    if (s.viewOnly) return;
    // Cannot be passive, because we prevent touch scrolling and dragging of
    // selected elements.
    const onStart = startDragOrDraw(s);
    boardEl.addEventListener("touchstart", onStart, {
        passive: false
    });
    boardEl.addEventListener("mousedown", onStart, {
        passive: false
    });
}
function bindDocument(s, onResize) {
    const unbinds = [];
    // Old versions of Edge and Safari do not support ResizeObserver. Send
    // chessground.resize if a user action has changed the bounds of the board.
    if (!("ResizeObserver" in window)) unbinds.push(unbindable(document.body, "chessground.resize", onResize));
    if (!s.viewOnly) {
        const onmove = dragOrDraw(s, _dragJs.move, _drawJs.move);
        const onend = dragOrDraw(s, _dragJs.end, _drawJs.end);
        for (const ev of [
            "touchmove",
            "mousemove"
        ])unbinds.push(unbindable(document, ev, onmove));
        for (const ev of [
            "touchend",
            "mouseup"
        ])unbinds.push(unbindable(document, ev, onend));
        const onScroll = ()=>s.dom.bounds.clear();
        unbinds.push(unbindable(document, "scroll", onScroll, {
            capture: true,
            passive: true
        }));
        unbinds.push(unbindable(window, "resize", onScroll, {
            passive: true
        }));
    }
    return ()=>unbinds.forEach((f)=>f());
}
function unbindable(el, eventName, callback, options) {
    el.addEventListener(eventName, callback, options);
    return ()=>el.removeEventListener(eventName, callback, options);
}
const startDragOrDraw = (s)=>(e)=>{
        if (s.draggable.current) _dragJs.cancel(s);
        else if (s.drawable.current) _drawJs.cancel(s);
        else if (e.shiftKey || (0, _utilJs.isRightButton)(e)) {
            if (s.drawable.enabled) _drawJs.start(s, e);
        } else if (!s.viewOnly) {
            if (s.dropmode.active) (0, _dropJs.drop)(s, e);
            else _dragJs.start(s, e);
        }
    };
const dragOrDraw = (s, withDrag, withDraw)=>(e)=>{
        if (s.drawable.current) {
            if (s.drawable.enabled) withDraw(s, e);
        } else if (!s.viewOnly) withDrag(s, e);
    };

},{"./drag.js":"26fmd","./draw.js":"6rxV9","./drop.js":"1kTiR","./util.js":"akuUP","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"1kTiR":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "setDropMode", ()=>setDropMode);
parcelHelpers.export(exports, "cancelDropMode", ()=>cancelDropMode);
parcelHelpers.export(exports, "drop", ()=>drop);
var _boardJs = require("./board.js");
var _utilJs = require("./util.js");
var _dragJs = require("./drag.js");
function setDropMode(s, piece) {
    s.dropmode = {
        active: true,
        piece
    };
    (0, _dragJs.cancel)(s);
}
function cancelDropMode(s) {
    s.dropmode = {
        active: false
    };
}
function drop(s, e) {
    if (!s.dropmode.active) return;
    _boardJs.unsetPremove(s);
    _boardJs.unsetPredrop(s);
    const piece = s.dropmode.piece;
    if (piece) {
        s.pieces.set("a0", piece);
        const position = _utilJs.eventPosition(e);
        const dest = position && _boardJs.getKeyAtDomPos(position, _boardJs.whitePov(s), s.dom.bounds());
        if (dest) _boardJs.dropNewPiece(s, "a0", dest);
    }
    s.dom.redraw();
}

},{"./board.js":"clNWI","./util.js":"akuUP","./drag.js":"26fmd","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"lcsni":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
// ported from https://github.com/lichess-org/lichobile/blob/master/src/chessground/render.ts
// in case of bugs, blame @veloce
parcelHelpers.export(exports, "render", ()=>render);
parcelHelpers.export(exports, "renderResized", ()=>renderResized);
parcelHelpers.export(exports, "updateBounds", ()=>updateBounds);
var _utilJs = require("./util.js");
var _boardJs = require("./board.js");
function render(s) {
    const asWhite = (0, _boardJs.whitePov)(s), posToTranslate = (0, _utilJs.posToTranslate)(s.dom.bounds()), boardEl = s.dom.elements.board, pieces = s.pieces, curAnim = s.animation.current, anims = curAnim ? curAnim.plan.anims : new Map(), fadings = curAnim ? curAnim.plan.fadings : new Map(), curDrag = s.draggable.current, squares = computeSquareClasses(s), samePieces = new Set(), sameSquares = new Set(), movedPieces = new Map(), movedSquares = new Map(); // by class name
    let k, el, pieceAtKey, elPieceName, anim, fading, pMvdset, pMvd, sMvdset, sMvd;
    // walk over all board dom elements, apply animations and flag moved pieces
    el = boardEl.firstChild;
    while(el){
        k = el.cgKey;
        if (isPieceNode(el)) {
            pieceAtKey = pieces.get(k);
            anim = anims.get(k);
            fading = fadings.get(k);
            elPieceName = el.cgPiece;
            // if piece not being dragged anymore, remove dragging style
            if (el.cgDragging && (!curDrag || curDrag.orig !== k)) {
                el.classList.remove("dragging");
                (0, _utilJs.translate)(el, posToTranslate((0, _utilJs.key2pos)(k), asWhite));
                el.cgDragging = false;
            }
            // remove fading class if it still remains
            if (!fading && el.cgFading) {
                el.cgFading = false;
                el.classList.remove("fading");
            }
            // there is now a piece at this dom key
            if (pieceAtKey) {
                // continue animation if already animating and same piece
                // (otherwise it could animate a captured piece)
                if (anim && el.cgAnimating && elPieceName === pieceNameOf(pieceAtKey)) {
                    const pos = (0, _utilJs.key2pos)(k);
                    pos[0] += anim[2];
                    pos[1] += anim[3];
                    el.classList.add("anim");
                    (0, _utilJs.translate)(el, posToTranslate(pos, asWhite));
                } else if (el.cgAnimating) {
                    el.cgAnimating = false;
                    el.classList.remove("anim");
                    (0, _utilJs.translate)(el, posToTranslate((0, _utilJs.key2pos)(k), asWhite));
                    if (s.addPieceZIndex) el.style.zIndex = posZIndex((0, _utilJs.key2pos)(k), asWhite);
                }
                // same piece: flag as same
                if (elPieceName === pieceNameOf(pieceAtKey) && (!fading || !el.cgFading)) samePieces.add(k);
                else if (fading && elPieceName === pieceNameOf(fading)) {
                    el.classList.add("fading");
                    el.cgFading = true;
                } else appendValue(movedPieces, elPieceName, el);
            } else appendValue(movedPieces, elPieceName, el);
        } else if (isSquareNode(el)) {
            const cn = el.className;
            if (squares.get(k) === cn) sameSquares.add(k);
            else appendValue(movedSquares, cn, el);
        }
        el = el.nextSibling;
    }
    // walk over all squares in current set, apply dom changes to moved squares
    // or append new squares
    for (const [sk, className] of squares)if (!sameSquares.has(sk)) {
        sMvdset = movedSquares.get(className);
        sMvd = sMvdset && sMvdset.pop();
        const translation = posToTranslate((0, _utilJs.key2pos)(sk), asWhite);
        if (sMvd) {
            sMvd.cgKey = sk;
            (0, _utilJs.translate)(sMvd, translation);
        } else {
            const squareNode = (0, _utilJs.createEl)("square", className);
            squareNode.cgKey = sk;
            (0, _utilJs.translate)(squareNode, translation);
            boardEl.insertBefore(squareNode, boardEl.firstChild);
        }
    }
    // walk over all pieces in current set, apply dom changes to moved pieces
    // or append new pieces
    for (const [k, p] of pieces){
        anim = anims.get(k);
        if (!samePieces.has(k)) {
            pMvdset = movedPieces.get(pieceNameOf(p));
            pMvd = pMvdset && pMvdset.pop();
            // a same piece was moved
            if (pMvd) {
                // apply dom changes
                pMvd.cgKey = k;
                if (pMvd.cgFading) {
                    pMvd.classList.remove("fading");
                    pMvd.cgFading = false;
                }
                const pos = (0, _utilJs.key2pos)(k);
                if (s.addPieceZIndex) pMvd.style.zIndex = posZIndex(pos, asWhite);
                if (anim) {
                    pMvd.cgAnimating = true;
                    pMvd.classList.add("anim");
                    pos[0] += anim[2];
                    pos[1] += anim[3];
                }
                (0, _utilJs.translate)(pMvd, posToTranslate(pos, asWhite));
            } else {
                const pieceName = pieceNameOf(p), pieceNode = (0, _utilJs.createEl)("piece", pieceName), pos = (0, _utilJs.key2pos)(k);
                pieceNode.cgPiece = pieceName;
                pieceNode.cgKey = k;
                if (anim) {
                    pieceNode.cgAnimating = true;
                    pos[0] += anim[2];
                    pos[1] += anim[3];
                }
                (0, _utilJs.translate)(pieceNode, posToTranslate(pos, asWhite));
                if (s.addPieceZIndex) pieceNode.style.zIndex = posZIndex(pos, asWhite);
                boardEl.appendChild(pieceNode);
            }
        }
    }
    // remove any element that remains in the moved sets
    for (const nodes of movedPieces.values())removeNodes(s, nodes);
    for (const nodes of movedSquares.values())removeNodes(s, nodes);
}
function renderResized(s) {
    const asWhite = (0, _boardJs.whitePov)(s), posToTranslate = (0, _utilJs.posToTranslate)(s.dom.bounds());
    let el = s.dom.elements.board.firstChild;
    while(el){
        if (isPieceNode(el) && !el.cgAnimating || isSquareNode(el)) (0, _utilJs.translate)(el, posToTranslate((0, _utilJs.key2pos)(el.cgKey), asWhite));
        el = el.nextSibling;
    }
}
function updateBounds(s) {
    var _a, _b;
    const bounds = s.dom.elements.wrap.getBoundingClientRect();
    const container = s.dom.elements.container;
    const ratio = bounds.height / bounds.width;
    const width = Math.floor(bounds.width * window.devicePixelRatio / 8) * 8 / window.devicePixelRatio;
    const height = width * ratio;
    container.style.width = width + "px";
    container.style.height = height + "px";
    s.dom.bounds.clear();
    (_a = s.addDimensionsCssVarsTo) === null || _a === void 0 || _a.style.setProperty("--cg-width", width + "px");
    (_b = s.addDimensionsCssVarsTo) === null || _b === void 0 || _b.style.setProperty("--cg-height", height + "px");
}
const isPieceNode = (el)=>el.tagName === "PIECE";
const isSquareNode = (el)=>el.tagName === "SQUARE";
function removeNodes(s, nodes) {
    for (const node of nodes)s.dom.elements.board.removeChild(node);
}
function posZIndex(pos, asWhite) {
    const minZ = 3;
    const rank = pos[1];
    const z = asWhite ? minZ + 7 - rank : minZ + rank;
    return `${z}`;
}
const pieceNameOf = (piece)=>`${piece.color} ${piece.role}`;
function computeSquareClasses(s) {
    var _a, _b, _c;
    const squares = new Map();
    if (s.lastMove && s.highlight.lastMove) for (const k of s.lastMove)addSquare(squares, k, "last-move");
    if (s.check && s.highlight.check) addSquare(squares, s.check, "check");
    if (s.selected) {
        addSquare(squares, s.selected, "selected");
        if (s.movable.showDests) {
            const dests = (_a = s.movable.dests) === null || _a === void 0 ? void 0 : _a.get(s.selected);
            if (dests) for (const k of dests)addSquare(squares, k, "move-dest" + (s.pieces.has(k) ? " oc" : ""));
            const pDests = (_c = (_b = s.premovable.customDests) === null || _b === void 0 ? void 0 : _b.get(s.selected)) !== null && _c !== void 0 ? _c : s.premovable.dests;
            if (pDests) for (const k of pDests)addSquare(squares, k, "premove-dest" + (s.pieces.has(k) ? " oc" : ""));
        }
    }
    const premove = s.premovable.current;
    if (premove) for (const k of premove)addSquare(squares, k, "current-premove");
    else if (s.predroppable.current) addSquare(squares, s.predroppable.current.key, "current-premove");
    const o = s.exploding;
    if (o) for (const k of o.keys)addSquare(squares, k, "exploding" + o.stage);
    if (s.highlight.custom) s.highlight.custom.forEach((v, k)=>{
        addSquare(squares, k, v);
    });
    return squares;
}
function addSquare(squares, key, klass) {
    const classes = squares.get(key);
    if (classes) squares.set(key, `${classes} ${klass}`);
    else squares.set(key, klass);
}
function appendValue(map, key, value) {
    const arr = map.get(key);
    if (arr) arr.push(value);
    else map.set(key, [
        value
    ]);
}

},{"./util.js":"akuUP","./board.js":"clNWI","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"5QGpg":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "render", ()=>render);
parcelHelpers.export(exports, "renderResized", ()=>renderResized);
var _utilJs = require("./util.js");
var _boardJs = require("./board.js");
var _syncJs = require("./sync.js");
function render(state, autoPieceEl) {
    const autoPieces = state.drawable.autoShapes.filter((autoShape)=>autoShape.piece);
    const autoPieceShapes = autoPieces.map((s)=>{
        return {
            shape: s,
            hash: hash(s),
            current: false
        };
    });
    (0, _syncJs.syncShapes)(autoPieceShapes, autoPieceEl, (shape)=>renderShape(state, shape, state.dom.bounds()));
}
function renderResized(state) {
    var _a;
    const asWhite = (0, _boardJs.whitePov)(state), posToTranslate = (0, _utilJs.posToTranslate)(state.dom.bounds());
    let el = (_a = state.dom.elements.autoPieces) === null || _a === void 0 ? void 0 : _a.firstChild;
    while(el){
        (0, _utilJs.translateAndScale)(el, posToTranslate((0, _utilJs.key2pos)(el.cgKey), asWhite), el.cgScale);
        el = el.nextSibling;
    }
}
function renderShape(state, { shape, hash }, bounds) {
    var _a, _b, _c;
    const orig = shape.orig;
    const role = (_a = shape.piece) === null || _a === void 0 ? void 0 : _a.role;
    const color = (_b = shape.piece) === null || _b === void 0 ? void 0 : _b.color;
    const scale = (_c = shape.piece) === null || _c === void 0 ? void 0 : _c.scale;
    const pieceEl = (0, _utilJs.createEl)("piece", `${role} ${color}`);
    pieceEl.setAttribute("cgHash", hash);
    pieceEl.cgKey = orig;
    pieceEl.cgScale = scale;
    (0, _utilJs.translateAndScale)(pieceEl, (0, _utilJs.posToTranslate)(bounds)((0, _utilJs.key2pos)(orig), (0, _boardJs.whitePov)(state)), scale);
    return pieceEl;
}
const hash = (autoPiece)=>{
    var _a, _b, _c;
    return [
        autoPiece.orig,
        (_a = autoPiece.piece) === null || _a === void 0 ? void 0 : _a.role,
        (_b = autoPiece.piece) === null || _b === void 0 ? void 0 : _b.color,
        (_c = autoPiece.piece) === null || _c === void 0 ? void 0 : _c.scale
    ].join(",");
};

},{"./util.js":"akuUP","./board.js":"clNWI","./sync.js":"alpHd","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"alpHd":[function(require,module,exports) {
// append and remove only. No updates.
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "syncShapes", ()=>syncShapes);
function syncShapes(shapes, root, renderShape) {
    const hashesInDom = new Map(), toRemove = [];
    for (const sc of shapes)hashesInDom.set(sc.hash, false);
    let el = root.firstElementChild, elHash;
    while(el){
        elHash = el.getAttribute("cgHash");
        // found a shape element that's here to stay
        if (hashesInDom.has(elHash)) hashesInDom.set(elHash, true);
        else toRemove.push(el);
        el = el.nextElementSibling;
    }
    // remove old shapes
    for (const el of toRemove)root.removeChild(el);
    // insert shapes that are not yet in dom
    for (const sc of shapes)if (!hashesInDom.get(sc.hash)) root.appendChild(renderShape(sc));
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"Rkydo":[function(require,module,exports) {
// core
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "htmlDomApi", ()=>(0, _htmldomapi.htmlDomApi));
parcelHelpers.export(exports, "init", ()=>(0, _init.init));
parcelHelpers.export(exports, "thunk", ()=>(0, _thunk.thunk));
parcelHelpers.export(exports, "vnode", ()=>(0, _vnode.vnode));
// helpers
parcelHelpers.export(exports, "attachTo", ()=>(0, _attachto.attachTo));
parcelHelpers.export(exports, "array", ()=>(0, _is.array));
parcelHelpers.export(exports, "primitive", ()=>(0, _is.primitive));
parcelHelpers.export(exports, "toVNode", ()=>(0, _tovnode.toVNode));
parcelHelpers.export(exports, "h", ()=>(0, _h.h));
parcelHelpers.export(exports, "fragment", ()=>(0, _h.fragment));
// modules
parcelHelpers.export(exports, "attributesModule", ()=>(0, _attributes.attributesModule));
parcelHelpers.export(exports, "classModule", ()=>(0, _class.classModule));
parcelHelpers.export(exports, "datasetModule", ()=>(0, _dataset.datasetModule));
parcelHelpers.export(exports, "eventListenersModule", ()=>(0, _eventlisteners.eventListenersModule));
parcelHelpers.export(exports, "propsModule", ()=>(0, _props.propsModule));
parcelHelpers.export(exports, "styleModule", ()=>(0, _style.styleModule));
// JSX
parcelHelpers.export(exports, "jsx", ()=>(0, _jsx.jsx));
parcelHelpers.export(exports, "Fragment", ()=>(0, _jsx.Fragment));
var _htmldomapi = require("./htmldomapi");
var _init = require("./init");
var _thunk = require("./thunk");
var _vnode = require("./vnode");
var _attachto = require("./helpers/attachto");
var _is = require("./is");
var _tovnode = require("./tovnode");
var _h = require("./h");
// types
var _hooks = require("./hooks");
parcelHelpers.exportAll(_hooks, exports);
var _attributes = require("./modules/attributes");
var _class = require("./modules/class");
var _dataset = require("./modules/dataset");
var _eventlisteners = require("./modules/eventlisteners");
var _props = require("./modules/props");
var _style = require("./modules/style");
var _jsx = require("./jsx");

},{"./htmldomapi":false,"./init":"d6X9p","./thunk":false,"./vnode":false,"./helpers/attachto":false,"./is":false,"./tovnode":false,"./h":"bCpOB","./hooks":false,"./modules/attributes":"ir8ta","./modules/class":"1UVqj","./modules/dataset":false,"./modules/eventlisteners":false,"./modules/props":false,"./modules/style":false,"./jsx":false,"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"ec4Mk":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "htmlDomApi", ()=>htmlDomApi);
function createElement(tagName, options) {
    return document.createElement(tagName, options);
}
function createElementNS(namespaceURI, qualifiedName, options) {
    return document.createElementNS(namespaceURI, qualifiedName, options);
}
function createDocumentFragment() {
    return parseFragment(document.createDocumentFragment());
}
function createTextNode(text) {
    return document.createTextNode(text);
}
function createComment(text) {
    return document.createComment(text);
}
function insertBefore(parentNode, newNode, referenceNode) {
    if (isDocumentFragment(parentNode)) {
        let node = parentNode;
        while(node && isDocumentFragment(node)){
            const fragment = parseFragment(node);
            node = fragment.parent;
        }
        parentNode = node !== null && node !== void 0 ? node : parentNode;
    }
    if (isDocumentFragment(newNode)) newNode = parseFragment(newNode, parentNode);
    if (referenceNode && isDocumentFragment(referenceNode)) referenceNode = parseFragment(referenceNode).firstChildNode;
    parentNode.insertBefore(newNode, referenceNode);
}
function removeChild(node, child) {
    node.removeChild(child);
}
function appendChild(node, child) {
    if (isDocumentFragment(child)) child = parseFragment(child, node);
    node.appendChild(child);
}
function parentNode(node) {
    if (isDocumentFragment(node)) {
        while(node && isDocumentFragment(node)){
            const fragment = parseFragment(node);
            node = fragment.parent;
        }
        return node !== null && node !== void 0 ? node : null;
    }
    return node.parentNode;
}
function nextSibling(node) {
    var _a;
    if (isDocumentFragment(node)) {
        const fragment = parseFragment(node);
        const parent = parentNode(fragment);
        if (parent && fragment.lastChildNode) {
            const children = Array.from(parent.childNodes);
            const index = children.indexOf(fragment.lastChildNode);
            return (_a = children[index + 1]) !== null && _a !== void 0 ? _a : null;
        }
        return null;
    }
    return node.nextSibling;
}
function tagName(elm) {
    return elm.tagName;
}
function setTextContent(node, text) {
    node.textContent = text;
}
function getTextContent(node) {
    return node.textContent;
}
function isElement(node) {
    return node.nodeType === 1;
}
function isText(node) {
    return node.nodeType === 3;
}
function isComment(node) {
    return node.nodeType === 8;
}
function isDocumentFragment(node) {
    return node.nodeType === 11;
}
function parseFragment(fragmentNode, parentNode) {
    var _a, _b, _c;
    const fragment = fragmentNode;
    (_a = fragment.parent) !== null && _a !== void 0 ? _a : fragment.parent = parentNode !== null && parentNode !== void 0 ? parentNode : null;
    (_b = fragment.firstChildNode) !== null && _b !== void 0 ? _b : fragment.firstChildNode = fragmentNode.firstChild;
    (_c = fragment.lastChildNode) !== null && _c !== void 0 ? _c : fragment.lastChildNode = fragmentNode.lastChild;
    return fragment;
}
const htmlDomApi = {
    createElement,
    createElementNS,
    createTextNode,
    createDocumentFragment,
    createComment,
    insertBefore,
    removeChild,
    appendChild,
    parentNode,
    nextSibling,
    tagName,
    setTextContent,
    getTextContent,
    isElement,
    isText,
    isComment,
    isDocumentFragment
};

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"d6X9p":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "init", ()=>init);
var _vnode = require("./vnode");
var _is = require("./is");
var _htmldomapi = require("./htmldomapi");
function isUndef(s) {
    return s === undefined;
}
function isDef(s) {
    return s !== undefined;
}
const emptyNode = (0, _vnode.vnode)("", {}, [], undefined, undefined);
function sameVnode(vnode1, vnode2) {
    var _a, _b;
    const isSameKey = vnode1.key === vnode2.key;
    const isSameIs = ((_a = vnode1.data) === null || _a === void 0 ? void 0 : _a.is) === ((_b = vnode2.data) === null || _b === void 0 ? void 0 : _b.is);
    const isSameSel = vnode1.sel === vnode2.sel;
    const isSameTextOrFragment = !vnode1.sel && vnode1.sel === vnode2.sel ? typeof vnode1.text === typeof vnode2.text : true;
    return isSameSel && isSameKey && isSameIs && isSameTextOrFragment;
}
/**
 * @todo Remove this function when the document fragment is considered stable.
 */ function documentFragmentIsNotSupported() {
    throw new Error("The document fragment is not supported on this platform.");
}
function isElement(api, vnode) {
    return api.isElement(vnode);
}
function isDocumentFragment(api, vnode) {
    return api.isDocumentFragment(vnode);
}
function createKeyToOldIdx(children, beginIdx, endIdx) {
    var _a;
    const map = {};
    for(let i = beginIdx; i <= endIdx; ++i){
        const key = (_a = children[i]) === null || _a === void 0 ? void 0 : _a.key;
        if (key !== undefined) map[key] = i;
    }
    return map;
}
const hooks = [
    "create",
    "update",
    "remove",
    "destroy",
    "pre",
    "post"
];
function init(modules, domApi, options) {
    const cbs = {
        create: [],
        update: [],
        remove: [],
        destroy: [],
        pre: [],
        post: []
    };
    const api = domApi !== undefined ? domApi : (0, _htmldomapi.htmlDomApi);
    for (const hook of hooks)for (const module of modules){
        const currentHook = module[hook];
        if (currentHook !== undefined) cbs[hook].push(currentHook);
    }
    function emptyNodeAt(elm) {
        const id = elm.id ? "#" + elm.id : "";
        // elm.className doesn't return a string when elm is an SVG element inside a shadowRoot.
        // https://stackoverflow.com/questions/29454340/detecting-classname-of-svganimatedstring
        const classes = elm.getAttribute("class");
        const c = classes ? "." + classes.split(" ").join(".") : "";
        return (0, _vnode.vnode)(api.tagName(elm).toLowerCase() + id + c, {}, [], undefined, elm);
    }
    function emptyDocumentFragmentAt(frag) {
        return (0, _vnode.vnode)(undefined, {}, [], undefined, frag);
    }
    function createRmCb(childElm, listeners) {
        return function rmCb() {
            if (--listeners === 0) {
                const parent = api.parentNode(childElm);
                api.removeChild(parent, childElm);
            }
        };
    }
    function createElm(vnode, insertedVnodeQueue) {
        var _a, _b, _c, _d;
        let i;
        let data = vnode.data;
        if (data !== undefined) {
            const init = (_a = data.hook) === null || _a === void 0 ? void 0 : _a.init;
            if (isDef(init)) {
                init(vnode);
                data = vnode.data;
            }
        }
        const children = vnode.children;
        const sel = vnode.sel;
        if (sel === "!") {
            if (isUndef(vnode.text)) vnode.text = "";
            vnode.elm = api.createComment(vnode.text);
        } else if (sel !== undefined) {
            // Parse selector
            const hashIdx = sel.indexOf("#");
            const dotIdx = sel.indexOf(".", hashIdx);
            const hash = hashIdx > 0 ? hashIdx : sel.length;
            const dot = dotIdx > 0 ? dotIdx : sel.length;
            const tag = hashIdx !== -1 || dotIdx !== -1 ? sel.slice(0, Math.min(hash, dot)) : sel;
            const elm = vnode.elm = isDef(data) && isDef(i = data.ns) ? api.createElementNS(i, tag, data) : api.createElement(tag, data);
            if (hash < dot) elm.setAttribute("id", sel.slice(hash + 1, dot));
            if (dotIdx > 0) elm.setAttribute("class", sel.slice(dot + 1).replace(/\./g, " "));
            for(i = 0; i < cbs.create.length; ++i)cbs.create[i](emptyNode, vnode);
            if (_is.array(children)) for(i = 0; i < children.length; ++i){
                const ch = children[i];
                if (ch != null) api.appendChild(elm, createElm(ch, insertedVnodeQueue));
            }
            else if (_is.primitive(vnode.text)) api.appendChild(elm, api.createTextNode(vnode.text));
            const hook = vnode.data.hook;
            if (isDef(hook)) {
                (_b = hook.create) === null || _b === void 0 || _b.call(hook, emptyNode, vnode);
                if (hook.insert) insertedVnodeQueue.push(vnode);
            }
        } else if (((_c = options === null || options === void 0 ? void 0 : options.experimental) === null || _c === void 0 ? void 0 : _c.fragments) && vnode.children) {
            vnode.elm = ((_d = api.createDocumentFragment) !== null && _d !== void 0 ? _d : documentFragmentIsNotSupported)();
            for(i = 0; i < cbs.create.length; ++i)cbs.create[i](emptyNode, vnode);
            for(i = 0; i < vnode.children.length; ++i){
                const ch = vnode.children[i];
                if (ch != null) api.appendChild(vnode.elm, createElm(ch, insertedVnodeQueue));
            }
        } else vnode.elm = api.createTextNode(vnode.text);
        return vnode.elm;
    }
    function addVnodes(parentElm, before, vnodes, startIdx, endIdx, insertedVnodeQueue) {
        for(; startIdx <= endIdx; ++startIdx){
            const ch = vnodes[startIdx];
            if (ch != null) api.insertBefore(parentElm, createElm(ch, insertedVnodeQueue), before);
        }
    }
    function invokeDestroyHook(vnode) {
        var _a, _b;
        const data = vnode.data;
        if (data !== undefined) {
            (_b = (_a = data === null || data === void 0 ? void 0 : data.hook) === null || _a === void 0 ? void 0 : _a.destroy) === null || _b === void 0 || _b.call(_a, vnode);
            for(let i = 0; i < cbs.destroy.length; ++i)cbs.destroy[i](vnode);
            if (vnode.children !== undefined) for(let j = 0; j < vnode.children.length; ++j){
                const child = vnode.children[j];
                if (child != null && typeof child !== "string") invokeDestroyHook(child);
            }
        }
    }
    function removeVnodes(parentElm, vnodes, startIdx, endIdx) {
        var _a, _b;
        for(; startIdx <= endIdx; ++startIdx){
            let listeners;
            let rm;
            const ch = vnodes[startIdx];
            if (ch != null) {
                if (isDef(ch.sel)) {
                    invokeDestroyHook(ch);
                    listeners = cbs.remove.length + 1;
                    rm = createRmCb(ch.elm, listeners);
                    for(let i = 0; i < cbs.remove.length; ++i)cbs.remove[i](ch, rm);
                    const removeHook = (_b = (_a = ch === null || ch === void 0 ? void 0 : ch.data) === null || _a === void 0 ? void 0 : _a.hook) === null || _b === void 0 ? void 0 : _b.remove;
                    if (isDef(removeHook)) removeHook(ch, rm);
                    else rm();
                } else if (ch.children) {
                    // Fragment node
                    invokeDestroyHook(ch);
                    removeVnodes(parentElm, ch.children, 0, ch.children.length - 1);
                } else // Text node
                api.removeChild(parentElm, ch.elm);
            }
        }
    }
    function updateChildren(parentElm, oldCh, newCh, insertedVnodeQueue) {
        let oldStartIdx = 0;
        let newStartIdx = 0;
        let oldEndIdx = oldCh.length - 1;
        let oldStartVnode = oldCh[0];
        let oldEndVnode = oldCh[oldEndIdx];
        let newEndIdx = newCh.length - 1;
        let newStartVnode = newCh[0];
        let newEndVnode = newCh[newEndIdx];
        let oldKeyToIdx;
        let idxInOld;
        let elmToMove;
        let before;
        while(oldStartIdx <= oldEndIdx && newStartIdx <= newEndIdx){
            if (oldStartVnode == null) oldStartVnode = oldCh[++oldStartIdx]; // Vnode might have been moved left
            else if (oldEndVnode == null) oldEndVnode = oldCh[--oldEndIdx];
            else if (newStartVnode == null) newStartVnode = newCh[++newStartIdx];
            else if (newEndVnode == null) newEndVnode = newCh[--newEndIdx];
            else if (sameVnode(oldStartVnode, newStartVnode)) {
                patchVnode(oldStartVnode, newStartVnode, insertedVnodeQueue);
                oldStartVnode = oldCh[++oldStartIdx];
                newStartVnode = newCh[++newStartIdx];
            } else if (sameVnode(oldEndVnode, newEndVnode)) {
                patchVnode(oldEndVnode, newEndVnode, insertedVnodeQueue);
                oldEndVnode = oldCh[--oldEndIdx];
                newEndVnode = newCh[--newEndIdx];
            } else if (sameVnode(oldStartVnode, newEndVnode)) {
                // Vnode moved right
                patchVnode(oldStartVnode, newEndVnode, insertedVnodeQueue);
                api.insertBefore(parentElm, oldStartVnode.elm, api.nextSibling(oldEndVnode.elm));
                oldStartVnode = oldCh[++oldStartIdx];
                newEndVnode = newCh[--newEndIdx];
            } else if (sameVnode(oldEndVnode, newStartVnode)) {
                // Vnode moved left
                patchVnode(oldEndVnode, newStartVnode, insertedVnodeQueue);
                api.insertBefore(parentElm, oldEndVnode.elm, oldStartVnode.elm);
                oldEndVnode = oldCh[--oldEndIdx];
                newStartVnode = newCh[++newStartIdx];
            } else {
                if (oldKeyToIdx === undefined) oldKeyToIdx = createKeyToOldIdx(oldCh, oldStartIdx, oldEndIdx);
                idxInOld = oldKeyToIdx[newStartVnode.key];
                if (isUndef(idxInOld)) // New element
                api.insertBefore(parentElm, createElm(newStartVnode, insertedVnodeQueue), oldStartVnode.elm);
                else {
                    elmToMove = oldCh[idxInOld];
                    if (elmToMove.sel !== newStartVnode.sel) api.insertBefore(parentElm, createElm(newStartVnode, insertedVnodeQueue), oldStartVnode.elm);
                    else {
                        patchVnode(elmToMove, newStartVnode, insertedVnodeQueue);
                        oldCh[idxInOld] = undefined;
                        api.insertBefore(parentElm, elmToMove.elm, oldStartVnode.elm);
                    }
                }
                newStartVnode = newCh[++newStartIdx];
            }
        }
        if (newStartIdx <= newEndIdx) {
            before = newCh[newEndIdx + 1] == null ? null : newCh[newEndIdx + 1].elm;
            addVnodes(parentElm, before, newCh, newStartIdx, newEndIdx, insertedVnodeQueue);
        }
        if (oldStartIdx <= oldEndIdx) removeVnodes(parentElm, oldCh, oldStartIdx, oldEndIdx);
    }
    function patchVnode(oldVnode, vnode, insertedVnodeQueue) {
        var _a, _b, _c, _d, _e, _f, _g, _h;
        const hook = (_a = vnode.data) === null || _a === void 0 ? void 0 : _a.hook;
        (_b = hook === null || hook === void 0 ? void 0 : hook.prepatch) === null || _b === void 0 || _b.call(hook, oldVnode, vnode);
        const elm = vnode.elm = oldVnode.elm;
        if (oldVnode === vnode) return;
        if (vnode.data !== undefined || isDef(vnode.text) && vnode.text !== oldVnode.text) {
            (_c = vnode.data) !== null && _c !== void 0 ? _c : vnode.data = {};
            (_d = oldVnode.data) !== null && _d !== void 0 ? _d : oldVnode.data = {};
            for(let i = 0; i < cbs.update.length; ++i)cbs.update[i](oldVnode, vnode);
            (_g = (_f = (_e = vnode.data) === null || _e === void 0 ? void 0 : _e.hook) === null || _f === void 0 ? void 0 : _f.update) === null || _g === void 0 || _g.call(_f, oldVnode, vnode);
        }
        const oldCh = oldVnode.children;
        const ch = vnode.children;
        if (isUndef(vnode.text)) {
            if (isDef(oldCh) && isDef(ch)) {
                if (oldCh !== ch) updateChildren(elm, oldCh, ch, insertedVnodeQueue);
            } else if (isDef(ch)) {
                if (isDef(oldVnode.text)) api.setTextContent(elm, "");
                addVnodes(elm, null, ch, 0, ch.length - 1, insertedVnodeQueue);
            } else if (isDef(oldCh)) removeVnodes(elm, oldCh, 0, oldCh.length - 1);
            else if (isDef(oldVnode.text)) api.setTextContent(elm, "");
        } else if (oldVnode.text !== vnode.text) {
            if (isDef(oldCh)) removeVnodes(elm, oldCh, 0, oldCh.length - 1);
            api.setTextContent(elm, vnode.text);
        }
        (_h = hook === null || hook === void 0 ? void 0 : hook.postpatch) === null || _h === void 0 || _h.call(hook, oldVnode, vnode);
    }
    return function patch(oldVnode, vnode) {
        let i, elm, parent;
        const insertedVnodeQueue = [];
        for(i = 0; i < cbs.pre.length; ++i)cbs.pre[i]();
        if (isElement(api, oldVnode)) oldVnode = emptyNodeAt(oldVnode);
        else if (isDocumentFragment(api, oldVnode)) oldVnode = emptyDocumentFragmentAt(oldVnode);
        if (sameVnode(oldVnode, vnode)) patchVnode(oldVnode, vnode, insertedVnodeQueue);
        else {
            elm = oldVnode.elm;
            parent = api.parentNode(elm);
            createElm(vnode, insertedVnodeQueue);
            if (parent !== null) {
                api.insertBefore(parent, vnode.elm, api.nextSibling(elm));
                removeVnodes(parent, [
                    oldVnode
                ], 0, 0);
            }
        }
        for(i = 0; i < insertedVnodeQueue.length; ++i)insertedVnodeQueue[i].data.hook.insert(insertedVnodeQueue[i]);
        for(i = 0; i < cbs.post.length; ++i)cbs.post[i]();
        return vnode;
    };
}

},{"./vnode":"fNqAR","./is":"kHAzx","./htmldomapi":"ec4Mk","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"fNqAR":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "vnode", ()=>vnode);
function vnode(sel, data, children, text, elm) {
    const key = data === undefined ? undefined : data.key;
    return {
        sel,
        data,
        children,
        text,
        elm,
        key
    };
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"kHAzx":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "array", ()=>array);
parcelHelpers.export(exports, "primitive", ()=>primitive);
const array = Array.isArray;
function primitive(s) {
    return typeof s === "string" || typeof s === "number" || s instanceof String || s instanceof Number;
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"bCpOB":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "addNS", ()=>addNS);
parcelHelpers.export(exports, "h", ()=>h);
/**
 * @experimental
 */ parcelHelpers.export(exports, "fragment", ()=>fragment);
var _vnode = require("./vnode");
var _is = require("./is");
function addNS(data, children, sel) {
    data.ns = "http://www.w3.org/2000/svg";
    if (sel !== "foreignObject" && children !== undefined) for(let i = 0; i < children.length; ++i){
        const child = children[i];
        if (typeof child === "string") continue;
        const childData = child.data;
        if (childData !== undefined) addNS(childData, child.children, child.sel);
    }
}
function h(sel, b, c) {
    let data = {};
    let children;
    let text;
    let i;
    if (c !== undefined) {
        if (b !== null) data = b;
        if (_is.array(c)) children = c;
        else if (_is.primitive(c)) text = c.toString();
        else if (c && c.sel) children = [
            c
        ];
    } else if (b !== undefined && b !== null) {
        if (_is.array(b)) children = b;
        else if (_is.primitive(b)) text = b.toString();
        else if (b && b.sel) children = [
            b
        ];
        else data = b;
    }
    if (children !== undefined) {
        for(i = 0; i < children.length; ++i)if (_is.primitive(children[i])) children[i] = (0, _vnode.vnode)(undefined, undefined, undefined, children[i], undefined);
    }
    if (sel[0] === "s" && sel[1] === "v" && sel[2] === "g" && (sel.length === 3 || sel[3] === "." || sel[3] === "#")) addNS(data, children, sel);
    return (0, _vnode.vnode)(sel, data, children, text, undefined);
}
function fragment(children) {
    let c;
    let text;
    if (_is.array(children)) c = children;
    else if (_is.primitive(c)) text = children;
    else if (c && c.sel) c = [
        children
    ];
    if (c !== undefined) {
        for(let i = 0; i < c.length; ++i)if (_is.primitive(c[i])) c[i] = (0, _vnode.vnode)(undefined, undefined, undefined, c[i], undefined);
    }
    return (0, _vnode.vnode)(undefined, {}, c, text, undefined);
}

},{"./vnode":"fNqAR","./is":"kHAzx","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"ir8ta":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "attributesModule", ()=>attributesModule);
const xlinkNS = "http://www.w3.org/1999/xlink";
const xmlNS = "http://www.w3.org/XML/1998/namespace";
const colonChar = 58;
const xChar = 120;
function updateAttrs(oldVnode, vnode) {
    let key;
    const elm = vnode.elm;
    let oldAttrs = oldVnode.data.attrs;
    let attrs = vnode.data.attrs;
    if (!oldAttrs && !attrs) return;
    if (oldAttrs === attrs) return;
    oldAttrs = oldAttrs || {};
    attrs = attrs || {};
    // update modified attributes, add new attributes
    for(key in attrs){
        const cur = attrs[key];
        const old = oldAttrs[key];
        if (old !== cur) {
            if (cur === true) elm.setAttribute(key, "");
            else if (cur === false) elm.removeAttribute(key);
            else {
                if (key.charCodeAt(0) !== xChar) elm.setAttribute(key, cur);
                else if (key.charCodeAt(3) === colonChar) // Assume xml namespace
                elm.setAttributeNS(xmlNS, key, cur);
                else if (key.charCodeAt(5) === colonChar) // Assume xlink namespace
                elm.setAttributeNS(xlinkNS, key, cur);
                else elm.setAttribute(key, cur);
            }
        }
    }
    // remove removed attributes
    // use `in` operator since the previous `for` iteration uses it (.i.e. add even attributes with undefined value)
    // the other option is to remove all attributes with value == undefined
    for(key in oldAttrs)if (!(key in attrs)) elm.removeAttribute(key);
}
const attributesModule = {
    create: updateAttrs,
    update: updateAttrs
};

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"1UVqj":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "classModule", ()=>classModule);
function updateClass(oldVnode, vnode) {
    let cur;
    let name;
    const elm = vnode.elm;
    let oldClass = oldVnode.data.class;
    let klass = vnode.data.class;
    if (!oldClass && !klass) return;
    if (oldClass === klass) return;
    oldClass = oldClass || {};
    klass = klass || {};
    for(name in oldClass)if (oldClass[name] && !Object.prototype.hasOwnProperty.call(klass, name)) // was `true` and now not provided
    elm.classList.remove(name);
    for(name in klass){
        cur = klass[name];
        if (cur !== oldClass[name]) elm.classList[cur ? "add" : "remove"](name);
    }
}
const classModule = {
    create: updateClass,
    update: updateClass
};

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"8C7TE":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "bindMobileMousedown", ()=>bindMobileMousedown);
parcelHelpers.export(exports, "bind", ()=>bind);
parcelHelpers.export(exports, "onInsert", ()=>onInsert);
function bindMobileMousedown(el, f, redraw) {
    for (const mousedownEvent of [
        "touchstart",
        "mousedown"
    ])el.addEventListener(mousedownEvent, (e)=>{
        f(e);
        e.preventDefault();
        if (redraw) redraw();
    }, {
        passive: false
    });
}
const bind = (eventName, f, redraw, passive = true)=>onInsert((el)=>el.addEventListener(eventName, (e)=>{
            const res = f(e);
            if (res === false) e.preventDefault();
            redraw === null || redraw === void 0 || redraw();
            return res;
        }, {
            passive
        }));
function onInsert(f) {
    return {
        insert: (vnode)=>f(vnode.elm)
    };
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"u108d":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "stepwiseScroll", ()=>stepwiseScroll);
parcelHelpers.export(exports, "eventRepeater", ()=>eventRepeater);
parcelHelpers.export(exports, "onKeyDown", ()=>onKeyDown);
function stepwiseScroll(inner) {
    let scrollTotal = 0;
    return (e)=>{
        scrollTotal += e.deltaY * (e.deltaMode ? 40 : 1);
        if (Math.abs(scrollTotal) >= 4) {
            inner(e, true);
            scrollTotal = 0;
        } else inner(e, false);
    };
}
function eventRepeater(action, e) {
    const repeat = ()=>{
        action();
        delay = Math.max(100, delay - delay / 15);
        timeout = setTimeout(repeat, delay);
    };
    let delay = 350;
    let timeout = setTimeout(repeat, 500);
    action();
    const eventName = e.type == "touchstart" ? "touchend" : "mouseup";
    document.addEventListener(eventName, ()=>clearTimeout(timeout), {
        once: true
    });
}
const suppressKeyNavOn = (e)=>e.altKey || e.ctrlKey || e.shiftKey || e.metaKey || document.activeElement instanceof HTMLInputElement || document.activeElement instanceof HTMLTextAreaElement;
const onKeyDown = (ctrl)=>(e)=>{
        if (suppressKeyNavOn(e)) return;
        else if (e.key == "ArrowLeft") ctrl.goTo("prev");
        else if (e.key == "ArrowRight") ctrl.goTo("next");
        else if (e.key == "f") ctrl.flip();
    };

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"cyVdf":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "renderMenu", ()=>renderMenu);
parcelHelpers.export(exports, "renderControls", ()=>renderControls);
var _snabbdom = require("snabbdom");
var _util = require("./util");
var _events = require("../events");
const renderMenu = (ctrl)=>(0, _snabbdom.h)("div.lpv__menu.lpv__pane", [
        (0, _snabbdom.h)("button.lpv__menu__entry.lpv__menu__flip.lpv__fbt", {
            hook: (0, _util.bind)("click", ctrl.flip)
        }, ctrl.translate("flipTheBoard")),
        (0, _snabbdom.h)("a.lpv__menu__entry.lpv__menu__analysis.lpv__fbt", {
            attrs: {
                href: ctrl.analysisUrl(),
                target: "_blank"
            }
        }, ctrl.translate("analysisBoard")),
        (0, _snabbdom.h)("a.lpv__menu__entry.lpv__menu__practice.lpv__fbt", {
            attrs: {
                href: ctrl.practiceUrl(),
                target: "_blank"
            }
        }, ctrl.translate("practiceWithComputer")),
        ctrl.opts.menu.getPgn.enabled ? (0, _snabbdom.h)("button.lpv__menu__entry.lpv__menu__pgn.lpv__fbt", {
            hook: (0, _util.bind)("click", ctrl.togglePgn)
        }, ctrl.translate("getPgn")) : undefined,
        renderExternalLink(ctrl)
    ]);
const renderExternalLink = (ctrl)=>{
    const link = ctrl.game.metadata.externalLink;
    return link && (0, _snabbdom.h)("a.lpv__menu__entry.lpv__fbt", {
        attrs: {
            href: link,
            target: "_blank"
        }
    }, ctrl.translate(ctrl.game.metadata.isLichess ? "viewOnLichess" : "viewOnSite"));
};
const renderControls = (ctrl)=>(0, _snabbdom.h)("div.lpv__controls", [
        ctrl.pane == "board" ? undefined : dirButton(ctrl, "first", "step-backward"),
        dirButton(ctrl, "prev", "left-open"),
        (0, _snabbdom.h)("button.lpv__fbt.lpv__controls__menu.lpv__icon", {
            class: {
                active: ctrl.pane != "board",
                "lpv__icon-ellipsis-vert": ctrl.pane == "board"
            },
            hook: (0, _util.bind)("click", ctrl.toggleMenu)
        }, ctrl.pane == "board" ? undefined : "X"),
        dirButton(ctrl, "next", "right-open"),
        ctrl.pane == "board" ? undefined : dirButton(ctrl, "last", "step-forward")
    ]);
const dirButton = (ctrl, to, icon)=>(0, _snabbdom.h)(`button.lpv__controls__goto.lpv__controls__goto--${to}.lpv__fbt.lpv__icon.lpv__icon-${icon}`, {
        class: {
            disabled: ctrl.pane == "board" && !ctrl.canGoTo(to)
        },
        hook: (0, _util.onInsert)((el)=>(0, _util.bindMobileMousedown)(el, (e)=>(0, _events.eventRepeater)(()=>ctrl.goTo(to), e)))
    });

},{"snabbdom":"Rkydo","./util":"8C7TE","../events":"u108d","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"itPrr":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "renderMoves", ()=>renderMoves);
var _snabbdom = require("snabbdom");
var _path = require("../path");
const renderMoves = (ctrl)=>(0, _snabbdom.h)("div.lpv__side", (0, _snabbdom.h)("div.lpv__moves", {
        hook: {
            insert: (vnode)=>{
                const el = vnode.elm;
                if (!ctrl.path.empty()) autoScroll(ctrl, el);
                el.addEventListener("mousedown", (e)=>{
                    const path = e.target.getAttribute("p");
                    if (path) ctrl.toPath(new (0, _path.Path)(path));
                }, {
                    passive: true
                });
            },
            postpatch: (_, vnode)=>{
                if (ctrl.autoScrollRequested) {
                    autoScroll(ctrl, vnode.elm);
                    ctrl.autoScrollRequested = false;
                }
            }
        }
    }, [
        ...ctrl.game.initial.comments.map(commentNode),
        ...makeMoveNodes(ctrl)
    ]));
const emptyMove = ()=>(0, _snabbdom.h)("move.empty", "...");
const indexNode = (turn)=>(0, _snabbdom.h)("index", `${turn}.`);
const commentNode = (comment)=>(0, _snabbdom.h)("comment", comment);
const parenOpen = ()=>(0, _snabbdom.h)("paren.open", "(");
const parenClose = ()=>(0, _snabbdom.h)("paren.close", ")");
const moveTurn = (move)=>Math.floor((move.ply - 1) / 2) + 1;
const makeMoveNodes = (ctrl)=>{
    const moveDom = renderMove(ctrl);
    const elms = [];
    let node, variations = ctrl.game.moves.children.slice(1);
    if (ctrl.game.initial.pos.turn == "black" && ctrl.game.mainline[0]) elms.push(indexNode(ctrl.game.initial.pos.fullmoves), emptyMove());
    while(node = (node || ctrl.game.moves).children[0]){
        const move = node.data;
        const oddMove = move.ply % 2 == 1;
        if (oddMove) elms.push(indexNode(moveTurn(move)));
        elms.push(moveDom(move));
        const addEmptyMove = oddMove && (variations.length || move.comments.length) && node.children.length;
        if (addEmptyMove) elms.push(emptyMove());
        move.comments.forEach((comment)=>elms.push(commentNode(comment)));
        variations.forEach((variation)=>elms.push(makeMainVariation(moveDom, variation)));
        if (addEmptyMove) elms.push(indexNode(moveTurn(move)), emptyMove());
        variations = node.children.slice(1);
    }
    return elms;
};
const makeMainVariation = (moveDom, node)=>(0, _snabbdom.h)("variation", [
        ...node.data.startingComments.map(commentNode),
        ...makeVariationMoves(moveDom, node)
    ]);
const makeVariationMoves = (moveDom, node)=>{
    let elms = [];
    let variations = [];
    if (node.data.ply % 2 == 0) elms.push((0, _snabbdom.h)("index", [
        moveTurn(node.data),
        "..."
    ]));
    do {
        const move = node.data;
        if (move.ply % 2 == 1) elms.push((0, _snabbdom.h)("index", [
            moveTurn(move),
            "."
        ]));
        elms.push(moveDom(move));
        move.comments.forEach((comment)=>elms.push(commentNode(comment)));
        variations.forEach((variation)=>{
            elms = [
                ...elms,
                parenOpen(),
                ...makeVariationMoves(moveDom, variation),
                parenClose()
            ];
        });
        variations = node.children.slice(1);
        node = node.children[0];
    }while (node);
    return elms;
};
const renderMove = (ctrl)=>(move)=>(0, _snabbdom.h)("move", {
            class: {
                current: ctrl.path.equals(move.path),
                ancestor: ctrl.path.contains(move.path),
                good: move.nags.includes(1),
                mistake: move.nags.includes(2),
                brilliant: move.nags.includes(3),
                blunder: move.nags.includes(4),
                interesting: move.nags.includes(5),
                inaccuracy: move.nags.includes(6)
            },
            attrs: {
                p: move.path.path
            }
        }, move.san);
const autoScroll = (ctrl, cont)=>{
    const target = cont.querySelector(".current");
    if (!target) {
        cont.scrollTop = ctrl.path.empty() ? 0 : 99999;
        return;
    }
    cont.scrollTop = target.offsetTop - cont.offsetHeight / 2 + target.offsetHeight;
};

},{"snabbdom":"Rkydo","../path":"9rRU7","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"cRGcT":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "default", ()=>renderPlayer);
var _chessops = require("chessops");
var _snabbdom = require("snabbdom");
function renderPlayer(ctrl, side) {
    const color = side == "bottom" ? ctrl.orientation() : (0, _chessops.opposite)(ctrl.orientation());
    const player = ctrl.game.players[color];
    const personEls = [
        player.title ? (0, _snabbdom.h)("span.lpv__player__title", player.title) : undefined,
        (0, _snabbdom.h)("span.lpv__player__name", player.name),
        player.rating ? (0, _snabbdom.h)("span.lpv__player__rating", [
            "(",
            player.rating,
            ")"
        ]) : undefined
    ];
    return (0, _snabbdom.h)(`div.lpv__player.lpv__player--${side}`, [
        player.isLichessUser ? (0, _snabbdom.h)("a.lpv__player__person.ulpt.user-link", {
            attrs: {
                href: `${ctrl.opts.lichess}/@/${player.name}`
            }
        }, personEls) : (0, _snabbdom.h)("span.lpv__player__person", personEls),
        ctrl.opts.showClocks ? renderClock(ctrl, color) : undefined
    ]);
}
const renderClock = (ctrl, color)=>{
    const move = ctrl.curData();
    const clock = move.clocks && move.clocks[color];
    return (0, _snabbdom.h)("div.lpv__player__clock", {
        class: {
            active: color == move.turn
        }
    }, clockContent(clock));
};
const clockContent = (seconds)=>{
    if (!seconds && seconds !== 0) return [
        "-"
    ];
    const date = new Date(seconds * 1000), sep = ":", baseStr = pad2(date.getUTCMinutes()) + sep + pad2(date.getUTCSeconds());
    return seconds >= 3600 ? [
        Math.floor(seconds / 3600) + sep + baseStr
    ] : [
        baseStr
    ];
};
const pad2 = (num)=>(num < 10 ? "0" : "") + num;

},{"chessops":"3T435","snabbdom":"Rkydo","@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}],"a2LYF":[function(require,module,exports) {
var parcelHelpers = require("@parcel/transformer-js/src/esmodule-helpers.js");
parcelHelpers.defineInteropFlag(exports);
parcelHelpers.export(exports, "default", ()=>function(element, cfg) {
        const opts = {
            ...defaults
        };
        deepMerge(opts, cfg);
        if (opts.fen) opts.pgn = `[FEN "${opts.fen}"]\n${opts.pgn}`;
        if (!opts.classes) opts.classes = element.className;
        return opts;
    });
const defaults = {
    pgn: "*",
    fen: undefined,
    showPlayers: "auto",
    showClocks: true,
    showMoves: "auto",
    showControls: true,
    scrollToMove: true,
    orientation: undefined,
    initialPly: 0,
    chessground: {},
    drawArrows: true,
    menu: {
        getPgn: {
            enabled: true,
            fileName: undefined
        }
    },
    lichess: "https://lichess.org",
    classes: undefined
};
function deepMerge(base, extend) {
    for(const key in extend)if (typeof extend[key] !== "undefined") {
        if (isPlainObject(base[key]) && isPlainObject(extend[key])) deepMerge(base[key], extend[key]);
        else base[key] = extend[key];
    }
}
function isPlainObject(o) {
    if (typeof o !== "object" || o === null) return false;
    const proto = Object.getPrototypeOf(o);
    return proto === Object.prototype || proto === null;
}

},{"@parcel/transformer-js/src/esmodule-helpers.js":"gkKU3"}]},["2UeK4","bB7Pu"], "bB7Pu", "parcelRequire94c2")

//# sourceMappingURL=index.js.map
