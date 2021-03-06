/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUserTransformView : UIView <UIScrollViewDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    }  __contentCenter;
    float  __contentZoomScale;
    float  __desiredZoomScale;
    CADisplayLink * __displayLink;
    float  __doubleTapZoomScale;
    BOOL  __isAnimatingZoomEnd;
    BOOL  __isContentAnimating;
    BOOL  __isUpdatingState;
    BOOL  __isUserDeceleratingPan;
    BOOL  __isUserEndingZoom;
    BOOL  __isUserPanning;
    BOOL  __isUserPanningOrDecelerating;
    BOOL  __isUserZooming;
    BOOL  __isUserZoomingOrBouncing;
    BOOL  __needsUpdateAnimatingZoomEnd;
    BOOL  __needsUpdateContentState;
    BOOL  __needsUpdateShouldTrackContentAnimation;
    BOOL  __needsUpdateUserAffineTransform;
    BOOL  __needsUpdateUserInteracting;
    BOOL  __needsUpdateUserPanningOrDecelerating;
    BOOL  __needsUpdateUserZoomingOrBouncing;
    BOOL  __needsUpdateZoomAndScroll;
    int  __numberOfNestedStateChanges;
    int  __numberOfNestedZoomAndScrollChanges;
    float  __preferredMaximumZoomScale;
    float  __preferredMinimumZoomScale;
    UIView * __scrollContentView;
    UIScrollView * __scrollView;
    BOOL  __shouldTrackContentAnimation;
    BOOL  __updatingScrollView;
    BOOL  __wasUserInteractingBeforeStateUpdate;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentPixelSize;
    UIImage * _debugScrollViewContentImage;
    <PUUserTransformViewDelegate> * _delegate;
    struct { 
        BOOL respondsToShouldReceiveTouchAtPoint; 
        BOOL respondsToDidChangeIsUserInteracting; 
    }  _delegateFlags;
    unsigned int  _enabledInteractions;
    BOOL  _isUserInteracting;
    struct CGSize { 
        float width; 
        float height; 
    }  _scrollPadding;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _untransformedContentFrame;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _userAffineTransform;
}

