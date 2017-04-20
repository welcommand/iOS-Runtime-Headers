/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler> {
    IKJSInspectorController * _controller;
    NSURL * _defaultStyleSheetURL;
    IKViewElementStyleFactory * _styleFactory;
    IKCSSStylesheet * _stylesheet;
}

@property (nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_getMatchedStyleRulesForNode:(id)arg1;
- (id)_getStringForStyleName:(id)arg1 value:(id)arg2 inStyle:(id)arg3;
- (id)_processClassSelector:(id)arg1;
- (id)_templateNameForDocument:(id)arg1;
- (void)addRuleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 contextNodeId:(int)arg3 selector:(id)arg4;
- (void)addRuleWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3 selector:(id)arg4;
- (id)controller;
- (void)createStyleSheetWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 frameId:(id)arg3;
- (void)disableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)enableWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)forcePseudoStateWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 forcedPseudoClasses:(id)arg4;
- (void)getAllStyleSheetsWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getComputedStyleForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getInlineStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3;
- (void)getMatchedStylesForNodeWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 nodeId:(int)arg3 includePseudo:(BOOL*)arg4 includeInherited:(BOOL*)arg5;
- (void)getNamedFlowCollectionWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 documentNodeId:(int)arg3;
- (void)getStyleSheetTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3;
- (void)getStyleSheetWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3;
- (void)getSupportedCSSPropertiesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (void)getSupportedSystemFontFamilyNamesWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)resetStylesFromNode:(id)arg1;
- (void)setPropertyTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 text:(id)arg5 overwrite:(BOOL)arg6;
- (void)setRuleSelectorWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 ruleId:(id)arg3 selector:(id)arg4;
- (void)setStyleSheetTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleSheetId:(id)arg3 text:(id)arg4;
- (void)setStyleTextWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 text:(id)arg4;
- (void)togglePropertyWithErrorCallback:(id /* block */)arg1 successCallback:(id /* block */)arg2 styleId:(id)arg3 propertyIndex:(int)arg4 disable:(BOOL)arg5;
- (void)updateStylesheets;

@end