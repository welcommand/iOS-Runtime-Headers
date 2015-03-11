/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCallModel : TUCallModel {
    int _ambiguityState;
    bool_addCallAllowed;
    bool_endAndAnswerAllowed;
    bool_hardPauseAvailable;
    bool_holdAllowed;
    bool_holdAndAnswerAllowed;
    bool_mergeable;
    bool_sendToVoicemailAllowed;
    bool_swappable;
    bool_takingCallsPrivateAllowed;
}

@property(getter=isAddCallAllowed) bool addCallAllowed;
@property int ambiguityState;
@property(getter=isEndAndAnswerAllowed) bool endAndAnswerAllowed;
@property(getter=isHardPauseAvailable) bool hardPauseAvailable;
@property(getter=isHoldAllowed) bool holdAllowed;
@property(getter=isHoldAndAnswerAllowed) bool holdAndAnswerAllowed;
@property(getter=isMergeable) bool mergeable;
@property(getter=isSendToVoicemailAllowed) bool sendToVoicemailAllowed;
@property(getter=isSwappable) bool swappable;
@property(getter=isTakingCallsPrivateAllowed) bool takingCallsPrivateAllowed;

+ (id)sharedInstance;

- (int)ambiguityState;
- (bool)isAddCallAllowed;
- (bool)isEndAndAnswerAllowed;
- (bool)isHardPauseAvailable;
- (bool)isHoldAllowed;
- (bool)isHoldAndAnswerAllowed;
- (bool)isMergeable;
- (bool)isSendToVoicemailAllowed;
- (bool)isSwappable;
- (bool)isTakingCallsPrivateAllowed;
- (void)setAddCallAllowed:(bool)arg1;
- (void)setAmbiguityState:(int)arg1;
- (void)setEndAndAnswerAllowed:(bool)arg1;
- (void)setHardPauseAvailable:(bool)arg1;
- (void)setHoldAllowed:(bool)arg1;
- (void)setHoldAndAnswerAllowed:(bool)arg1;
- (void)setMergeable:(bool)arg1;
- (void)setSendToVoicemailAllowed:(bool)arg1;
- (void)setSwappable:(bool)arg1;
- (void)setTakingCallsPrivateAllowed:(bool)arg1;
- (void)updateWithCallModelState:(id)arg1;

@end