@property (setter=_setContentCenter:, nonatomic) struct CGPoint { float x1; float x2; } _contentCenter;
@property (setter=_setContentZoomScale:, nonatomic) float _contentZoomScale;
@property (setter=_setDesiredZoomScale:, nonatomic) float _desiredZoomScale;
@property (setter=_setDisplayLink:, nonatomic, retain) CADisplayLink *_displayLink;
@property (setter=_setDoubleTapZoomScale:, nonatomic) float _doubleTapZoomScale;
@property (setter=_setAnimatingZoomEnd:, nonatomic) BOOL _isAnimatingZoomEnd;
@property (setter=_setContentAnimating:, nonatomic) BOOL _isContentAnimating;
@property (setter=_setUpdatingState:, nonatomic) BOOL _isUpdatingState;
@property (setter=_setUserDeceleratingPan:, nonatomic) BOOL _isUserDeceleratingPan;
@property (setter=_setUserEndingZoom:, nonatomic) BOOL _isUserEndingZoom;
@property (setter=_setUserPanning:, nonatomic) BOOL _isUserPanning;
@property (setter=_setUserPanningOrDecelerating:, nonatomic) BOOL _isUserPanningOrDecelerating;
@property (setter=_setUserZooming:, nonatomic) BOOL _isUserZooming;
@property (setter=_setUserZoomingOrBouncing:, nonatomic) BOOL _isUserZoomingOrBouncing;
@property (setter=_setNeedsUpdateAnimatingZoomEnd:, nonatomic) BOOL _needsUpdateAnimatingZoomEnd;
@property (setter=_setNeedsUpdateContentState:, nonatomic) BOOL _needsUpdateContentState;
@property (setter=_setNeedsUpdateShouldTrackContentAnimation:, nonatomic) BOOL _needsUpdateShouldTrackContentAnimation;
@property (setter=_setNeedsUpdateUserAffineTransform:, nonatomic) BOOL _needsUpdateUserAffineTransform;
@property (setter=_setNeedsUpdateUserInteracting:, nonatomic) BOOL _needsUpdateUserInteracting;
@property (setter=_setNeedsUpdateUserPanningOrDecelerating:, nonatomic) BOOL _needsUpdateUserPanningOrDecelerating;
@property (setter=_setNeedsUpdateUserZoomingOrBouncing:, nonatomic) BOOL _needsUpdateUserZoomingOrBouncing;
@property (setter=_setNeedsUpdateZoomAndScroll:, nonatomic) BOOL _needsUpdateZoomAndScroll;
@property (setter=_setNumberOfNestedStateChanges:, nonatomic) int _numberOfNestedStateChanges;
@property (setter=_setNumberOfNestedZoomAndScrollChanges:, nonatomic) int _numberOfNestedZoomAndScrollChanges;
@property (setter=_setPreferredMaximumZoomScale:, nonatomic) float _preferredMaximumZoomScale;
@property (setter=_setPreferredMinimumZoomScale:, nonatomic) float _preferredMinimumZoomScale;
@property (nonatomic, readonly) UIView *_scrollContentView;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (setter=_setShouldTrackContentAnimation:, nonatomic) BOOL _shouldTrackContentAnimation;
@property (getter=_isUpdatingScrollView, setter=_setUpdatingScrollView:, nonatomic) BOOL _updatingScrollView;
@property (setter=_setWasUserInteractingBeforeStateUpdate:, nonatomic) BOOL _wasUserInteractingBeforeStateUpdate;
@property (nonatomic) struct CGSize { float x1; float x2; } contentPixelSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIImage *debugScrollViewContentImage;
@property (nonatomic) <PUUserTransformViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int enabledInteractions;
@property (readonly) unsigned int hash;
@property (setter=_setUserInteracting:, nonatomic) BOOL isUserInteracting;
@property (nonatomic) struct CGSize { float x1; float x2; } scrollPadding;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } untransformedContentFrame;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } userAffineTransform;

