(function($,window,undefined){"use strict";var pluginName="bindings";window.requestIdleCallback=window.requestIdleCallback||function(cb){var start=Date.now();return setTimeout(function(){cb({didTimeout:false,timeRemaining:function(){return Math.max(0,50-(Date.now()-start))}})},1)};window.cancelIdleCallback=window.cancelIdleCallback||function(id){clearTimeout(id)};function getMethod(hasVal,type){if(type==="checkbox"){return"checked"}if(hasVal){return"val"}return"html"}function Plugin(bindings,opts){var attribute=opts&&opts.attribute?opts.attribute:"data-bind";var self=this;var $elements;var shouldListen=false;this.bindings=new Proxy(bindings||{},{set:function(obj,prop,newval){$elements=$("["+attribute+"="+prop+"]");shouldListen=!obj[prop];$elements.each(function(){var $this=$(this);var hasVal=$this.is("select, options, input, textarea");var method=getMethod(hasVal,$this.attr("type"));window.requestIdleCallback(function(){if(method==="checked"){$this.attr(method,newval)}else{$this[method](newval)}});if(shouldListen){var key=$this.attr("data-bind");$this.on("keyup change",function(){self.bindings[key]=method==="checked"?$this.is(":checked"):$this[method]()})}});obj[prop]=newval;return true}});this._name=pluginName;this.init(attribute);return this.bindings}Plugin.prototype.init=function(attribute){var self=this;var $elements=$("["+attribute+"]");$elements.each(function(){var $this=$(this);var key=$this.attr(attribute);var hasVal=$this.is("select, options, input, textarea");var method=getMethod(hasVal,$this.attr("type"));window.requestIdleCallback(function(){if(method==="checked"){$this.attr(method,self.bindings[key])}else{$this[method](self.bindings[key])}});$this.on("keyup change",function(){self.bindings[key]=method==="checked"?$this.is(":checked"):$this[method]()})})};$[pluginName]=function(bindings){var plugin=$.data(this,"plugin_"+pluginName);if(!plugin){plugin=new Plugin(bindings);$.data(this,"plugin_"+pluginName,plugin)}return plugin}})(jQuery,window);