- (void).cxx_destruct;
- (void)_assertInsideStateChangeBlock;
- (void)_assertInsideStateUpdate;
- (void)_assertInsideZoomAndScrollChangeBlock;
- (struct CGPoint { float x1; float x2; })_contentCenter;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetsForContentScale:(float)arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetAdjustmentForContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (float)_contentZoomScale;
- (float)_desiredZoomScale;
- (void)_didChangeState;
- (id)_displayLink;
- (float)_doubleTapZoomScale;
- (void)_handleDisplayLink:(id)arg1;
- (void)_invalidateAnimatingZoomEnd;
- (void)_invalidateContentState;
- (void)_invalidateScrollView;
- (void)_invalidateShouldTrackContentAnimation;
- (void)_invalidateUserAffineTransform;
- (void)_invalidateUserInteracting;
- (void)_invalidateUserPanningOrDecelerating;
- (void)_invalidateUserZoomingOrBouncing;
- (void)_invalidateZoomAndScroll;
- (BOOL)_isAnimatingZoomEnd;
- (BOOL)_isContentAnimating;
- (BOOL)_isUpdatingScrollView;
- (BOOL)_isUpdatingState;
- (BOOL)_isUserDeceleratingPan;
- (BOOL)_isUserEndingZoom;
- (BOOL)_isUserPanning;
- (BOOL)_isUserPanningOrDecelerating;
- (BOOL)_isUserZooming;
- (BOOL)_isUserZoomingOrBouncing;
- (BOOL)_needsStateUpdate;
- (BOOL)_needsUpdateAnimatingZoomEnd;
- (BOOL)_needsUpdateContentState;
- (BOOL)_needsUpdateShouldTrackContentAnimation;
- (BOOL)_needsUpdateUserAffineTransform;
- (BOOL)_needsUpdateUserInteracting;
- (BOOL)_needsUpdateUserPanningOrDecelerating;
- (BOOL)_needsUpdateUserZoomingOrBouncing;
- (BOOL)_needsUpdateZoomAndScroll;
- (int)_numberOfNestedStateChanges;
- (int)_numberOfNestedZoomAndScrollChanges;
- (void)_performStateChanges:(id /* block */)arg1;
- (void)_performZoomAndScrollChanges:(id /* block */)arg1;
- (float)_preferredMaximumZoomScale;
- (float)_preferredMinimumZoomScale;
- (id)_scrollContentView;
- (id)_scrollView;
- (void)_setAnimatingZoomEnd:(BOOL)arg1;
- (void)_setContentAnimating:(BOOL)arg1;
- (void)_setContentCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setContentZoomScale:(float)arg1;
- (void)_setDesiredZoomScale:(float)arg1;
- (void)_setDisplayLink:(id)arg1;
- (void)_setDoubleTapZoomScale:(float)arg1;
- (void)_setEnabledInteractions:(unsigned int)arg1;
- (void)_setNeedsStateUpdate;
- (void)_setNeedsUpdateAnimatingZoomEnd:(BOOL)arg1;
- (void)_setNeedsUpdateContentState:(BOOL)arg1;
- (void)_setNeedsUpdateShouldTrackContentAnimation:(BOOL)arg1;
- (void)_setNeedsUpdateUserAffineTransform:(BOOL)arg1;
- (void)_setNeedsUpdateUserInteracting:(BOOL)arg1;
- (void)_setNeedsUpdateUserPanningOrDecelerating:(BOOL)arg1;
- (void)_setNeedsUpdateUserZoomingOrBouncing:(BOOL)arg1;
- (void)_setNeedsUpdateZoomAndScroll:(BOOL)arg1;
- (void)_setNumberOfNestedStateChanges:(int)arg1;
- (void)_setNumberOfNestedZoomAndScrollChanges:(int)arg1;
- (void)_setPreferredMaximumZoomScale:(float)arg1;
- (void)_setPreferredMinimumZoomScale:(float)arg1;
- (void)_setShouldTrackContentAnimation:(BOOL)arg1;
- (void)_setUpdatingScrollView:(BOOL)arg1;
- (void)_setUpdatingState:(BOOL)arg1;
- (void)_setUserAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_setUserDeceleratingPan:(BOOL)arg1;
- (void)_setUserEndingZoom:(BOOL)arg1;
- (void)_setUserInteracting:(BOOL)arg1;
- (void)_setUserPanning:(BOOL)arg1;
- (void)_setUserPanningOrDecelerating:(BOOL)arg1;
- (void)_setUserZooming:(BOOL)arg1;
- (void)_setUserZoomingOrBouncing:(BOOL)arg1;
- (void)_setWasUserInteractingBeforeStateUpdate:(BOOL)arg1;
- (BOOL)_shouldTrackContentAnimation;
- (void)_updateAnimatingZoomEndIfNeeded;
- (void)_updateContentStateIfNeeded;
- (void)_updateDisplayLink;
- (void)_updateScrollView;
- (void)_updateShouldTrackContentAnimationIfNeeded;
- (void)_updateStateIfNeeded;
- (void)_updateUserAffineTransformIfNeeded;
- (void)_updateUserInteractingIfNeeded;
- (void)_updateUserPanningOrDeceleratingIfNeeded;
- (void)_updateUserZoomingOrBouncingIfNeeded;
- (void)_updateZoomAndScrollIfNeeded;
- (BOOL)_wasUserInteractingBeforeStateUpdate;
- (void)_willChangeState;
- (BOOL)contentContainsLocationFromProvider:(id)arg1;
- (struct CGSize { float x1; float x2; })contentPixelSize;
- (id)debugScrollViewContentImage;
- (id)delegate;
- (unsigned int)enabledInteractions;
- (void)handleDoubleTapWithLocationProvider:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isUserInteracting;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })scrollPadding;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setContentPixelSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDebugScrollViewContentImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledInteractions:(unsigned int)arg1;
- (void)setScrollPadding:(struct CGSize { float x1; float x2; })arg1;
- (void)setUntransformedContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUserAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })untransformedContentFrame;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })userAffineTransform;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
